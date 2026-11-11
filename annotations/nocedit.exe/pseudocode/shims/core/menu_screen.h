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

// The start-y the shipped Sound Options draws its title at: the highest any
// shipped screen puts one, and clear of the logo above it.
#define NOCTURNE_MENU_TITLE_Y 0xe1

// How many character heights a list of `lines` entries takes, below its
// start-y. renderMenuAndGetChoice double-spaces an untitled list and adds a
// line; a titled list is single-spaced and spends lines on the title.
#define NOCTURNE_MENU_ROWS_UNTITLED(lines) ((lines) * 2 + 1)
#define NOCTURNE_MENU_ROWS_TITLED(lines) ((lines) + 4)

struct CGame;

#ifdef __cplusplus
extern "C" {
#endif

// 1 where the app does not end itself: a console's, which the system closes. A
// platform file sets NOCTURNE_PLATFORM_NO_QUIT=1 for it, and the main menu then
// has no QUIT line and Escape on it backs out of nothing
// (NOCTURNE_AUTHENTIC_MENU's main menu page).
extern int g_nocturne_no_quit;

// One frame of the moon backdrop: advances the frame time and the moon, and
// draws it. The caller must be between CMoon::init and CMoon::free.
void nocturne_menu_backdrop_frame(void);

// NOCTURNE_MENU_START_Y, lifted where `rows` character heights below it would
// run off a short window, and never above the top.
int nocturne_menu_start_y(int rows);

// Where a titled list of `lines` entries draws its title. Under
// NOCTURNE_AUTHENTIC_MENU=1, nocturne_menu_start_y's answer for it; at 0,
// NOCTURNE_MENU_TITLE_Y, so every titled screen lines its title up below the
// logo, lifted as that is only when the list would otherwise run off.
int nocturne_menu_titled_y(int lines);

// The left edge of the front end's layout (core/front_end_layout.h) on the
// screen: 0 under NOCTURNE_AUTHENTIC_MENU=1.
int nocturne_menu_left(void);

// The moon's 3D on a front end larger than 640x480. CMoon::render projects it
// into a 640x480 viewport, and an overlay pass (renderer/trigl_device.h)
// stretches that over the whole screen; the projection is widened by how much
// wider than 4:3 the screen is, so the sky and its bats fill it at their own
// proportions rather than stretched. CDemonRenderer's rotation matrix already
// corrects the vertical for the window's width over the viewport's
// (buildRotationMatrix), so widening the field of view by the same ratio is all
// it takes. Returns the field of view to project at: `field_of_view` itself at
// 640x480, or when the software rasteriser is drawing (it draws at the
// screen's own size already), where nothing is done.
float nocturne_menu_scene_begin(float field_of_view);
void nocturne_menu_scene_end(void);

// CGame::setScreenResolutionAndDisplayFangs under NOCTURNE_AUTHENTIC_MENU=0,
// whose keep calls it at its top: the front end's mode (nocturne_front_end_mode)
// where the screen is in another, and the fangs drawn over the layout.
void nocturne_front_end_fangs(struct CGame *game);

// 1 when the player has asked to leave: Escape, or the window closing — which
// the Options screen treats as a quit, so a menu must not sit spinning through
// a shutdown.
int nocturne_menu_cancelled(void);

#ifdef __cplusplus
}
#endif
