// =============================================================================
// AUTOMAP — the map that fills in as the player explores
// =============================================================================
//
// The level is a small grid of cubes with wall quads in it, and the player
// stands in its corner. What the map extracts from that, what it reveals, what
// its controls do, and what it draws are read back from the stand-ins: every
// line through clipAndDrawLine, every word through nocturne_ui_draw_text.

#include "automap_support.h"
#include "game/automap.h"
#include "nocturne_test.h"
#include "system/crt.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace automap_support;

namespace {

const int kMapKey = 0x32; // DIK_M, the map's default binding
const int kMargin = 24;

// Palette entries the map's colours land on, at 32bpp.
const int kWall = 1, kPlayer = 3, kDoorOpen = 6, kDoorFree = 7, kDoorLocked = 8, kHero = 9,
          kNpc = 10, kEnemy = 11, kItem = 12, kChest = 13, kBodyPart = 14, kDoorOneWay = 16;

void palette() {
    const int rgb[][3] = {
        {0, 0, 0},       {170, 205, 235}, {74, 92, 116},  {255, 64, 48},   {10, 10, 14},
        {255, 220, 200}, {110, 130, 110}, {60, 220, 90},  {235, 60, 55},   {90, 170, 255},
        {250, 200, 60},  {255, 60, 130},  {90, 235, 215}, {205, 125, 240}, {150, 45, 45},
        {198, 168, 124}, // dirt, the second wall's material
        {255, 140, 20},  // a door that opens one way
    };
    const int count = (int)(sizeof(rgb) / sizeof(rgb[0]));
    for (int i = 0; i < count; i++) {
        g_ColorTable32[i] = (uint)((rgb[i][0] << 16) | (rgb[i][1] << 8) | rgb[i][2]);
    }
    // Everything else far from all of them.
    for (int i = count; i < 256; i++)
        g_ColorTable32[i] = 0x808000u;
}

// A 4 x 2 x 4 level of 10-unit cubes, a wall along each of two cubes on the
// ground floor and two in one cube a storey up.
Level *level() {
    static Level *l = nullptr;
    delete l;
    l = new Level(4, 2, 4, 10.0f);
    l->wall(0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 8.0f);
    l->wall(10.0f, 10.0f, 10.0f, 20.0f, 0.0f, 8.0f, 3);
    l->wall(0.0f, 30.0f, 10.0f, 30.0f, 14.0f, 18.0f);
    l->wall(0.0f, 35.0f, 10.0f, 35.0f, 14.0f, 18.0f);
    return l;
}

// Just into the cube beyond the player's, which a sight line blocked past z 9
// leaves in the fog, and still inside the map window.
const CVector3f kInTheFog = {5.0f, 0.0f, 10.5f};

bool past_z9(const CVector3f &, const CVector3f &to) {
    return to.z > 9.0f;
}

void start() {
    stand.reset();
    palette();
    level()->install();
}

void press(int code) {
    hold(code);
    nocturne_automap_update();
    hold(code, false);
    nocturne_automap_update();
}

void open_map() {
    press(kMapKey);
}

void frame() {
    stand.lines.clear();
    stand.texts.clear();
    nocturne_automap_render();
}

// The map window's clip rectangle, from the first wall drawn.
Line window() {
    const std::vector<Line> walls = lines_in(kWall);
    return walls.empty() ? Line{} : walls[0];
}

// Which colours any line was drawn in.
bool drew(int color) {
    return !lines_in(color).empty();
}

} // namespace

// -----------------------------------------------------------------------------
// What is taken from the level
// -----------------------------------------------------------------------------

// No level loaded is nothing to map; one with no cubes is the same.
NOCTURNE_TEST(without_a_level_there_is_nothing_to_map) {
    stand.reset();
    nocturne_automap_reset();
    open_map();
    CHECK_EQ(nocturne_automap_active(), 0);
    frame();
    CHECK(stand.lines.empty());

    Level empty(0, 0, 0, 10.0f);
    empty.install();
    open_map();
    CHECK_EQ(nocturne_automap_active(), 0);
}

// Each wall is one line on the map: its two triangles share their footprint, a
// floor or a slope is no wall, and a triangle missing a corner is passed over.
// A material the map has no colour for is drawn as an ordinary wall.
NOCTURNE_TEST(walls_are_lines_and_floors_are_not) {
    stand.reset();
    palette();
    Level l(4, 2, 4, 10.0f);
    l.wall(0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 8.0f, 99);
    const CVector3f up = {0.0f, 1.0f, 0.0f};
    l.triangle(0, CVector3f{0, 0, 0}, CVector3f{9, 0, 0}, CVector3f{0, 0, 9}, up, 1);
    l.triangle(0, CVector3f{0, 0, 0}, CVector3f{9, 0, 0}, CVector3f{0, 0, 9}, up, 0);
    l.broken_triangle(0, 0);
    l.broken_triangle(0, 1);
    l.broken_triangle(0, 2);
    // A sliver narrower than the weld: every edge of it is one point.
    l.triangle(4, CVector3f{10, 0, 1}, CVector3f{10.1f, 0, 1}, CVector3f{10, 8, 1.1f},
               CVector3f{1, 0, 0}, 0);
    l.wall(10.0f, 10.0f, 10.0f, 20.0f, 0.0f, 8.0f, 3);
    l.no_materials(l.cube_of(10.0f, 0.0f, 10.0f));
    l.install();
    open_map();
    frame();
    CHECK_EQ(lines_in(kWall).size(), (size_t)2);
    // Two cubes hold walls, the sliver's included: one of them is in sight.
    CHECK_EQ(nocturne_automap_explored_percent(), 100);
}

// A grid with no cubes in it, however it was allocated, holds nothing.
NOCTURNE_TEST(a_grid_of_no_cubes_holds_nothing) {
    start();
    g_CDemonRaytraceInstance.grid_coord.y = 0;
    nocturne_automap_reset();
    open_map();
    CHECK_EQ(nocturne_automap_active(), 0);
}

