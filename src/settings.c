

#include "settings.h"
#include "ipc-protocol.h"
#include "utils.h"

#include <glib.h>
#include <string.h>
#include <stdio.h>


// default settings:
SettingsPair g_settings[] = {
    { "border_width", { .i = 2 }, .type = HS_Int },
    { "border_color", { .s = "red" } },
};


void settings_init() {
    // recreate all strings -> move them to heap
    int i;
    for (i = 0; i < LENGTH(g_settings); i++) {
        if (g_settings[i].type == HS_String) {
            g_settings[i].value.s = g_strdup(g_settings[i].value.s);
        }
    }
}

void settings_destroy() {
    // free all strings
    int i;
    for (i = 0; i < LENGTH(g_settings); i++) {
        if (g_settings[i].type == HS_String) {
            g_free(g_settings[i].value.s);
        }
    }
}


SettingsPair* settings_find(char* name) {
    int i;
    for (i = 0; i < LENGTH(g_settings); i++) {
        if (!strcmp(g_settings[i].name, name)) {
            return g_settings + i;
        }
    }
    return NULL;
}

int settings_set(int argc, char** argv) {
    if (argc < 3) {
        return HERBST_INVALID_ARGUMENT;
    }
    SettingsPair* pair = settings_find(argv[1]);
    if (!pair) {
        return HERBST_SETTING_NOT_FOUND;
    }
    if (pair->type == HS_Int) {
        int new_value;
        // parse value to int, if possible
        if (1 == sscanf(argv[2], "%d", &new_value)) {
            pair->value.i = new_value;
        } else {
            return HERBST_INVALID_ARGUMENT;
        }
    } else { // pair->type == HS_String
        g_free(pair->value.s);
        pair->value.s = g_strdup(argv[2]);
    }
    return 0;
}

int settings_get(int argc, char** argv, GString** output) {
    if (argc < 2) {
        return HERBST_INVALID_ARGUMENT;
    }
    SettingsPair* pair = settings_find(argv[1]);
    if (!pair) {
        return HERBST_SETTING_NOT_FOUND;
    }
    if (pair->type == HS_Int) {
        g_string_printf(*output, "%d", pair->value.i);
    } else { // pair->type == HS_String
        *output = g_string_assign(*output, pair->value.s);
    }
    return 0;
}



