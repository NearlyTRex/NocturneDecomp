// =============================================================================
// DISPLAY SETTINGS — the display, what Fullscreen asks of it, and vsync
// =============================================================================
//
// Each setting is read from the ini on first use, so this is a run of its own
// (window_stand.h), starting from values no run would have saved. SDL's dummy
// video driver has one display with one mode, its desktop's; before video is
// up it has none, and nothing can be asked of it.

#include "gl/display_settings.h"
#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

#include <string>

namespace {

SDL_DisplayMode desktop() {
    SDL_DisplayMode mode = {};
    SDL_GetDesktopDisplayMode(0, &mode);
    return mode;
}

std::string saved(const char *key) {
    return ini_support::values[std::string("Graphics/") + key];
}

} // namespace

// Saved values out of range are the defaults; with no display to ask, the
// first is the one, nothing is withheld and Fullscreen at the desktop's size
// asks for nothing.
NOCTURNE_TEST(out_of_range_is_the_default_and_no_display_withholds_nothing) {
    window_stand::enter_game_directory("nocturne_display_settings_test");
    ini_support::save("Graphics", "displayIndex", "5");
    ini_support::save("Graphics", "fullscreenSize", "7");
    ini_support::save("Graphics", "refreshRate", "-3");
    ini_support::save("Graphics", "vsync", "2");
    CHECK_EQ(nocturne_display_index(), 0);
    CHECK_EQ(nocturne_fullscreen_size_get(), NOCTURNE_FULLSCREEN_SIZE_GAME);
    CHECK_EQ(nocturne_refresh_rate_get(), 0);
    CHECK_EQ(nocturne_vsync_get(), 1);

    CHECK_EQ(std::string(nocturne_display_label(0)), std::string("1"));
    CHECK_EQ(nocturne_display_offers(99999, 99999), 1);
    CHECK_EQ(nocturne_refresh_rate_cycle(1, 640, 480), 0); // no rates: Auto alone
    nocturne_fullscreen_size_cycle(1);
    SDL_DisplayMode mode = {};
    CHECK_EQ(nocturne_display_fullscreen_mode(640, 480, &mode), 0);
    nocturne_fullscreen_size_cycle(1);
}

// The names the Options lines show.
NOCTURNE_TEST(each_setting_has_its_name) {
    CHECK_EQ(std::string(nocturne_fullscreen_size_name(NOCTURNE_FULLSCREEN_SIZE_GAME)),
             std::string("Game"));
    CHECK_EQ(std::string(nocturne_fullscreen_size_name(NOCTURNE_FULLSCREEN_SIZE_DESKTOP)),
             std::string("Desktop"));
    CHECK_EQ(std::string(nocturne_refresh_rate_label(0)), std::string("Auto"));
    CHECK_EQ(std::string(nocturne_refresh_rate_label(144)), std::string("144 Hz"));
}

// With video up the display has its name; one display steps to itself.
NOCTURNE_TEST(the_display_steps_through_those_connected) {
    window_stand::open_window(640, 480);
    const char *name = SDL_GetDisplayName(0);
    CHECK(name != nullptr);
    CHECK_EQ(std::string(nocturne_display_label(0)), "1 (" + std::string(name) + ")");
    CHECK_EQ(nocturne_display_index_cycle(1), 0);
    CHECK_EQ(saved("displayIndex"), std::string("0"));
}

// Fullscreen at the game's size and SDL's rate asks for nothing; at the
// desktop's, for the desktop's mode; at a rate, for the closest mode with it;
// at a size the display cannot reach, for nothing.
NOCTURNE_TEST(fullscreen_asks_for_the_mode_the_settings_name) {
    const SDL_DisplayMode shown = desktop();
    SDL_DisplayMode mode = {};
    CHECK_EQ(nocturne_display_fullscreen_mode(shown.w, shown.h, &mode), 0);

    CHECK_EQ(nocturne_fullscreen_size_cycle(1), NOCTURNE_FULLSCREEN_SIZE_DESKTOP);
    CHECK_EQ(saved("fullscreenSize"), std::string("1"));
    CHECK_EQ(nocturne_display_fullscreen_mode(320, 240, &mode), 1);
    CHECK_EQ(mode.w, shown.w);
    CHECK_EQ(mode.h, shown.h);

    // A rate the display has; Desktop then asks for its size at that rate.
    const int hz = nocturne_refresh_rate_cycle(1, shown.w, shown.h);
    CHECK_EQ(saved("refreshRate"), std::to_string(hz));
    if (hz != 0) {
        CHECK_EQ(nocturne_display_fullscreen_mode(320, 240, &mode), 1);
        CHECK_EQ(mode.w, shown.w);
    }
    nocturne_fullscreen_size_cycle(-1);
    if (hz != 0) {
        CHECK_EQ(nocturne_display_fullscreen_mode(shown.w, shown.h, &mode), 1);
        CHECK_EQ(mode.refresh_rate, hz);
        CHECK_EQ(nocturne_display_fullscreen_mode(shown.w * 4, shown.h * 4, &mode), 0);
    }
    // Back past the first rate is Auto; a rate not offered at a size starts
    // over there.
    CHECK_EQ(nocturne_refresh_rate_cycle(-1, shown.w, shown.h), 0);
    CHECK_EQ(nocturne_refresh_rate_cycle(1, shown.w, shown.h), hz);
    CHECK_EQ(nocturne_refresh_rate_cycle(0, 1, 1), 0);
    CHECK_EQ(nocturne_refresh_rate_cycle(0, shown.w, shown.h + 1), 0); // the width alone
}

// What the resolution list may offer: nothing larger than the desktop, and in
// Fullscreen at the game's size, only the display's own modes.
NOCTURNE_TEST(the_display_offers_what_it_can_show) {
    const SDL_DisplayMode shown = desktop();
    CHECK_EQ(nocturne_display_offers(shown.w + 16, shown.h), 0);
    CHECK_EQ(nocturne_display_offers(shown.w, shown.h + 16), 0);
    CHECK_EQ(nocturne_display_offers(shown.w / 2, shown.h / 2), 1);
    CHECK_EQ(nocturne_window_mode_cycle(1), NOCTURNE_WINDOW_MODE_FULLSCREEN);
    CHECK_EQ(nocturne_display_offers(shown.w / 2, shown.h / 2), 0);
    CHECK_EQ(nocturne_display_offers(shown.w, shown.h), 1);
    CHECK_EQ(nocturne_display_offers(shown.w, shown.h / 2), 0); // the width alone
    nocturne_fullscreen_size_cycle(1);
    CHECK_EQ(nocturne_display_offers(shown.w / 2, shown.h / 2), 1);
    nocturne_fullscreen_size_cycle(1);
    nocturne_window_mode_cycle(-1);
}

// Vsync off and on again, each saved.
NOCTURNE_TEST(vsync_turns_off_and_on) {
    CHECK_EQ(nocturne_vsync_cycle(1), 0);
    CHECK_EQ(saved("vsync"), std::string("0"));
    CHECK_EQ(nocturne_vsync_get(), 0);
    CHECK_EQ(nocturne_vsync_cycle(1), 1);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

NOCTURNE_TEST_MAIN()
