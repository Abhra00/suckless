/* See LICENSE file for copyright and license details. */

/* winicon size */
#define ICONSIZE 22   /* icon size */
#define ICONSPACING 5 /* space between icon and title */


/* appearance */
static const unsigned int borderpx  	  = 0;        /* border pixel of windows */
static const unsigned int fborderpx 	  = 5;        /* border pixel of floating windows */
static const unsigned int snap      	  = 32;       /* snap pixel */
static const int swallowfloating    	  = 0;        /* 1 means swallow floating windows by default */
static const unsigned int gappih    	  = 20;       /* horiz inner gap between windows */
static const unsigned int gappiv    	  = 10;       /* vert inner gap between windows */
static const unsigned int gappoh    	  = 10;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    	  = 30;       /* vert outer gap between windows and screen edge */
static       int smartgaps          	  = 0;        /* 1 means no outer gap when there is only one window */
static const unsigned int systraypinning  = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayspacing  = 2;   /* systray spacing */
static const int systraypinningfailfirst  = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        	  = 1;        /* 0 means no systray */
static const unsigned int systrayiconsize = 30; /* systray icon size in px */
static const int showbar            	  = 1;        /* 0 means no bar */
static const int topbar             	  = 1;        /* 0 means bottom bar */
static const int vertpad            	  = 10;       /* vertical padding of bar */
static const int sidepad            	  = 10;       /* horizontal padding of bar */
static const int horizpadbar        	  = 5;        /* horizontal padding for statusbar */
static const int vertpadbar         	  = 18;       /* vertical padding for statusbar */
static const char *fonts[]          	  = { "IosevkaMayukaiCodepro:size=10" ,"Symbols Nerd Font:size=14" };
static const char dmenufont[]       	  = "IosevkaMayukaiCodepro:size=10";
static const int colorfultag        	  = 1;        /* 0 means use SchemeSel for selected non vacant tag */
static char normbgcolor[]           	  = "#222222";
static char normbordercolor[]       	  = "#444444";
static char normfgcolor[]          	  = "#bbbbbb";
static char selfgcolor[]            	  = "#eeeeee";
static char selbordercolor[]        	  = "#005577";
static char selbgcolor[]            	  = "#005577";
static char termcol0[] 			  = "#000000"; /* black   */
static char termcol1[] 			  = "#ff0000"; /* red     */
static char termcol2[] 			  = "#33ff00"; /* green   */
static char termcol3[] 			  = "#ff0099"; /* yellow  */
static char termcol4[] 			  = "#0066ff"; /* blue    */
static char termcol5[] 			  = "#cc00ff"; /* magenta */
static char termcol6[] 			  = "#00ffff"; /* cyan    */
static char termcol7[] 			  = "#d0d0d0"; /* white   */
static char termcol8[]  		  = "#808080"; /* black   */
static char termcol9[]  		  = "#ff0000"; /* red     */
static char termcol10[] 		  = "#33ff00"; /* green   */
static char termcol11[] 		  = "#ff0099"; /* yellow  */
static char termcol12[] 		  = "#0066ff"; /* blue    */
static char termcol13[] 		  = "#cc00ff"; /* magenta */
static char termcol14[] 		  = "#00ffff"; /* cyan    */
static char termcol15[]  		  = "#ffffff"; /* white   */
static char *termcolor[] = {
  termcol0,
  termcol1,
  termcol2,
  termcol3,
  termcol4,
  termcol5,
  termcol6,
  termcol7,
  termcol8,
  termcol9,
  termcol10,
  termcol11,
  termcol12,
  termcol13,
  termcol14,
  termcol15,
};
static char *colors[][3] = {
       /*               	fg           bg            border   	*/
       [SchemeNorm] 	  = { normfgcolor, normbgcolor,  normbordercolor },
       [SchemeSel]  	  = { selfgcolor,  selbgcolor,   selbordercolor  },
       [SchemeTitle]      = { termcol15,   selbgcolor,   normbordercolor },
       [SchemeTag]        = { selfgcolor,  normbgcolor,  normbordercolor },
       [SchemeTag1]       = { termcol2,    normbgcolor,  normbordercolor },
       [SchemeTag2]       = { termcol3,    normbgcolor,  normbordercolor },
       [SchemeTag3]       = { termcol4,    normbgcolor,  normbordercolor },
       [SchemeTag4]       = { termcol5,    normbgcolor,  normbordercolor },
       [SchemeTag5]       = { termcol6,    normbgcolor,  normbordercolor },
       [SchemeTag6]       = { termcol7,    normbgcolor,  normbordercolor },
       [SchemeTag7]       = { termcol9,    normbgcolor,  normbordercolor },
       [SchemeTag8]       = { termcol10,   normbgcolor,  normbordercolor },
       [SchemeTag9]       = { termcol11,   normbgcolor,  normbordercolor },
       [SchemeLayout]     = { termcol13,   normbgcolor,  normbordercolor },
};

