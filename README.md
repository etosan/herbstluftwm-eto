# herbstluftwm-eto

This is **eto's personal fork of herbstluftwm**, an manual tiling window manager for X. 

*It means, it has hacks applied, that are specific to my usage of herbst (herbstluftwm).
For list of hacks see [1](#hacks).*

I hate when project forks don't have default project text modified, and nobody knows how much fork
is modified compared to original thing or what purpose it has. 

So I wrote these paragraphs to set an example. It's much more pleasant to read short prose here, 
than to jump to fork parent, to read exactly same text.

Here is original description:

> Hlwm is licensed under the "Simplified BSD License" (see `LICENSE`).
>
> - the layout is based on splitting frames into subframes which can be split again or can be filled with windows (similar to i3/ musca)
> - tags (or workspaces or virtual desktops or …) can be added/removed at runtime. Each tag contains an own layout
> - exactly one tag is viewed on each monitor. The tags are monitor independent (similar to xmonad)
> - it is configured at runtime via ipc calls from herbstclient. So the configuration file is just a script which is run on startup. (similar to wmii/ musca)
>
> For more, see the herbstluftwm homepage http://herbstluftwm.org -- in
> particular the [herbstluftwm tutorial](http://herbstluftwm.org/tutorial.html)
> for the first steps (also available as `man herbstluftwm-tutorial` after
> installing herbstluftwm on your system).
>
> You are welcome to join the IRC channel `#herbstluftwm` on `irc.freenode.net`.

**As such this fork should be considered officially unsupported.**

If so, why does it exist then?

So you really want to know?

As you insist, I have to answer, but I will use this opportunity for tiny "tiling window manager proganda" as well.

Don't get mad, but as I am quite the "useless talker", I have short little, perhaps almost too personal, story to go with it:
>
> It was at time, I just found this cute little distro (back then), called Arch Linux. 
> I was Linux neophyte, you could say. I am also quite opinionated asshole too. 
>
> Some say it's hubris. So be aware before reading further. It's your call.
>
> I was finally leaving the Windows pastures for good, fleeing like rat, just before Vista disaster.
> On the side note, windows users never mentally and physically recovered from this dreadful event, 
> and windows lands will never be the same. I can still feel their shellshock, when meeting them, years after.
> They all lost sparkle in their eye, turning into husks.
>
> After lot of pondering, I gave few BSDs a try and my heart rejoiced - at last, I finally returned to "sane" systems.
>
> These OSes reminded me so much of my belowed DOS environment, I grew up in as a child, that after taking 
> plunge, I was litterally getting "younger" each day. Even on Windows, I was that weird guy having 
> cmd.exe window always open, longing for return of CLI and TUI interfaces.
>
> I was running 4NT, hundreths of little programs, making me unproductive on "other" Windows installs than my own.
>
> And here, it was not just addons to get work done, it was The System's philosphy.
>
> But these BSDs, while being great, were missing support for crappy hardware present in single machine 
> I could afford to own. I heard it's better with Linux, yet at the same time, I was being repulsed by 
> corporate linux complex (CLC) distros like Debian/Ubuntu, Redhat, Suse and friends.
>
> And then in the middle of the night pointed to right direction by my brother, I found Arch Linux! 
>
> I rejoiced. It was Linux, full of crappy drivers to run crappy hardware, but it was "simple" like 
> BSDs, rc.conf with ports (now called ABS) and all. 
>
> Soon I got into tweaking my machine to suit my needs better, starting by selecting superlight DE of LXDE. 
> To this day I believe that PCManFM author must have beed XP lover like me, just take a clue from design 
> of that FM.
>
> Some time after making my LXDE/GTK based desktop look exactly (pixel perfect) like "Windows Classic" 
> theme (the XP one, pre-Vista shitshock - which I still consider, to this day, most productive windowing 
> environemnt that can be made - useful to actually do some work, and produce anything usable),
> I hit the "limit". 
>
> Yes it all worked great, but it was kinda "same" as before, somehow it had similar "limit" as my 
> original XP box. It still was magnitude "better", yet there was something missing. I started getting 
> hunches, it might be the way application windows were managed. 
>
> I kept hearing about those "window manager" things, the ones that got mentioned to us, Windows GIMP users 
> by GIMP guys themselves:
>
>   "It's your fault that you cannot use GIMP efficiently, because Windows lacks proper window manager".
>
> Truly, there is wisdom in that sentence - but not where you expect it to be. 
>
> Windows, and other OSes, indeed, do lack support for proper window management, so that's the truth. 
> But GIMP sucks even with best windows manager, because it's just, as you might have been suspecting 
> a long time by now, it simply is, really crappy application. 
>
> Sorry GIMP guys, I love you, and I can forgive your ocasional torture of me, and I am hankful that 
> I can draw for free. And I know there wouldn't be GTK (not an issue anymore) and there wouldn't be 
> GNOME (desktop - not that it matters anymore) without GIMP, but it still sucks. 
> Not that it matters anymore. I just had to get it out, to not cause myself a stroke or something.
>
> But there I was, floating above this area of The System, and neing myself I dove deeper. 
>
> I dove into this wonderful world of window managers, learning a ton about X, about ways, one can 
> access information, and do things, you only saw in in those "silly" hollywood movies 
> (and thought that was never possible).
>
> And then I found this specific window manager breed: tiling window managers, tilers. 
>
> Like pokemons, I had try them all. And I did. And it was getting better, I was onto "something".
>
> But most major "tilers" were too "smart", too "automatic", to suit my needs.
>
> Probably, because written by all those smug haskell, lisp and C smartasses.
>
> But God was merciful, and I finally found the one to suit me like a glove: musca.
>
> Those were joyous times. I learned lot, about The System, plenty of "Heureka's!"
> and "Aha!s", why the thing are the way they are.
>
> But in quickly bitrotting Arch Linux environment, musca was lagging more and more behind,
> decaying faster than one would expect. After musca's author went MIA, few of us,
> musca users, remained in the dark.
>
> And then, there, in this very moment, this very dark moment, new wm was announced, to be 
> actually musca clone. By fellow "former" musca user no less!
>
> You guessed it, it was **herbstluftwm**. 
>
> And it is best manual tiler you can get ... for freeeeee!
>
> Thanks thorsten and others, you made my life better! Without you, I would die digital suffocation.
>

But you know, being an asshole and all, after some time, I got tired waiting for some tiny changes to land 
into herbst. Changes probably only I would like to have happen.

And I am still not willing to upset The Manager. 

And that is kids, why this fork exists. I make some small hacks here and there to bend herbst better to my will.

Somebody might find them useful someday. That's why this fork is here.

# Hacks

This herbst fork has following hacks done to it:

- skip_cycle attribute for monitors 
  - each monitor has skip_cycle attribute. 
  - by setting this attribute to 'true' you remove monitor from monitor cycle,
    essentially removing it from monitor rotation.
