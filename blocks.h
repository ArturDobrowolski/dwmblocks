//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
//	{"",		"~/.local/bin/statusbar/mpc",		1,			12},
	{"",		"statusbar-ethernet",	2,			4},
//	{"",		"statusbar-wifi",		2,			5},
//	{"",		"statusbar-internet",	1200,			7},
//	{"",		"statusbar-cputemp",		2,			13},
	{"",		"statusbar-disk",		5,			16},
	{"",		"statusbar-memory",		2,			14},
//	{"",		"statusbar-battery",		2,			6},
	{"",		"statusbar-feed",		0,			15},
	{"",		"statusbar-updates",		0,			2},
//	{"",		"statusbar-brightness",	0,			11},
	{"",		"statusbar-volume",		2,			10},
	{"",		"statusbar-clock",		2,			1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