// A level with cubes and no walls opens on nothing to draw.
NOCTURNE_TEST(a_level_of_no_walls_draws_nothing) {
    stand.reset();
    Level bare(2, 1, 2, 10.0f);
    bare.install();
    open_map();
    CHECK_EQ(nocturne_automap_active(), 1);
    frame();
    CHECK(stand.lines.empty());
}

// A cube with its triangles but a count of none holds nothing.
NOCTURNE_TEST(a_cube_with_no_triangles_holds_no_wall) {
    start();
    open_map();
    frame();
    CHECK_EQ(lines_in(kWall).size(), (size_t)1);
    g_CDemonRaytraceInstance.cube_data[0].triangle_count = 0;
    nocturne_automap_reset();
    open_map();
    frame();
    CHECK(lines_in(kWall).empty());
    CHECK(!stand.lines.empty());
}

// -----------------------------------------------------------------------------
// Exploring
// -----------------------------------------------------------------------------

// What the player can see from where he stands is revealed, and stays; the
// share counts only cubes with walls in them, and past three quarters the map
// is complete and says 100.
NOCTURNE_TEST(what_is_in_sight_is_revealed_and_counted) {
    start();
    stand.blocked = [](const CVector3f &, const CVector3f &to) { return to.z > 9.0f; };
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 33);

    stand.blocked = nullptr;
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 100);
    // Nothing new to test: revealed cells are not asked again.
    stand.sight_tests = 0;
    nocturne_automap_update();
    CHECK_EQ(stand.sight_tests, 0);
}

// The fog holds until the line of sight is clear.
NOCTURNE_TEST(a_blocked_line_of_sight_reveals_nothing) {
    start();
    stand.blocked = [](const CVector3f &, const CVector3f &) { return true; };
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 0);
    open_map();
    frame();
    CHECK(!drew(kWall));
}

// From the far corner of the grid, cubes past its edges are not asked about,
// and the wall in the opposite corner is beyond the reveal's reach.
NOCTURNE_TEST(the_edges_of_the_grid_bound_what_is_looked_at) {
    start();
    hero->base.base.location.position = CVector3f{35.0f, 15.0f, 35.0f};
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 66);
}

// A level with no walls at all has no share to report.
NOCTURNE_TEST(a_level_without_walls_has_no_share) {
    stand.reset();
    Level bare(2, 1, 2, 10.0f);
    bare.install();
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 0);
}

// -----------------------------------------------------------------------------
// Opening and closing
// -----------------------------------------------------------------------------

// The binding toggles the map on a press, not while it is held; it takes the
// controls, Escape closes it, and only outside netplay does the world stop.
NOCTURNE_TEST(the_binding_opens_and_closes_the_map) {
    start();
    CHECK_EQ(nocturne_automap_handle_cancel(), 0);
    CHECK_EQ(nocturne_automap_freezes_world(), 0);
    hold(kMapKey);
    nocturne_automap_update();
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_active(), 1);
    CHECK_EQ(nocturne_automap_owns_controls(), 1);
    CHECK_EQ(nocturne_automap_freezes_world(), 1);
    stand.net_active = 1;
    CHECK_EQ(nocturne_automap_freezes_world(), 0);
    hold(kMapKey, false);
    nocturne_automap_update();
    press(kMapKey);
    CHECK_EQ(nocturne_automap_active(), 0);
    CHECK_EQ(nocturne_automap_owns_controls(), 0);

    open_map();
    CHECK_EQ(nocturne_automap_handle_cancel(), 1);
    CHECK_EQ(nocturne_automap_active(), 0);
}

// Whenever the player is not driving, the map is shut and will not open: in a
// dialog, paused, under a script, with no game, and with the hero down.
NOCTURNE_TEST(the_map_stays_shut_while_the_player_is_not_driving) {
    struct Case {
        const char *name;
        void (*apply)();
    };
    const Case cases[] = {
        {"dialog", [] { g_ModalDialogActive = 1; }},
        {"paused", [] { g_CGamePtr->is_paused = 1; }},
        {"script", [] { g_CGamePtr->hero_controls_blocked = 1; }},
        {"dying", [] { stand.death[hero] = DEATH_STATE_DYING; }},
        {"no hit points", [] { hero->base.hit_points = 0.0f; }},
        {"no game", [] { g_CGamePtr = nullptr; }},
        {"no hero", [] { stand.local = nullptr; }},
    };
    for (const Case &c : cases) {
        start();
        open_map();
        CHECK_AT(nocturne_automap_active() == 1, c.name);
        c.apply();
        nocturne_automap_update();
        CHECK_AT(nocturne_automap_active() == 0, c.name);
        hold(kMapKey);
        nocturne_automap_update();
        CHECK_AT(nocturne_automap_active() == 0, c.name);
    }
}

// A hero at no hit points whom the script will not let die is still playing,
// and so is one with no event list to ask.
NOCTURNE_TEST(a_hero_the_script_keeps_alive_still_has_the_map) {
    start();
    hero->base.hit_points = 0.0f;
    stand.conditions["strangerCannotDie"] = 1;
    open_map();
    CHECK_EQ(nocturne_automap_active(), 1);

    start();
    g_CEventListPtr = nullptr;
    open_map();
    CHECK_EQ(nocturne_automap_active(), 1);
}

// A level torn down under an open map closes it.
NOCTURNE_TEST(a_map_left_open_closes_with_its_level) {
    start();
    open_map();
    Level empty(0, 0, 0, 10.0f);
    empty.install();
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_active(), 0);
}

