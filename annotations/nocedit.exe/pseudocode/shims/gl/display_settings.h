#pragma once

// =============================================================================
// DISPLAY SETTINGS — which monitor, what fullscreen asks of it, and vsync
// =============================================================================
//
// An addition, not a reconstruction. Some monitors refuse a mode change they
// do not like, or any at all, and show nothing; these let the player keep the
// display as it is, pick its refresh rate, or put the game on another one.
//
//   [Graphics] displayIndex    the display the window and fullscreen use;
//                              0, the first, by default
//   [Graphics] fullscreenSize  what Fullscreen asks the display for: the
//                              game's resolution (0, the default) or the
//                              desktop's own mode (1), which changes nothing
//                              and is letterboxed by the presenter
//   [Graphics] refreshRate     Fullscreen's refresh rate in Hz; 0, the
//                              default, lets SDL choose
//   [Graphics] vsync           1, the default, waits for the display; 0 not
//
// Each is read from nocturne.ini on first use. The defaults are what the
// window mode did before any of these existed, and under NOCTURNE_AUTHENTIC_MENU
// they are all there is: the shipped game has none of these choices.

struct SDL_Window;

#ifdef __cplusplus
extern "C" {
#endif

enum {
    NOCTURNE_FULLSCREEN_SIZE_GAME = 0,
    NOCTURNE_FULLSCREEN_SIZE_DESKTOP = 1,
    NOCTURNE_FULLSCREEN_SIZE_COUNT = 2
};

// The display to use: the saved one while it is connected, else the first.
int nocturne_display_index(void);
// Steps through the connected displays, wrapping, and saves the choice.
int nocturne_display_index_cycle(int step);
// "1 (name)" for the Options line, in static storage.
const char *nocturne_display_label(int index);

int nocturne_fullscreen_size_get(void);
int nocturne_fullscreen_size_cycle(int step);
const char *nocturne_fullscreen_size_name(int size);

// The saved rate in Hz, or 0 for SDL's choice.
int nocturne_refresh_rate_get(void);
// Steps through 0 and the rates the display offers at `width` x `height`,
// wrapping, and saves the choice. A saved rate it does not offer steps from
// the start.
int nocturne_refresh_rate_cycle(int step, int width, int height);
// "Auto" or "144 Hz", in static storage.
const char *nocturne_refresh_rate_label(int hz);

int nocturne_vsync_get(void);
int nocturne_vsync_cycle(int step);

// The mode Fullscreen should ask the display for, when the game is `width` x
// `height`. 0, with *out untouched, where nothing is asked beyond the window's
// own size: the game's size at SDL's rate, as before these settings. Else 1,
// with the desktop's mode or the display's closest to the size and rate.
// `out` is an SDL_DisplayMode.
int nocturne_display_fullscreen_mode(int width, int height, void *out);

// 1 when the display can show a game of `width` x `height`: no larger than its
// desktop, and in Fullscreen at the game's size, one of its modes. 1 when the
// display cannot be asked, so nothing is withheld for want of an answer.
int nocturne_display_offers(int width, int height);

#ifdef __cplusplus
}
#endif
