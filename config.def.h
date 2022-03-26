//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"", "statusbar-feed",		0, 7},
        {"", "statusbar-cputemp",	0, 6},
        {"", "statusbar-memory",	0, 5},
	{"", "statusbar-disk",		0, 4},
	{"", "statusbar-battery",	0, 3},
        {"", "statusbar-volume",	0, 2},
	{"", "statusbar-clock",		0, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
