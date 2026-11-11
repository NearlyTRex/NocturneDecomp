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

// The layout is centred on a wider screen, and at the left of a narrower one.
NOCTURNE_TEST(the_layout_is_centred) {
    ui_support::screen(848, 480, 32);
    CHECK_EQ(nocturne_menu_left(), 104);
    ui_support::screen(1920, 1080, 32);
    CHECK_EQ(nocturne_menu_left(), 240);
    ui_support::screen(600, 480, 32);
    CHECK_EQ(nocturne_menu_left(), 0);
}

// The fangs: the front end's mode where the screen is in another, the editor
// font the menu's, and the picture over the layout, shown and freed.
NOCTURNE_TEST(the_fangs_take_the_front_ends_mode) {
    static CGame game = {};
    static CDemonMission mission = {};
    game.game_pixx = 1280;
    game.game_pixy = 960;
    game.game_bpp = 32;
    g_CGamePtr = &game;
    g_CDemonMissionPtr = &mission;
    g_UseDirect3D = 1;
    ui_support::screen(640, 480, 32);
    stand.reset();
    g_EditorFont = nullptr;
    nocturne_front_end_fangs(&game);
    CHECK_EQ(stand.resets, 1);
    CHECK_EQ(stand.modes.size(), (size_t)1);
    CHECK_EQ(stand.modes[0], std::string("1280x960x32"));
    CHECK(g_EditorFont == nocturne_menu_font());
    CHECK_EQ(stand.clears, 1);
    CHECK_EQ(stand.loaded[0], std::string("fangs 640x480"));
    CHECK_EQ(stand.rows32.size(), (size_t)960); // twice the size, a row at a time
    CHECK_EQ(stand.swaps, 1);
    CHECK_EQ(stand.freed, 1);

    // Already in the mode, at the depth: no mode is set. The editor keeps its
    // own font.
    stand.reset();
    mission.is_in_editor = 1;
    g_EditorFont = g_SmallEditorFont;
    nocturne_front_end_fangs(&game);
    CHECK(stand.modes.empty());
    CHECK(g_EditorFont == g_SmallEditorFont);

    // A game left at another depth, or a screen of another width, sets it.
    stand.reset();
    game.game_bpp = 16;
    nocturne_front_end_fangs(&game);
    CHECK_EQ(stand.modes.size(), (size_t)1);
    game.game_bpp = 32;
    ui_support::screen(1280, 1024, 32);
    stand.reset();
    nocturne_front_end_fangs(&game);
    CHECK_EQ(stand.modes.size(), (size_t)1);
    ui_support::screen(1024, 960, 32);
    stand.reset();
    nocturne_front_end_fangs(&game);
    CHECK_EQ(stand.modes.size(), (size_t)1);
    mission.is_in_editor = 0;
    g_UseDirect3D = 0;
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
    CHECK_EQ(stand.overlays_y[0], 1.0f);
    nocturne_menu_scene_end();
    CHECK_EQ(stand.overlays[1], 0.0f);
    CHECK_EQ(stand.viewports[1], -1);

    // Taller too: stretched both ways, and widened only by how much wider
    // than 4:3 it is.
    stand.reset();
    ui_support::screen(1920, 1080, 32);
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 112.0f * (3.0f / 2.25f));
    CHECK_EQ(stand.overlays[0], 3.0f);
    CHECK_EQ(stand.overlays_y[0], 2.25f);
    nocturne_menu_scene_end();
    // Only taller, it is stretched down and narrowed to match.
    stand.reset();
    ui_support::screen(640, 960, 32);
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 56.0f);
    nocturne_menu_scene_end();
    // A screen of no height has nothing to widen.
    stand.reset();
    ui_support::screen(640, 0, 32);
    CHECK_EQ(nocturne_menu_scene_begin(112.0f), 112.0f);
    CHECK(stand.overlays.empty());
    ui_support::screen(960, 480, 32);

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

// On a larger screen the same, in the layout's rows.
NOCTURNE_TEST(a_menu_fits_in_the_layouts_rows) {
    ui_support::screen(1920, 1080, 32);
    stand.reset();
    CHECK_EQ(nocturne_menu_start_y(5), NOCTURNE_MENU_START_Y);
    CHECK_EQ(nocturne_menu_start_y(30), 480 - 300);
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
