// =============================================================================
// WINDOW MODE, FIXED — where the window is the screen
// =============================================================================
//
// A console or a packaged app: the mode is borderless and stays so, nothing is
// written, and the window is neither sized nor taken in or out of fullscreen.
// A run of its own, since the mode is read once (see window_stand.h).

#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

NOCTURNE_TEST(a_fixed_display_is_borderless_and_left_alone) {
    window_stand::enter_game_directory("nocturne_window_mode_fixed_test");
    ini_support::save("Graphics", "windowMode", "0");
    g_nocturne_fixed_display = 1;
    CHECK_EQ(nocturne_window_mode_get(), NOCTURNE_WINDOW_MODE_BORDERLESS);
    CHECK_EQ(nocturne_window_mode_cycle(1), NOCTURNE_WINDOW_MODE_BORDERLESS);
    CHECK_EQ(ini_support::values["Graphics/windowMode"], std::string("0"));

    SDL_Window *window = window_stand::open_window(640, 480);
    nocturne_window_mode_apply(window);
    CHECK_EQ(SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP, 0u);
    nocturne_window_set_size(800, 600);
    int w = 0, h = 0;
    SDL_GetWindowSize(window, &w, &h);
    CHECK_EQ(w, 640);
    CHECK_EQ(h, 480);
    g_nocturne_fixed_display = 0;
    SDL_DestroyWindow(window);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
