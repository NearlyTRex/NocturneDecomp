// =============================================================================
// WINDOW MODE, SAVED — the mode a previous run left in the ini
// =============================================================================
//
// A run after the first reads the mode back and puts it on the window. The
// first use of the setting is what reads it, so this is a run of its own: see
// window_stand.h.

#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

// Borderless from the ini; leaving it for windowed with no size ever chosen
// keeps the window the size it was.
NOCTURNE_TEST(the_saved_mode_is_the_mode) {
    window_stand::enter_game_directory("nocturne_window_mode_saved_test");
    ini_support::save("Graphics", "windowMode", "2");
    CHECK_EQ(nocturne_window_mode_get(), NOCTURNE_WINDOW_MODE_BORDERLESS);

    SDL_Window *window = window_stand::open_window(640, 480);
    nocturne_window_mode_apply(window);
    CHECK((SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP) ==
          SDL_WINDOW_FULLSCREEN_DESKTOP);
    CHECK_EQ(nocturne_window_mode_cycle(1), NOCTURNE_WINDOW_MODE_WINDOWED);
    int w = 0, h = 0;
    SDL_GetWindowSize(window, &w, &h);
    CHECK_EQ(w, 640);
    CHECK_EQ(h, 480);
    SDL_DestroyWindow(window);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