// The binding is M until the player picks another, and the menu names it.
NOCTURNE_TEST(the_binding_and_its_name) {
    *nocturne_automap_key_binding() = 7;
    nocturne_automap_apply_default_binding();
    CHECK_EQ(*nocturne_automap_key_binding(), kMapKey);
    CHECK_EQ(std::string(nocturne_automap_key_label()), std::string("Map"));
    g_LaserBeamActiveCount = 3;
    nocturne_automap_clear_frame_effects();
    CHECK_EQ(g_LaserBeamActiveCount, 0);
}

// A binding outside the keyboard's table is never down.
NOCTURNE_TEST(a_binding_off_the_table_is_never_down) {
    start();
    *nocturne_automap_key_binding() = -1;
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_active(), 0);
    *nocturne_automap_key_binding() = (int)sizeof(g_KeyboardState);
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_active(), 0);
    nocturne_automap_apply_default_binding();
}

// -----------------------------------------------------------------------------
// The controls while it is up
// -----------------------------------------------------------------------------

// Where the player's own marker lands: the centre of the window until the view
// is panned off him.
int player_x() {
    frame();
    const std::vector<Line> body = lines_in(kPlayer);
    if (body.empty())
        return 0;
    int lo = body[0].x1, hi = body[0].x2;
    for (const Line &l : body) {
        lo = std::min(lo, l.x1);
        hi = std::max(hi, l.x2);
    }
    return (lo + hi) / 2;
}

int player_y() {
    frame();
    const std::vector<Line> body = lines_in(kPlayer);
    int lo = 1 << 30, hi = -(1 << 30);
    for (const Line &l : body) {
        lo = std::min(lo, l.y1);
        hi = std::max(hi, l.y1);
    }
    return (lo + hi) / 2;
}

// The stick pans, the walk and strafe keys pan when it is centred, and on a
// keyboard the turn keys pan sideways too; recentring puts the player back.
NOCTURNE_TEST(the_view_pans_and_recentres) {
    start();
    open_map();
    const int centre = player_x();

    stand.axes[0] = 1.0f;
    nocturne_automap_update();
    CHECK(player_x() < centre);
    stand.axes[0] = 0.0f;

    press(g_CGamePtr->key_run);
    CHECK_EQ(player_x(), centre);

    hold(g_CGamePtr->key_strafe_left);
    nocturne_automap_update();
    hold(g_CGamePtr->key_strafe_left, false);
    CHECK(player_x() > centre);
    press(g_CGamePtr->key_run);

    hold(g_CGamePtr->key_strafe_right);
    hold(g_CGamePtr->key_left);
    nocturne_automap_update();
    hold(g_CGamePtr->key_strafe_right, false);
    hold(g_CGamePtr->key_left, false);
    CHECK(player_x() < centre);
    press(g_CGamePtr->key_run);

    hold(g_CGamePtr->key_right);
    nocturne_automap_update();
    hold(g_CGamePtr->key_right, false);
    CHECK(player_x() < centre);
    press(g_CGamePtr->key_run);

    hold(g_CGamePtr->key_left);
    nocturne_automap_update();
    hold(g_CGamePtr->key_left, false);
    CHECK(player_x() > centre);
    press(g_CGamePtr->key_run);

    // A pad's turn is its right stick, which pans nothing.
    g_CGamePtr->key_left = NOCTURNE_PAD_BUTTON_BASE + 1;
    hold(g_CGamePtr->key_left);
    nocturne_automap_update();
    CHECK_EQ(player_x(), centre);
    g_CGamePtr->key_right = NOCTURNE_PAD_BUTTON_BASE + 2;
    g_CGamePtr->key_left = 3;
    nocturne_automap_update();
    CHECK_EQ(player_x(), centre);
    // Nor does a turn left unbound.
    g_CGamePtr->key_left = -1;
    g_CGamePtr->key_right = 4;
    hold(4);
    nocturne_automap_update();
    CHECK_EQ(player_x(), centre);
    hold(3, false);
    hold(4, false);

    const int middle = player_y();
    hold(g_CGamePtr->key_walk);
    nocturne_automap_update();
    hold(g_CGamePtr->key_walk, false);
    CHECK(player_y() > middle);
    hold(g_CGamePtr->key_backup);
    nocturne_automap_update();
    nocturne_automap_update();
    hold(g_CGamePtr->key_backup, false);
    CHECK(player_y() < middle);
    stand.axes[1] = -1.0f;
    nocturne_automap_update();
    stand.axes[1] = 0.0f;
    CHECK(player_y() >= middle);
}

