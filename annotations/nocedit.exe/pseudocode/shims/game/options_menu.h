#pragma once

// =============================================================================
// OPTIONS MENU — the Options screen and the pages under it
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, which carries the reasoning. Pages
// run by core/menu_page: Options, and under it Gameplay (the assists,
// subtitles, the two fonts and the rating, gathered from the shipped Graphics
// and Control Options screens so each page fits below the logo) and Graphic
// Options (the display). Sound and Control Options
// are pages of their own (game/sound_options, game/control_options), reached
// from here.

#ifdef __cplusplus
extern "C" {
#endif

// showOptionsScreen: from the pause menu with `initialize_systems` 1, which
// starts the menu music and the moon and stops them after; from the main menu
// with 0, where both are already running.
void nocturne_options_menu(int initialize_systems);

// configureGraphicsOptions: the Graphic Options page.
void nocturne_graphics_options_menu(void);

#ifdef __cplusplus
}
#endif
