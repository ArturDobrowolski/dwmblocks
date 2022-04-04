# Artur's build of dwmblocks

Originally forked from [torrinfail](https://github.com/torrinfail/dwmblocks) dwmblocks is a modular statusbar for dwm.

My build includes several changes:
1. The statuscmd patch has been applied which allows dwmblocks to communicate with dwm. With the use of `$BUTTON` variable the patch allows you to run custom task triggered eg. by mouse button click.
2. Configuration files are now renamed to more suckless-like convention.
3. Unused variables have been removed.

## Installation
To install dwmblocks simply run:
```
make clean install
```

## Running dwmblocks
Invoke the `dwmblocks` command.

## Additional info
Please note that in order to make a full use of my dwmblocks build you also need to clone my statusbar [scripts](https://github.com/arturdobrowolski/scripts). These scripts must reside inside system PATH.