// However long it is held, the view stays within a margin of the level.
NOCTURNE_TEST(panning_stops_at_the_edges_of_the_level) {
    start();
    open_map();
    const float pushes[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (const auto &push : pushes) {
        press(g_CGamePtr->key_run);
        stand.axes[0] = push[0];
        stand.axes[1] = push[1];
        for (int i = 0; i < 100; i++)
            nocturne_automap_update();
        const int x = player_x(), y = player_y();
        for (int i = 0; i < 10; i++)
            nocturne_automap_update();
        CHECK_EQ(player_x(), x);
        CHECK_EQ(player_y(), y);
    }
    stand.axes[0] = stand.axes[1] = 0.0f;
}

// The weapon pair zooms, within limits, and the zoom is kept for the next time
// the map opens.
NOCTURNE_TEST(the_zoom_is_held_between_limits_and_kept) {
    start();
    *nocturne_automap_zoom_setting() = 320;
    open_map();
    hold(g_CGamePtr->key_next_weapon);
    for (int i = 0; i < 100; i++)
        nocturne_automap_update();
    hold(g_CGamePtr->key_next_weapon, false);
    CHECK_EQ(*nocturne_automap_zoom_setting(), 800);
    hold(g_CGamePtr->key_prev_weapon);
    for (int i = 0; i < 100; i++)
        nocturne_automap_update();
    hold(g_CGamePtr->key_prev_weapon, false);
    CHECK_EQ(*nocturne_automap_zoom_setting(), 50);

    // Opened again, at what was kept, held inside the limits as well.
    for (int setting : {10, 2000, 400}) {
        nocturne_automap_handle_cancel();
        *nocturne_automap_zoom_setting() = setting;
        open_map();
        nocturne_automap_update();
        CHECK(*nocturne_automap_zoom_setting() >= 50 && *nocturne_automap_zoom_setting() <= 800);
    }
    *nocturne_automap_zoom_setting() = 320;
}

// The triggers sweep the other storeys from unlit to full, a light pull and the
// digital codes alike, and at unlit they are not drawn at all.
NOCTURNE_TEST(the_other_storeys_are_brightened_and_dimmed) {
    start();
    open_map();
    frame();
    const size_t at_half = stand.lines.size();

    stand.axes[4] = 0.05f; // resting, under the deadzone
    stand.axes[5] = 0.05f;
    hold(g_CGamePtr->key_draw);
    for (int i = 0; i < 20; i++)
        nocturne_automap_update();
    hold(g_CGamePtr->key_draw, false);
    frame();
    CHECK(stand.lines.size() < at_half);

    stand.axes[5] = 1.0f;
    for (int i = 0; i < 20; i++)
        nocturne_automap_update();
    stand.axes[5] = 0.0f;
    frame();
    CHECK_EQ(stand.lines.size(), at_half);

    hold(g_CGamePtr->key_fire);
    nocturne_automap_update();
    hold(g_CGamePtr->key_fire, false);
    stand.axes[4] = 1.0f;
    for (int i = 0; i < 20; i++)
        nocturne_automap_update();
    stand.axes[4] = 0.0f;
    frame();
    CHECK(stand.lines.size() < at_half);
    stand.axes[5] = 1.0f;
    for (int i = 0; i < 6; i++)
        nocturne_automap_update();
    stand.axes[5] = 0.0f;
}

// -----------------------------------------------------------------------------
// The screen
// -----------------------------------------------------------------------------

// The heading names the place and how much of it is explored, centred over the
// map; with no place to name it says MAP. Complete says so.
NOCTURNE_TEST(the_heading_names_the_place_centred) {
    start();
    open_map();
    stand.place = "CASTLE";
    frame();
    const Text *title = text_starting("CASTLE");
    CHECK(title != nullptr);
    if (title != nullptr) {
        CHECK_EQ(title->text, std::string("CASTLE   100%   COMPLETE"));
        const int width = (int)title->text.size() * stand.char_w;
        CHECK_EQ(title->x - kMargin, (640 - kMargin) - (title->x + width));
    }

    for (const char *none : {(const char *)nullptr, ""}) {
        stand.place = none;
        frame();
        CHECK(text_starting("MAP  100%  COMPLETE") != nullptr);
    }
    g_CDemonMissionPtr = nullptr;
    frame();
    CHECK(text_starting("MAP") != nullptr);

    // Short of complete, the share alone.
    start();
    stand.blocked = [](const CVector3f &, const CVector3f &to) { return to.z > 9.0f; };
    open_map();
    frame();
    CHECK(text_starting("MAP  33%") != nullptr);
    CHECK(text_starting("MAP  33%  ") == nullptr);
    stand.place = "CASTLE";
    frame();
    CHECK(text_starting("CASTLE   33%") != nullptr);
    CHECK(text_starting("CASTLE   33%   ") == nullptr);

    // A heading wider than the screen starts at its edge.
    stand.char_w = 60;
    frame();
    title = text_starting("CASTLE");
    CHECK(title != nullptr && title->x == kMargin);
}

// The key toggles in place of the heading on a press. Each row of it is centred,
// and the band is as tall as the taller of the two, so the map does not move
// when they swap.
NOCTURNE_TEST(the_legend_swaps_with_the_heading_without_moving_the_map) {
    // One row at 5 pixels a character, two at 12.
    for (int char_w : {5, 12}) {
        start();
        stand.char_w = char_w;
        open_map();
        frame();
        const Line heading_window = window();
        const Text *title = text_starting("MAP");
        CHECK(title != nullptr);
        const int title_y = (title != nullptr) ? title->y : -1;

        press(g_CGamePtr->key_item_desc);
        frame();
        CHECK(text_starting("MAP") == nullptr);
        const Text *you = text_starting("YOU");
        CHECK(you != nullptr);
        CHECK_EQ(window().y_min, heading_window.y_min);
        // The title sits in the middle of the band the legend also fills.
        CHECK_EQ(title_y, (heading_window.y_min - stand.text_h) / 2);

        // Each row's extent is centred between the margins.
        std::vector<int> rows;
        for (const Text &t : stand.texts) {
            if (std::find(rows.begin(), rows.end(), t.y) == rows.end() &&
                t.y < heading_window.y_min) {
                rows.push_back(t.y);
            }
        }
        CHECK_EQ(rows.size(), (size_t)(char_w == 5 ? 1 : 2));
        for (int row : rows) {
            int right = 0;
            const Text *first = nullptr;
            for (const Text &t : stand.texts) {
                if (t.y != row)
                    continue;
                if (first == nullptr)
                    first = &t;
                right = t.x + (int)t.text.size() * stand.char_w;
            }
            // The first item's swatch is a ring of radius 7, or a box of 5.
            const int swatch = (first->text == "YOU") ? 18 : 14;
            const int left = first->x - swatch;
            CHECK_NEAR(left - kMargin, (640 - kMargin) - right, 1);
        }

        press(g_CGamePtr->key_item_desc);
        frame();
        CHECK(text_starting("MAP") != nullptr);
        CHECK_EQ(window().y_min, heading_window.y_min);
    }
}

// Holding the legend's button, or the recentre, does it once.
NOCTURNE_TEST(holding_a_toggle_does_it_once) {
    start();
    open_map();
    hold(g_CGamePtr->key_item_desc);
    nocturne_automap_update();
    nocturne_automap_update();
    hold(g_CGamePtr->key_item_desc, false);
    frame();
    CHECK(text_starting("YOU") != nullptr);

    const int centre = player_x();
    stand.axes[0] = 1.0f;
    nocturne_automap_update();
    stand.axes[0] = 0.0f;
    hold(g_CGamePtr->key_run);
    nocturne_automap_update();
    stand.axes[0] = 1.0f;
    nocturne_automap_update();
    stand.axes[0] = 0.0f;
    hold(g_CGamePtr->key_run, false);
    CHECK(player_x() < centre);
}

// A key too wide for the screen at the HUD's scale drops a scale to fit on one
// row, as the controls below it do.
NOCTURNE_TEST(a_wide_legend_fits_at_a_smaller_scale) {
    start();
    stand.ui = 2;
    stand.char_w = 5;
    open_map();
    press(g_CGamePtr->key_item_desc);
    frame();
    const Text *you = text_starting("YOU");
    CHECK(you != nullptr && you->scale == 1);
    const Text *pan = text_starting("PAN");
    CHECK(pan != nullptr && pan->scale == 1);
}

// An item wider than the whole screen takes a row of its own from the margin.
NOCTURNE_TEST(an_item_wider_than_the_screen_starts_at_the_margin) {
    start();
    stand.char_w = 200;
    open_map();
    press(g_CGamePtr->key_item_desc);
    frame();
    const Text *you = text_starting("YOU");
    CHECK(you != nullptr && you->x == kMargin + 18);
}

// The controls below the map name each binding, a pad's directions once by the
// name they share, and wrap between controls rather than inside one.
NOCTURNE_TEST(the_controls_are_named_below_the_map) {
    start();
    stand.key_names[1] = "Left Stick Up";
    stand.key_names[2] = "Left Stick Down";
    stand.key_names[5] = "Left Stick Left";
    stand.key_names[6] = "Left Stick Right";
    g_CGamePtr->key_left = NOCTURNE_PAD_BUTTON_BASE + 1;
    stand.key_names[7] = "Pad";
    stand.key_names[8] = "Pad B";
    stand.key_names[9] = "RT";
    stand.key_names[10] = "";
    open_map();
    frame();
    CHECK(text_starting("Left Stick") != nullptr &&
          text_starting("Left Stick")->text == "Left Stick");
    CHECK(text_starting("Pad B") != nullptr);
    CHECK(text_starting("RT") != nullptr);

    // Too wide for one row, then wider than the screen.
    for (int char_w : {14, 200}) {
        stand.char_w = char_w;
        frame();
        const Text *close = text_starting("CLOSE");
        const Text *pan = text_starting("PAN");
        CHECK(close != nullptr && pan != nullptr && close->y > pan->y);
    }
}

// With no font to measure, a line is taken as twelve pixels tall; text taller
// than the key's swatches sets the height of its rows.
NOCTURNE_TEST(the_bands_follow_the_font) {
    start();
    stand.char_w = 5; // the key on one row
    stand.text_h = 0;
    open_map();
    frame();
    CHECK_EQ(window().y_min, kMargin);

    stand.text_h = 20;
    frame();
    CHECK_EQ(window().y_min, 20 + 8);
    CHECK_EQ(window().y_max, 480 - (20 + 8));
}

// The game going away under an open map leaves no controls to list.
NOCTURNE_TEST(with_no_game_there_are_no_controls_to_list) {
    start();
    open_map();
    g_CGamePtr = nullptr;
    frame();
    CHECK(text_starting("PAN") == nullptr);
    CHECK_EQ(window().y_max, 480 - kMargin);
}

// The frame behind the map is painted black at every depth, rows the screen
// has none for passed over.
NOCTURNE_TEST(the_scene_is_painted_out) {
    for (int bpp : {0x20, 0x10, 8}) {
        start();
        g_BitsPerPixel = bpp;
        g_ScreenBufferArray[3] = nullptr;
        open_map();
        frame();
        const unsigned char *row = (const unsigned char *)g_ScreenBufferArray[0];
        CHECK_EQ((int)row[0], 0);
        const int bytes = (bpp == 0x20) ? 4 : (bpp == 0x10) ? 2 : 1;
        CHECK_EQ((int)row[640 * bytes - 1], 0);
        CHECK_EQ_AT((int)row[640 * bytes], (bpp == 0x20) ? 0 : 0xff, "past the row");
    }
}

// At 16bpp the colours are found in the 16-bit table; at 8bpp they are the
// fallback index itself.
NOCTURNE_TEST(colours_are_found_at_each_depth) {
    start();
    g_BitsPerPixel = 0x10;
    g_ColorTable16[5] = (ushort)(((170 >> 3) << 11) | ((205 >> 2) << 5) | (235 >> 3));
    open_map();
    frame();
    CHECK(!lines_in(5).empty());

    g_BitsPerPixel = 8;
    frame();
    CHECK(!lines_in(0xf8).empty());
}

// The level is fitted by its longer side into the window's shorter one.
NOCTURNE_TEST(the_level_is_fitted_into_the_window) {
    stand.reset();
    palette();
    Level wide(6, 1, 2, 10.0f);
    wide.wall(0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 8.0f);
    wide.install();
    g_WindowWidth = 300;
    *nocturne_automap_zoom_setting() = 100;
    open_map();
    frame();
    // Zoom 1 is the 60-unit width across the 252 pixels the window has.
    const std::vector<Line> walls = lines_in(kWall);
    CHECK(!walls.empty());
    if (!walls.empty())
        CHECK_EQ(walls[0].x2 - walls[0].x1, 42);
    *nocturne_automap_zoom_setting() = 320;
}

// Standing upstairs, the ground floor is the storey drawn dimmed.
NOCTURNE_TEST(from_upstairs_the_ground_floor_is_dimmed) {
    start();
    hero->base.base.location.position = CVector3f{5.0f, 15.0f, 32.0f};
    open_map();
    frame();
    CHECK(drew(kWall));
    hero->base.base.location.position = CVector3f{5.0f, 0.0f, 5.0f};
}

// With the set gone from under it, the map draws its walls and the player and
// no markers.
NOCTURNE_TEST(without_a_set_only_the_walls_and_player_are_drawn) {
    start();
    place(actor(0), &g_CCharacterClassInfo, CVector3f{8.0f, 0.0f, 8.0f});
    ((CCharacter *)actor(0))->hit_points = 10.0f;
    open_map();
    g_CDemonSetPtr = nullptr;
    frame();
    CHECK(drew(kWall));
    CHECK(drew(kPlayer));
    CHECK(!drew(kNpc));
}

// A window too small to hold the map draws nothing, and so does a level with
// no extent, or no player.
NOCTURNE_TEST(nothing_is_drawn_without_room_or_a_player) {
    start();
    open_map();
    g_WindowWidth = 40;
    frame();
    CHECK(stand.lines.empty());
    g_WindowWidth = 640;
    g_WindowHeight = 40;
    frame();
    CHECK(stand.lines.empty());
    g_WindowHeight = 480;

    g_CDemonRaytraceInstance.bbox_max = g_CDemonRaytraceInstance.bbox_min;
    frame();
    CHECK(stand.lines.empty());

    start();
    open_map();
    stand.local = nullptr;
    frame();
    CHECK(stand.lines.empty());
    stand.local = hero;
    nocturne_automap_handle_cancel();
    frame();
    CHECK(stand.lines.empty());
}

// -----------------------------------------------------------------------------
// Markers
// -----------------------------------------------------------------------------

// The player is drawn last, with the way he faces; a facing straight up or down
// has no direction on the floor.
NOCTURNE_TEST(the_player_shows_which_way_he_faces) {
    const CVector3f facings[] = {
        {0, 0, 1}, {0, 0, -1},  {1, 0, 0},  {-1, 0, 0},
        {1, 0, 1}, {-1, 0, -1}, {1, 0, -2}, {-2, 0, 1},
    };
    for (const CVector3f &f : facings) {
        start();
        stand.facing = f;
        open_map();
        frame();
        CHECK(lines_in(kPlayer).size() > 23);
    }
    start();
    stand.facing = CVector3f{0, 1, 0};
    open_map();
    frame();
    CHECK_EQ(lines_in(kPlayer).size(), (size_t)15);
}

// Doors keep to the fog and say whether the player can get through: open, free
// to open, locked from his side, or needing a key he does not have.
NOCTURNE_TEST(doors_say_whether_they_let_the_player_through) {
    start();
    CDoor *d = door();
    place(&d->base, &g_CDoorClassInfo, CVector3f{8.0f, 0.0f, 5.0f});
    d->allowed_sides = 3;
    open_map();
    frame();
    CHECK(drew(kDoorFree));

    d->door_state = (EDoorState)1;
    frame();
    CHECK(drew(kDoorOpen));
    d->door_state = DOOR_STATE_CLOSED;

    stand.has_key = 0;
    frame();
    CHECK(drew(kDoorLocked));
    stand.has_key = 1;

    // One that opens from one side only says so, whichever side the player is
    // on, and wherever he walks.
    for (int sides : {1, 2}) {
        d->allowed_sides = sides;
        for (const CVector3f &at : {CVector3f{5, 0, 5}, CVector3f{25, 0, 5}, CVector3f{5, 0, 25}}) {
            hero->base.base.location.position = at;
            frame();
            CHECK(drew(kDoorOneWay));
            CHECK(!drew(kDoorFree));
        }
    }
    hero->base.base.location.position = CVector3f{5.0f, 0.0f, 5.0f};
    // Without its key it is locked, and one that opens from neither side is too;
    // only the two sides it has count.
    stand.has_key = 0;
    frame();
    CHECK(drew(kDoorLocked));
    stand.has_key = 1;
    for (int sides : {0, 4}) {
        d->allowed_sides = sides;
        frame();
        CHECK(drew(kDoorLocked));
    }
    d->allowed_sides = 7;
    frame();
    CHECK(drew(kDoorFree));

    // Unexplored, it is not drawn.
    start();
    stand.blocked = past_z9;
    place(&door()->base, &g_CDoorClassInfo, kInTheFog);
    door()->allowed_sides = 3;
    open_map();
    frame();
    CHECK(!drew(kDoorFree));
    // In the explored part of an unfinished map, it is.
    door()->base.location.position = CVector3f{8.0f, 0.0f, 5.0f};
    frame();
    CHECK(drew(kDoorFree));
}

// What can be carried off or searched keeps to the fog too, drawn as what can
// be done with it; a crate to shove and scenery are not drawn.
NOCTURNE_TEST(pickups_are_drawn_by_what_can_be_done_with_them) {
    start();
    place(actor(0), &item_type, CVector3f{6.0f, 0.0f, 6.0f});
    place(actor(1), &item_type, CVector3f{7.0f, 0.0f, 6.0f});
    place(actor(2), &item_type, CVector3f{6.0f, 0.0f, 7.0f});
    place(actor(3), &g_CBodyPartClassInfo, CVector3f{7.0f, 0.0f, 7.0f});
    place(actor(4), &item_type, CVector3f{4.0f, 0.0f, 4.0f});
    place(actor(5), &item_type, CVector3f{4.0f, 0.0f, 6.0f});
    place(actor(6), &item_type, kInTheFog);
    stand.pickup[actor(0)] = 1;
    stand.pickup[actor(1)] = 2;
    stand.pickup[actor(2)] = 3;
    stand.pickup[actor(3)] = 3;
    stand.pickup[actor(4)] = 4;
    stand.pickup[actor(5)] = 0;
    stand.pickup[actor(6)] = 2;
    stand.blocked = [](const CVector3f &, const CVector3f &to) { return to.z > 9.0f; };
    open_map();
    frame();
    CHECK(drew(kChest));
    CHECK_EQ(lines_in(kItem).size(), (size_t)22);
    CHECK(drew(kBodyPart));

    // Once the map is complete, the one in the fog is drawn too.
    stand.blocked = nullptr;
    nocturne_automap_update();
    frame();
    CHECK_EQ(lines_in(kItem).size(), (size_t)33);
}

// Characters: an enemy only while in sight, anyone else once his room is
// explored, the dead not at all; a hero by class, wherever he is placed.
NOCTURNE_TEST(characters_are_drawn_by_who_they_are) {
    start();
    place(actor(0), &mobster_type, CVector3f{8.0f, 0.0f, 5.0f});
    place(actor(1), &g_CCharacterClassInfo, CVector3f{8.0f, 0.0f, 8.0f});
    place(actor(2), &g_CHeroClassInfo, CVector3f{3.0f, 0.0f, 8.0f});
    place(actor(3), &unregistered_type, CVector3f{1.0f, 0.0f, 3.0f});
    for (int i = 0; i < 4; i++)
        ((CCharacter *)actor(i))->hit_points = 10.0f;
    place(actor(4), &g_CCharacterClassInfo, CVector3f{2.0f, 0.0f, 2.0f});
    open_map();
    frame();
    CHECK(drew(kEnemy));
    CHECK(drew(kNpc));
    CHECK(drew(kHero));

    // Out of sight, the enemies go and the others stay.
    stand.blocked = [](const CVector3f &from, const CVector3f &) { return from.y > 0.0f; };
    frame();
    CHECK(!drew(kEnemy));
    CHECK(drew(kNpc));

    // Standing on the player, an enemy is in sight whatever is between.
    hero->base.base.location.position = CVector3f{8.0f, 0.0f, 5.0f};
    frame();
    CHECK(drew(kEnemy));
}

// A friendly character in a room not yet explored is not drawn.
NOCTURNE_TEST(a_friend_in_the_fog_is_not_drawn) {
    start();
    stand.blocked = past_z9;
    place(actor(0), &g_CCharacterClassInfo, kInTheFog);
    ((CCharacter *)actor(0))->hit_points = 10.0f;
    open_map();
    frame();
    CHECK(!drew(kNpc));
    // One in the explored part of the unfinished map is.
    actor(0)->location.position = CVector3f{8.0f, 0.0f, 8.0f};
    frame();
    CHECK(drew(kNpc));
}

// Only what is on the player's storey and inside the window is drawn; the set's
// own list holds no more than it has room for.
NOCTURNE_TEST(markers_off_the_storey_or_the_window_are_not_drawn) {
    start();
    const CVector3f off[] = {{5, 15, 5},  {5, -5, 5}, {20, 0, 5},
                             {-10, 0, 5}, {5, 0, 20}, {5, 0, -10}};
    for (int i = 0; i < 6; i++) {
        place(actor(i), &g_CCharacterClassInfo, off[i]);
        ((CCharacter *)actor(i))->hit_points = 10.0f;
    }
    g_CDemonSetInstance.actors[g_CDemonSetInstance.actor_count++] = &hero->base.base;
    g_CDemonSetInstance.actor_count = 5000;
    open_map();
    frame();
    CHECK(!drew(kNpc));
}

// Zoomed out, a friend standing outside the grid on any side is in no explored
// cube, and is not drawn.
NOCTURNE_TEST(a_friend_outside_the_grid_is_not_drawn) {
    for (float floor : {-9.0f, 0.0f, 15.0f}) {
        start();
        *nocturne_automap_zoom_setting() = 50;
        hero->base.base.location.position = CVector3f{20.0f, floor, 20.0f};
        // A cube index truncates toward zero, so "outside" below the grid
        // starts a whole cell past its edge.
        const CVector3f out[] = {{-11, floor, 20},    {41, floor, 20},  {20, floor - 1.5f, 20},
                                 {20, floor + 6, 20}, {20, floor, -11}, {20, floor, 41}};
        for (int i = 0; i < 6; i++) {
            place(actor(i), &g_CCharacterClassInfo, out[i]);
            ((CCharacter *)actor(i))->hit_points = 10.0f;
        }
        stand.blocked = [](const CVector3f &, const CVector3f &) { return true; };
        open_map();
        frame();
        CHECK(!drew(kNpc));
    }
    *nocturne_automap_zoom_setting() = 320;
}

// The party's other heroes are drawn whether the set's list has them or not,
// once each, and not when dead, elsewhere or in the fog.
NOCTURNE_TEST(teammates_are_drawn_once) {
    // On a complete map, and in the explored part of an unfinished one.
    start();
    g_HeroActors[1] = mate;
    mate->base.base.location.position = kInTheFog;
    open_map();
    frame();
    CHECK(drew(kHero));

    start();
    stand.blocked = past_z9;
    g_HeroActors[1] = mate;
    mate->base.base.location.position = CVector3f{8.0f, 0.0f, 8.0f};
    open_map();
    frame();
    const size_t alone = lines_in(kHero).size();
    CHECK(alone > 0);

    place(&mate->base.base, &g_CHeroClassInfo, mate->base.base.location.position);
    frame();
    CHECK_EQ(lines_in(kHero).size(), alone);

    struct Case {
        const char *name;
        void (*apply)();
    };
    const Case cases[] = {
        {"dead", [] { mate->base.hit_points = 0.0f; }},
        {"upstairs", [] { mate->base.base.location.position.y = 15.0f; }},
        {"downstairs", [] { mate->base.base.location.position.y = -5.0f; }},
        {"off the left", [] { mate->base.base.location.position.x = -10.0f; }},
        {"off the right", [] { mate->base.base.location.position.x = 20.0f; }},
        {"off the top", [] { mate->base.base.location.position.z = 20.0f; }},
        {"off the bottom", [] { mate->base.base.location.position.z = -10.0f; }},
        {"in the fog", [] { mate->base.base.location.position = kInTheFog; }},
        {"local",
         [] {
             g_HeroActors[0] = nullptr;
             g_LocalHeroIndex = 1;
             stand.local = mate;
         }},
    };
    for (const Case &c : cases) {
        start();
        stand.blocked = past_z9;
        g_HeroActors[1] = mate;
        mate->base.base.location.position = CVector3f{8.0f, 0.0f, 8.0f};
        open_map();
        c.apply();
        frame();
        CHECK_AT(!drew(kHero), c.name);
    }
}

// -----------------------------------------------------------------------------
// Saves
// -----------------------------------------------------------------------------

namespace {

const char *kSave = "automap_test_save.txt";

void write_file(const char *text) {
    FILE *f = std::fopen(kSave, "w");
    std::fputs(text, f);
    std::fclose(f);
}

std::string read_file() {
    FILE *f = std::fopen(kSave, "r");
    std::string text;
    char buffer[256];
    while (std::fgets(buffer, sizeof(buffer), f) != nullptr)
        text += buffer;
    std::fclose(f);
    return text;
}

void save() {
    _FILE *f = _fopen(kSave, "w");
    nocturne_automap_save(f);
    _fclose(f);
}

void load() {
    _FILE *f = _fopen(kSave, "r");
    nocturne_automap_load(f);
    _fclose(f);
}
} // namespace

// What has been explored goes into the save and comes back on the same level.
NOCTURNE_TEST(what_is_explored_survives_a_save) {
    start();
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), "CASTLE.GEO");
    stand.blocked = [](const CVector3f &, const CVector3f &to) { return to.z > 9.0f; };
    nocturne_automap_update();
    save();
    // The player's own cube, the first, is explored: the unexplored run the
    // reader starts with is empty.
    CHECK_EQ(read_file().rfind("Automap\nCASTLE.GEO\n4,2,4,0\n0 ", 0), (size_t)0);

    // Read with the save's level already up, as CGame::loadGame reads it once
    // CDemonMission::startMission has loaded the set: it is as it was saved,
    // straight away.
    start();
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), "CASTLE.GEO");
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 33);
    frame();
    open_map();
    frame();
    CHECK(drew(kWall));

    // Over a level explored further, the save's reveal replaces it.
    start();
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), "CASTLE.GEO");
    nocturne_automap_update();
    CHECK_EQ(nocturne_automap_explored_percent(), 100);
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 33);
}