/* sticky icon */
static const XPoint stickyicon[]    = { {0,0}, {4,0}, {4,8}, {2,6}, {0,8}, {0,0} }; /* represents the icon as an array of vertices */
static const XPoint stickyiconbb    = {4,8};	/* defines the bottom right corner of the polygon's bounding box (speeds up scaling) */

/* scratchpads */
typedef struct {
	const char *name;
	const void *cmd;
} Sp;
const char *spcmd1[] = {"st", "-n", "spterm",  "-g", "120x34", NULL };
const char *spcmd2[] = {"st", "-n", "spfm",    "-g", "144x41", "-e", "lfrun", NULL };
const char *spcmd3[] = {"st", "-n", "spmusic", "-g", "160x20", "-e", "ncmpcpp", NULL };
static Sp scratchpads[] = {
	/* name          cmd  */
	{"spterm",      spcmd1},
	{"splf",    	spcmd2},
	{"spncmpcpp",   spcmd3},
};

/* tagging */
static const char *tags[]         = { "", "", "󰈹", "󰓇", "󰠖", "󱍢", "", "", "" };
static const char *tagsalt[] 	  = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const int momentaryalttags = 0; /* 1 means alttags will show only when key is held down*/

/* tag underline */
static const unsigned int ulinepad	= 5;	/* horizontal padding between the underline and tag */
static const unsigned int ulinestroke	= 2;	/* thickness / height of the underline */
static const unsigned int ulinevoffset	= 0;	/* how far above the bottom of the bar the line should appear */
static const int ulineall 		= 0;	/* 1 to show underline on all tags, 0 for just the active ones */

/* tag schemes */
static const int tagschemes[] = {
    SchemeTag1, SchemeTag2, SchemeTag3, SchemeTag4, SchemeTag5, SchemeTag6, SchemeTag7, SchemeTag8, SchemeTag9,
};


/* rules */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title            tags mask  isfloating  isterminal  noswallow  monitor */
	{ "Gimp",     NULL,       NULL,            0,         1,          0,           0,        -1 },
	{ "Firefox",  NULL,       NULL,            1 << 8,    0,          0,          -1,        -1 },
	{ "st",       NULL,       NULL,            0,         0,          1,           0,        -1 },
	{ NULL,	      "spterm",   NULL,		   SPTAG(0),  1,	  0,	       0, 	 -1 },
	{ NULL,	      "spfm",     NULL,		   SPTAG(1),  1,	  0,           0,	 -1 },
	{ NULL,	      "spmusic",  NULL,		   SPTAG(2),  1,	  0,           0,	 -1 },
	{ NULL,       NULL,       "Event Tester",  0,         0,          0,           1,        -1 }, /* xev */
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

/* extra include */
#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"
#define STATUSBAR "dwmblocks"
#include "shiftview.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
	{ "[\\]",     dwindle },
	{ "H[]",      deck },
	{ "TTT",      bstack },
	{ "===",      bstackhoriz },
	{ "HHH",      grid },
	{ "###",      nrowgrid },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ NULL,       NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#include <X11/XF86keysym.h> /* including function keys */
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },


