#pragma once

// =============================================================================
// MENU RENDER — how a front-end list is drawn, and what a key does to it
// =============================================================================
//
// renderMenuAndGetChoice under NOCTURNE_AUTHENTIC_MENU=0, which carries the
// reasoning; that keep calls this at its top, so every list the front end
// draws comes through here: the menu pages, the cheats, save-slot and
// multiplayer submenus, and the pause screens. It draws as the shipped routine
// did, with two additions: the shimmer on the chosen line takes the cosmetic
// random stream, so a menu drawn mid-netgame moves no simulation random, and
// the build's version sits in the bottom left, facing the copyright.
//
// One place to change how a menu looks.

#ifdef __cplusplus
extern "C" {
#endif

// Draws `title` (null for none) and the `count` lines from `y`, the line at
// *selected highlighted, and takes this frame's keys: up and down move
// *selected, wrapping; on a line with a ':', left answers it with
// g_MenuLeftRightPressed 1 and right with 0; Return answers it. Returns the
// line answered, or -1.
int nocturne_menu_render(char **lines, int count, int *selected, int y, char *title);

#ifdef __cplusplus
}
#endif
