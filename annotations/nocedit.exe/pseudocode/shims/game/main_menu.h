#pragma once

// =============================================================================
// MAIN MENU — the front end's first screen, as a page
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, which carries the reasoning. The
// lines, what each leads to and the hotkeys the screen takes are the shipped
// enterMainGameMenu's, with the additions its keep carries; core/menu_page
// runs it.

#ifdef __cplusplus
extern "C" {
#endif

// What enterMainGameMenu returns: the first for a window too short to show
// the menu, the second when the player quits.
enum { NOCTURNE_MAIN_MENU_TOO_SHORT = 1, NOCTURNE_MAIN_MENU_QUIT = 99 };

// enterMainGameMenu.
int nocturne_main_menu(void);

#ifdef __cplusplus
}
#endif
