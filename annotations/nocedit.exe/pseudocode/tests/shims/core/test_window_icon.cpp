// =============================================================================
// WINDOW ICON — the moon on the window's title bar and task bar
// =============================================================================
//
// The icon's pixels go to SDL as an RGBA surface, row by row; no window, or a
// surface SDL will not make, leaves the window as it was.

#define SDL_MAIN_HANDLED

#include "core/window_icon.h"
#include "core/window_icon_moon.h"
#include "nocturne_test.h"
#include "sdl_support.h"

#include <cstring>

namespace {

using sdl_support::stand;

} // namespace

NOCTURNE_TEST(the_icon_goes_on_the_window) {
    stand.reset();
    nocturne_apply_window_icon(sdl_support::window());
    CHECK(stand.icon_window == sdl_support::window());
    CHECK_EQ(stand.icon_width, NOCTURNE_ICON_WIDTH);
    unsigned first = 0;
    std::memcpy(&first, NOCTURNE_ICON_RGBA, sizeof(first));
    CHECK_EQ(stand.first_pixel, first);
}

NOCTURNE_TEST(without_a_window_or_a_surface_nothing_changes) {
    stand.reset();
    nocturne_apply_window_icon(nullptr);
    stand.surface_fails = 1;
    nocturne_apply_window_icon(sdl_support::window());
    CHECK(stand.icon_window == nullptr);
}

NOCTURNE_TEST_MAIN()