/* manual stacking */
#define STACKKEYS(MOD,ACTION) \
	{ MOD, XK_j,     ACTION##stack, {.i = INC(+1) } }, \
	{ MOD, XK_k,     ACTION##stack, {.i = INC(-1) } }, \
	{ MOD, XK_grave, ACTION##stack, {.i = 0 } }, \
/*	{ MOD, XK_q,     ACTION##stack, {.i = PREVSEL } }, \  */
/*	{ MOD, XK_a,     ACTION##stack, {.i = 1 } }, \        */
/*	{ MOD, XK_z,     ACTION##stack, {.i = 2 } }, \        */
/*	{ MOD, XK_x,     ACTION##stack, {.i = -1 } },         */

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }


/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, NULL };
static const char *termcmd[]  = { "st", NULL };
static const char *pmenucmd[] = { "pmenu", NULL };

/* volume control */
static const char *vol_up[]   = { "volume", "up",   NULL };
static const char *vol_down[] = { "volume", "down", NULL };
static const char *vol_mute[] = { "volume", "mute", NULL };
static const char *mic_mute[] = { "audiomicmute",   NULL };

/* brightness control */
static const char *light_up[]   = { "backlight", "up",   NULL };
static const char *light_down[] = { "backlight", "down", NULL };

/* dmenuemojicmd */
static const char *emojicmd[]   = { "dmenuunicode",   NULL };

/* torrentcmd */
static const char *torrentcmd[] = { "td-toggle",   NULL };

/* screenshotcmd */
static const char *sscmd[]      = { "flameshot", "gui", NULL };


static const Key keys[] = {
	/* modifier                     key        	function        argument */
        TAGKEYS(                        XK_1,                      	0)
        TAGKEYS(                        XK_2,                      	1)
        TAGKEYS(                        XK_3,                      	2)
        TAGKEYS(                        XK_4,                      	3)
        TAGKEYS(                        XK_5,                      	4)
        TAGKEYS(                        XK_6,                     	5)
        TAGKEYS(                        XK_7,                      	6)
        TAGKEYS(                        XK_8,                      	7)
        TAGKEYS(                        XK_9,                      	8)
        STACKKEYS(MODKEY,                          		   	focus)
        STACKKEYS(MODKEY|ShiftMask,                		   	push)
	{ MODKEY,                       XK_p,      	spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, 	spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_e,           spawn,          {.v = emojicmd } },
	{ MODKEY|ControlMask,           XK_t,           spawn,          {.v = torrentcmd } },
	{ MODKEY|ControlMask,           XK_s,           spawn,          {.v = sscmd } },
	{ MODKEY|Mod1Mask,              XK_x,           spawn,          {.v = pmenucmd } },
	{ MODKEY,                       XK_b,      	togglebar,      {0} },
	{ MODKEY,                       XK_i,      	incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      	incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      	setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      	setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,      	setcfact,       {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,      	setcfact,       {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,      	setcfact,       {.f =  0.00} },
	{ MODKEY,                       XK_Return, 	zoom,           {0} },
	{ MODKEY,                       XK_Tab,    	view,           {0} },
	{ MODKEY|ShiftMask,             XK_c,      	killclient,     {0} },
	{ MODKEY,                       XK_t,      	setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      	setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      	setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,  	setlayout,      {0} },
	{ MODKEY,                       XK_n,      	togglealttag,   {0} },
	{ MODKEY|ShiftMask,             XK_space,  	togglefloating, {0} },
	{ MODKEY,                       XK_s,      	togglesticky,   {0} },
	{ MODKEY|ShiftMask,             XK_a,      	togglescratch,  {.ui = 0 } },
	{ MODKEY|ShiftMask,             XK_s,      	togglescratch,  {.ui = 1 } },
	{ MODKEY|ShiftMask,             XK_d,      	togglescratch,  {.ui = 2 } },
	{ MODKEY|ShiftMask,             XK_f,      	togglefullscr,  {0} },
	{ MODKEY,                       XK_0,      	view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      	tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  	focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, 	focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  	tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, 	tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_F5,     	xrdb,           {.v = NULL } },
	{ MODKEY,                       XK_a,      	togglegaps,     {0} },
	{ MODKEY|ControlMask,           XK_a,      	defaultgaps,    {0} },
	{ MODKEY,                       XK_z,      	incrgaps,       {.i = +3 } },
	{ MODKEY,                       XK_x,      	incrgaps,       {.i = -3 } },
	{ MODKEY,                       XK_g,           shiftview,      { .i = -1 } },
	{ MODKEY|ShiftMask,             XK_g,           shifttag,       { .i = -1 } },
	{ MODKEY,                       XK_semicolon,   shiftview,      { .i = 0 } },
	{ MODKEY|ShiftMask,             XK_semicolon,   shifttag,       { .i = 1 } },
        { MODKEY|ControlMask,           XK_comma,  	cyclelayout,    {.i = -1 } },
        { MODKEY|ControlMask,           XK_period, 	cyclelayout,    {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_q,      	quit,           {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,      	quit,           {1} }, 
	{ 0,         XF86XK_AudioMute,	          	spawn,	        {.v = vol_mute } },
	{ 0,         XF86XK_AudioRaiseVolume,	  	spawn,	        {.v = vol_up } },
	{ 0,         XF86XK_AudioLowerVolume,	  	spawn,	        {.v = vol_down } },
	{ 0,         XF86XK_AudioMicMute,	  	spawn,	        {.v = mic_mute } },
        { 0,         XF86XK_MonBrightnessUp,      	spawn,          {.v = light_up } },
        { 0,         XF86XK_MonBrightnessDown,    	spawn,          {.v = light_down } }, 
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button1,        sigstatusbar,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigstatusbar,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigstatusbar,   {.i = 3} },
        { ClkStatusText,        0,              Button4,        sigstatusbar,   {.i = 4} },
        { ClkStatusText,        0,              Button5,        sigstatusbar,   {.i = 5} },
        { ClkStatusText,        ShiftMask,      Button1,        sigstatusbar,   {.i = 6} },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
	{ ClkTagBar,		0,		Button4,	shiftview,	{.i = -1} },
	{ ClkTagBar,		0,		Button5,	shiftview,	{.i = 1} },
};
