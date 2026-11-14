// =============================================================================
// WINDOW MODE, DISPLAY — Fullscreen at the desktop's mode, then the game's
// =============================================================================
//
// A run that saved Fullscreen at the desktop's size: the window takes the
// display's own mode, keeps it while nothing changes, and gives it up for the
// window's size when the setting goes back to the game's. Its own run, as the
// settings are read once: see window_stand.h.

#include "gl/display_settings.h"
#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

namespace {

SDL_DisplayMode window_display_mode(SDL_Window *window) {
    SDL_DisplayMode mode = {};
    SDL_GetWindowDisplayMode(window, &mode);
    return mode;
}

} // namespace

// Before there is a display or a window, Fullscreen has no size to show.
NOCTURNE_TEST(with_nothing_up_fullscreen_has_no_size) {
    window_stand::enter_game_directory("nocturne_window_mode_display_test");
    ini_support::save("Graphics", "windowMode", "1");
    ini_support::save("Graphics", "fullscreenSize", "1");
    int w = -1, h = -1;
    nocturne_window_fullscreen_size(&w, &h);
    CHECK_EQ(w, 0);
    CHECK_EQ(h, 0);
}

NOCTURNE_TEST(fullscreen_takes_the_desktops_mode_until_told_otherwise) {
    SDL_Window *window = window_stand::open_window(640, 480);
    SDL_DisplayMode desktop = {};
    SDL_GetDesktopDisplayMode(0, &desktop);
    int w = 0, h = 0;
    nocturne_window_fullscreen_size(&w, &h);
    CHECK_EQ(w, desktop.w);
    CHECK_EQ(h, desktop.h);

    nocturne_window_mode_apply(window);
    CHECK((SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP) == SDL_WINDOW_FULLSCREEN);
    SDL_DisplayMode mode = window_display_mode(window);
    CHECK_EQ(mode.w, desktop.w);
    CHECK_EQ(mode.h, desktop.h);
    nocturne_window_mode_reapply(); // nothing changed: nothing done
    CHECK_EQ(window_display_mode(window).w, desktop.w);

    // At the game's size the window's own size is the mode again: the one
    // chosen, else the window's.
    nocturne_fullscreen_size_cycle(1);
    nocturne_window_mode_reapply();
    CHECK((SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP) == SDL_WINDOW_FULLSCREEN);
    SDL_GetWindowSize(window, &w, &h);
    int fw = 0, fh = 0;
    nocturne_window_fullscreen_size(&fw, &fh);
    CHECK_EQ(fw, w);
    CHECK_EQ(fh, h);
    nocturne_window_set_size(800, 600);
    nocturne_window_fullscreen_size(&fw, &fh);
    CHECK_EQ(fw, 800);
    CHECK_EQ(fh, 600);

    SDL_DestroyWindow(window);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
