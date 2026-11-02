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

// The front end takes the picked resolution's aspect at 480 lines, to the
// nearest 16 pixels, from 640 up to 1280; without acceleration, or with no
// resolution picked, 640.
NOCTURNE_TEST(the_front_end_takes_the_picked_aspect) {
    stand.reset();
    static CGame game = {};
    g_CGamePtr = &game;
    game.game_pixx = 1600;
    game.game_pixy = 900;
    g_UseDirect3D = 0;
    CHECK_EQ(nocturne_menu_width(), 640);
    g_UseDirect3D = 1;
    CHECK_EQ(nocturne_menu_width(), 848); // 853 to the nearest 16
    game.game_pixx = 1280;
    game.game_pixy = 800;
    CHECK_EQ(nocturne_menu_width(), 768);
    game.game_pixx = 1280;
    game.game_pixy = 1024;
    CHECK_EQ(nocturne_menu_width(), 640);
    game.game_pixx = 3840;
    game.game_pixy = 1080;
    CHECK_EQ(nocturne_menu_width(), 1280);
    game.game_pixy = 0;
    CHECK_EQ(nocturne_menu_width(), 640);
    g_UseDirect3D = 0;
}

// The 640-wide layout is centred on a wider screen, and at the left of a
// narrower one.
NOCTURNE_TEST(the_layout_is_centred) {
    ui_support::screen(848, 480, 32);
    CHECK_EQ(nocturne_menu_left(), 104);
    ui_support::screen(600, 480, 32);
    CHECK_EQ(nocturne_menu_left(), 0);
}

// On a wider screen the moon is projected into a 640 viewport, wider by the
// screen's ratio, inside an overlay that stretches it back; closing puts both
// back. On a 640 screen, where no overlay opens, or with the software
// rasteriser drawing, nothing is left to close.
NOCTURNE_TEST(the_moon_is_widened_on_a_wide_screen) {
    stand.reset();
    ui_support::screen(640, 480, 32);
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 112.0f);
    nocturne_menu_scene_end();
    CHECK(stand.viewports.empty());

    ui_support::screen(960, 480, 32);
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 168.0f);
    CHECK_EQ((int)stand.viewports.size(), 1);
    CHECK_EQ(stand.viewports[0], 640);
    CHECK_EQ(stand.overlays[0], 1.5f);
    nocturne_menu_scene_end();
    CHECK_EQ(stand.overlays[1], 0.0f);
    CHECK_EQ(stand.viewports[1], -1);

    stand.reset();
    stand.overlay_opens = 0;
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 112.0f);
    CHECK_EQ((int)stand.viewports.size(), 2); // pushed and popped
    nocturne_menu_scene_end();
    CHECK_EQ((int)stand.viewports.size(), 2);

    // The front end hands the mode back, and the software rasteriser draws at
    // the screen's width; nothing is pushed or opened.
    stand.reset();
    g_UseExternalRenderer = 0;
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 112.0f);
    CHECK(stand.viewports.empty());
    CHECK(stand.overlays.empty());
    nocturne_menu_scene_end();
    CHECK(stand.viewports.empty());
    g_UseExternalRenderer = 1;
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
