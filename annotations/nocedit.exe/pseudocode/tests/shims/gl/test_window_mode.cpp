// =============================================================================
// WINDOW MODE — windowed, fullscreen, borderless, and the size the player chose
// =============================================================================
//
// The Options screen cycles the mode and the resolution; the ddraw shim pushes
// the mode onto the window after it sizes it. What matters is that the mode is
// remembered in the game's ini, that the window takes it, and that the window
// keeps the player's size whatever the game renders at, coming back to it from
// fullscreen. Here the ini does not exist yet when the mode is first asked for,
// as on a first run.

#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

#include <string>

namespace {

const int kWindowed = NOCTURNE_WINDOW_MODE_WINDOWED;
const int kFullscreen = NOCTURNE_WINDOW_MODE_FULLSCREEN;
const int kBorderless = NOCTURNE_WINDOW_MODE_BORDERLESS;

Uint32 fullscreen_flags(SDL_Window *window) {
    return SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP;
}

std::string saved_mode() {
    return ini_support::values["Graphics/windowMode"];
}

SDL_Window *g_window = nullptr;

} // namespace

// With no ini yet the mode is windowed, and nothing is written until it is
// changed; no size has been chosen.
NOCTURNE_TEST(a_first_run_is_windowed) {
    window_stand::enter_game_directory("nocturne_window_mode_test");
    CHECK_EQ(nocturne_window_mode_get(), kWindowed);
    CHECK(ini_support::values.empty());
    int w = 0, h = 0;
    CHECK_EQ(nocturne_window_preferred_size(&w, &h), 0);
}

// The modes by name; anything else is windowed.
NOCTURNE_TEST(each_mode_has_a_name) {
    CHECK_EQ(std::string(nocturne_window_mode_name(kWindowed)), std::string("Windowed"));
    CHECK_EQ(std::string(nocturne_window_mode_name(kFullscreen)), std::string("Fullscreen"));
    CHECK_EQ(std::string(nocturne_window_mode_name(kBorderless)), std::string("Borderless"));
    CHECK_EQ(std::string(nocturne_window_mode_name(9)), std::string("Windowed"));
}

// A size chosen before the window exists, or of nothing, is held for it, and
// the window takes it when the mode is first pushed onto it; pushing again
// changes nothing.
NOCTURNE_TEST(a_size_chosen_early_waits_for_the_window) {
    nocturne_window_mode_apply(nullptr);
    nocturne_window_set_size(0, 600); // no size at all: ignored
    nocturne_window_set_size(800, 0);
    int w = 0, h = 0;
    CHECK_EQ(nocturne_window_preferred_size(&w, &h), 0);
    nocturne_window_set_size(800, 600);
    CHECK_EQ(nocturne_window_preferred_size(&w, &h), 1);
    CHECK_EQ(w, 800);
    CHECK_EQ(h, 600);

    g_window = window_stand::open_window(640, 480);
    nocturne_window_mode_apply(g_window); // windowed already: nothing to do
    nocturne_window_set_size(800, 600);   // the window is shown at it
    SDL_GetWindowSize(g_window, &w, &h);
    CHECK_EQ(w, 800);
    CHECK_EQ(h, 600);
    nocturne_window_set_size(800, 600); // and asking again does not resize
    SDL_GetWindowSize(g_window, &w, &h);
    CHECK_EQ(w, 800);
    nocturne_window_set_size(800, 700); // the height alone
    SDL_GetWindowSize(g_window, &w, &h);
    CHECK_EQ(h, 700);
}

// Right cycles windowed, fullscreen, borderless and back, left the other way;
// each is saved and put on the window, and windowed comes back bordered, at
// the size chosen while fullscreen held the window.
NOCTURNE_TEST(cycling_the_mode_saves_it_and_puts_it_on_the_window) {
    CHECK_EQ(nocturne_window_mode_cycle(1), kFullscreen);
    CHECK_EQ(saved_mode(), std::string("1"));
    CHECK_EQ(fullscreen_flags(g_window), (Uint32)SDL_WINDOW_FULLSCREEN);

    // Chosen while fullscreen owns the size: held, not applied.
    nocturne_window_set_size(1024, 768);
    int w = 0, h = 0;
    CHECK_EQ(nocturne_window_preferred_size(&w, &h), 1);
    CHECK_EQ(w, 1024);

    CHECK_EQ(nocturne_window_mode_cycle(1), kBorderless);
    CHECK_EQ(saved_mode(), std::string("2"));
    CHECK_EQ(fullscreen_flags(g_window), (Uint32)SDL_WINDOW_FULLSCREEN_DESKTOP);

    CHECK_EQ(nocturne_window_mode_cycle(1), kWindowed);
    CHECK_EQ(saved_mode(), std::string("0"));
    CHECK_EQ(fullscreen_flags(g_window), 0u);
    CHECK((SDL_GetWindowFlags(g_window) & SDL_WINDOW_BORDERLESS) == 0);
    SDL_GetWindowSize(g_window, &w, &h);
    CHECK_EQ(w, 1024);
    CHECK_EQ(h, 768);

    CHECK_EQ(nocturne_window_mode_cycle(-1), kBorderless);
    CHECK_EQ(nocturne_window_mode_get(), kBorderless);
    SDL_DestroyWindow(g_window);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