// A long pattern of runs is written twenty to a line and read back whole, and
// runs past the end of the grid are cut at it.
NOCTURNE_TEST(a_long_pattern_is_written_in_lines) {
    start();
    std::string text = "Automap\n.GEO\n4,2,4,1\n";
    for (int i = 0; i < 40; i++)
        text += "1 ";
    text += "100\n";
    write_file(text.c_str());
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), ".GEO");
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 100);
    save();
    const std::string back = read_file();
    // The three header lines, then the 32 runs the grid's cells make.
    CHECK_EQ(std::count(back.begin(), back.end(), '\n'), (long)5);

    // An explored run longer than the grid fills it and stops.
    start();
    write_file("Automap\n.GEO\n4,2,4,0\n0 100\n");
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), ".GEO");
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 100);

    // Runs that stop short of the grid leave the rest unexplored: here only the
    // first five cubes, which hold one of the three walled ones.
    start();
    write_file("Automap\n.GEO\n4,2,4,0\n0 5\n");
    std::snprintf(g_CDemonSetInstance.geometry_filename,
                  sizeof(g_CDemonSetInstance.geometry_filename), ".GEO");
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 33);
}

// A save from another level, of another size, or with no block or a broken one
// leaves the level unexplored.
NOCTURNE_TEST(a_save_that_does_not_fit_leaves_the_level_unexplored) {
    const char *saves[] = {
        "Automap\nOTHER.GEO\n4,2,4,1\n0 32\n",
        "Automap\n.GEO\n5,2,4,1\n0 32\n",
        "Automap\n.GEO\n4,3,4,1\n0 32\n",
        "Automap\n.GEO\n4,2,5,1\n0 32\n",
        "Automap\n.GEO\n4,2\n",
        "Automap\n",
        "Notes\n",
        "",
    };
    for (const char *s : saves) {
        start();
        std::snprintf(g_CDemonSetInstance.geometry_filename,
                      sizeof(g_CDemonSetInstance.geometry_filename), ".GEO");
        nocturne_automap_update();
        CHECK_AT(nocturne_automap_explored_percent() == 100, s);
        write_file(s);
        load();
        CHECK_AT(nocturne_automap_explored_percent() == 0, s);
    }

    // No file is no block, and a level with no grid has nothing to apply to.
    start();
    nocturne_automap_update();
    nocturne_automap_load(nullptr);
    CHECK_EQ(nocturne_automap_explored_percent(), 0);
    write_file("Automap\n.GEO\n0,0,0,1\n0 32\n");
    Level empty(0, 0, 0, 10.0f);
    empty.install();
    load();
    CHECK_EQ(nocturne_automap_explored_percent(), 0);
}

// Nothing is written with no file, or no level.
NOCTURNE_TEST(nothing_is_saved_without_a_level) {
    start();
    nocturne_automap_save(nullptr);
    Level empty(0, 0, 0, 10.0f);
    empty.install();
    write_file("untouched");
    _FILE *f = _fopen(kSave, "a");
    nocturne_automap_save(f);
    _fclose(f);
    CHECK_EQ(read_file(), std::string("untouched"));
    std::remove(kSave);
}

NOCTURNE_TEST_MAIN()
