// =============================================================================
// MENU SCREEN — what every front-end screen shares
// =============================================================================
//
// The moon behind it, a frame at a time; where its lines start, pulled up so a
// long menu still fits; and whether it was backed out of.

#include "core/menu_screen.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "ui_support.h"

namespace {

using ui_support::stand;

} // namespace

NOCTURNE_TEST(the_backdrop_moves_the_moon_on_a_frame) {
    stand.reset();
    static CGame game = {};
    g_CGamePtr = &game;
    nocturne_menu_backdrop_frame();
    CHECK_EQ(stand.updates, 1);
    CHECK_EQ(stand.moon_frames, 1);
}

// The lines start at the shipped height, or high enough to fit, or the top.
NOCTURNE_TEST(a_menu_starts_where_it_fits) {
    ui_support::screen(640, 480, 32);
    stand.reset();
    CHECK_EQ(nocturne_menu_start_y(5), NOCTURNE_MENU_START_Y);
    CHECK_EQ(nocturne_menu_start_y(30), 480 - 300);
    CHECK_EQ(nocturne_menu_start_y(60), 0);
}

// A title sits below the logo, lifted only as far as a long list needs, and
// never above the top.
NOCTURNE_TEST(a_title_sits_below_the_logo) {
    ui_support::screen(640, 480, 32);
    stand.reset();
    CHECK_EQ(nocturne_menu_titled_y(5), NOCTURNE_MENU_TITLE_Y);
    CHECK_EQ(nocturne_menu_titled_y(30), 480 - 340);
    CHECK_EQ(nocturne_menu_titled_y(60), 0);
}

// Escape, or the window closing, backs out.
NOCTURNE_TEST(escape_or_closing_backs_out) {
    ui_support::screen(640, 480, 32);
    stand.reset();
    g_InputDisabled = 0;
    CHECK_EQ(nocturne_menu_cancelled(), 0);
    stand.pressed = {DIK_ESCAPE};
    CHECK_EQ(nocturne_menu_cancelled(), 1);
    g_InputDisabled = 1;
    CHECK_EQ(nocturne_menu_cancelled(), 1);
    g_InputDisabled = 0;
}

NOCTURNE_TEST_MAIN()
