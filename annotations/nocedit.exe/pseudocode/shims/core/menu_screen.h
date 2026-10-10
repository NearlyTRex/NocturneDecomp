#pragma once

// =============================================================================
// FRONT-END MENU SCREENS
// =============================================================================
//
// What every list the front end draws through renderMenuAndGetChoice repeats
// each frame: the moon backdrop, a start-y that keeps the last line clear of
// the copyright in a short window, and leaving on Escape or a closed window.
// The main menu, Options, Graphics Options, the single-player and multiplayer
// submenus and the cheats pages all use these.

// The start-y the shipped main menu draws its list from.
#define NOCTURNE_MENU_START_Y 0xfa

// How many character heights a list of `lines` entries takes, below its
// start-y. renderMenuAndGetChoice double-spaces an untitled list and adds a
// line; a titled list is single-spaced and spends lines on the title.
#define NOCTURNE_MENU_ROWS_UNTITLED(lines) ((lines) * 2 + 1)
#define NOCTURNE_MENU_ROWS_TITLED(lines)   ((lines) + 4)

#ifdef __cplusplus
extern "C" {
#endif

// One frame of the moon backdrop: advances the frame time and the moon, and
// draws it. The caller must be between CMoon::init and CMoon::free.
void nocturne_menu_backdrop_frame(void);

// NOCTURNE_MENU_START_Y, lifted where `rows` character heights below it would
// run off a short window, and never above the top.
int nocturne_menu_start_y(int rows);

// 1 when the player has asked to leave: Escape, or the window closing — which
// the Options screen treats as a quit, so a menu must not sit spinning through
// a shutdown.
int nocturne_menu_cancelled(void);

#ifdef __cplusplus
}
#endif
