// =============================================================================
// WIDESCREEN — the mode, the crop that follows the focus, and the reframe
// =============================================================================
//
// The mode is kept in nocturne.ini and read once. Above 480 lines and wider
// than 4:3 the scene is reframed: pillarboxed into a 4:3 column, or scaled to
// the width and cropped, the crop moved once per scene toward the focus actor.
// At 1280x720 the screen shows 360 of the scene's 480 rows, so the crop's top
// runs from 0 to 120, and a scene row is 1.5 target rows.

#include "gl/widescreen.h"
#include "ini_support.h"
#include "nocturne_test.h"

#include <cmath>
#include <filesystem>
#include <string>
#include <system_error>

namespace {

const int kWide = 1280;
const int kWideHigh = 720;

// Steps the mode to `mode`.
void set_mode(int mode) {
    while (nocturne_widescreen_get() != mode)
        nocturne_widescreen_cycle(1);
}

// A cut to camera `camera` with the focus at `y`, which places the crop at
// once.
void cut_to(int camera, float y) {
    nocturne_widescreen_track(kWide, kWideHigh, camera, 1, y, 0, 0.0f, 0.0f);
}

// One scene at 1280x720.
void track(int camera, int visible, float y, int cinematic, float seconds, float look = 0.0f) {
    nocturne_widescreen_track(kWide, kWideHigh, camera, visible, y, cinematic, look, seconds);
}

// The crop's top in scene rows, read back from the reframe: a scene row is
// 1.5 target rows at 1280x720.
int top() {
    NocturneReframe r = {};
    nocturne_widescreen_reframe(kWide, kWideHigh, &r);
    return (int)std::lround(r.src_y / 1.5);
}

// The columns the picture spans.
struct Columns {
    int left, right;
};
Columns picture(int width, int height) {
    Columns c = {0, 0};
    nocturne_widescreen_picture(width, height, &c.left, &c.right);
    return c;
}

} // namespace

// A mode the ini does not name is Pan & scan.
NOCTURNE_TEST(a_mode_the_ini_does_not_name_is_pan_and_scan) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_widescreen_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Graphics", "widescreen", "7");
    CHECK_EQ(nocturne_widescreen_get(), NOCTURNE_WIDESCREEN_PAN);
}

// The mode steps both ways, wrapping, and is saved.
NOCTURNE_TEST(the_mode_steps_and_is_saved) {
    CHECK_EQ(nocturne_widescreen_cycle(1), NOCTURNE_WIDESCREEN_STRETCH);
    CHECK_EQ(ini_support::values["Graphics/widescreen"], std::string("0"));
    CHECK_EQ(nocturne_widescreen_cycle(-1), NOCTURNE_WIDESCREEN_PAN);
    CHECK_EQ(nocturne_widescreen_cycle(-1), NOCTURNE_WIDESCREEN_PILLARBOX);
    CHECK_EQ(ini_support::values["Graphics/widescreen"], std::string("1"));
}

// Each mode by its name; one that does not exist reads as Pan & scan.
NOCTURNE_TEST(each_mode_has_a_name) {
    CHECK_EQ(std::string(nocturne_widescreen_name(NOCTURNE_WIDESCREEN_STRETCH)),
             std::string("Stretch"));
    CHECK_EQ(std::string(nocturne_widescreen_name(NOCTURNE_WIDESCREEN_PILLARBOX)),
             std::string("Pillarbox"));
    CHECK_EQ(std::string(nocturne_widescreen_name(NOCTURNE_WIDESCREEN_PAN)),
             std::string("Pan & scan"));
    CHECK_EQ(std::string(nocturne_widescreen_name(-1)), std::string("Pan & scan"));
}

// Nothing is reframed under Stretch, at 480 lines or fewer, or at 4:3 and
// narrower; and the panel and the iris see the renderer's stretch.
NOCTURNE_TEST(only_a_wide_tall_screen_is_reframed) {
    NocturneReframe r = {};
    set_mode(NOCTURNE_WIDESCREEN_STRETCH);
    CHECK_EQ(nocturne_widescreen_reframe(kWide, kWideHigh, &r), 0);
    CHECK_EQ(picture(kWide, kWideHigh).left, 0);
    CHECK_EQ(picture(kWide, kWideHigh).right, kWide);
    CHECK_EQ(nocturne_widescreen_shown_rows(kWide, kWideHigh), 480);
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    CHECK_EQ(nocturne_widescreen_reframe(854, 480, &r), 0);
    CHECK_EQ(nocturne_widescreen_reframe(1280, 960, &r), 0);
    CHECK_EQ(nocturne_widescreen_reframe(1280, 1024, &r), 0);
    CHECK_EQ(picture(kWide, kWideHigh).right, kWide);
    CHECK_EQ(nocturne_widescreen_shown_rows(kWide, kWideHigh), 360);
    CHECK_EQ(nocturne_widescreen_shown_rows(1280, 960), 480);
    int x = 0, y = 0;
    nocturne_widescreen_scene_to_screen(1280, 1024, 320, 240, &x, &y);
    CHECK_EQ(x, 640);
    CHECK_EQ(y, 512);
    set_mode(NOCTURNE_WIDESCREEN_STRETCH);
    nocturne_widescreen_scene_to_screen(kWide, kWideHigh, 320, 240, &x, &y);
    CHECK_EQ(x, 640);
    CHECK_EQ(y, 360);
}

// Pillarboxed, the whole target goes into a centred 4:3 column; the bottom of
// the screen is the bottom of the scene.
NOCTURNE_TEST(a_pillarbox_is_a_centred_column) {
    set_mode(NOCTURNE_WIDESCREEN_PILLARBOX);
    NocturneReframe r = {};
    CHECK_EQ(nocturne_widescreen_reframe(kWide, kWideHigh, &r), 1);
    CHECK_EQ(r.src_x, 0);
    CHECK_EQ(r.src_y, 0);
    CHECK_EQ(r.src_w, kWide);
    CHECK_EQ(r.src_h, kWideHigh);
    CHECK_EQ(r.dst_x, 160);
    CHECK_EQ(r.dst_y, 0);
    CHECK_EQ(r.dst_w, 960);
    CHECK_EQ(r.dst_h, kWideHigh);
    CHECK_EQ(picture(kWide, kWideHigh).left, 160);
    CHECK_EQ(picture(kWide, kWideHigh).right, 1120);
    CHECK_EQ(picture(1280, 960).left, 0); // a 4:3 screen is its own picture
    int x = 0, y = 0;
    nocturne_widescreen_scene_to_screen(kWide, kWideHigh, 640, 480, &x, &y);
    CHECK_EQ(x, 1120);
    CHECK_EQ(y, 720);
}

// A cut places the crop on the focus at once, clamped to the scene; the
// target rows shown are the scene rows at 1.5 each.
NOCTURNE_TEST(a_cut_places_the_crop_on_the_focus) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(1, 300.0f);
    CHECK_EQ(top(), 120);
    NocturneReframe r = {};
    CHECK_EQ(nocturne_widescreen_reframe(kWide, kWideHigh, &r), 1);
    CHECK_EQ(r.src_y, 180);
    CHECK_EQ(r.src_h, 540);
    CHECK_EQ(r.src_w, kWide);
    CHECK_EQ(r.dst_y, 0);
    CHECK_EQ(r.dst_h, kWideHigh);
    cut_to(2, 100.0f);
    CHECK_EQ(top(), 0);
    cut_to(3, 250.0f);
    CHECK_EQ(top(), 70);
}

// A focus inside the dead band does not move the crop; beyond it, the crop
// closes the excess at the ease rate, a long frame counting as the longest.
NOCTURNE_TEST(the_crop_eases_past_a_dead_band) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(4, 240.0f); // top 60
    track(4, 1, 250.0f, 0, 0.05f);
    CHECK_EQ(top(), 60);
    track(4, 1, 336.0f, 0, 0.05f); // target 120
    // 44 rows past the band, closed by 1 - e^(-0.3).
    const int expected = 60 + (int)std::lround(44.0 * (1.0 - std::exp(-0.3)));
    CHECK_EQ(top(), expected);
    cut_to(4, 240.0f);
    cut_to(5, 240.0f);
    track(5, 1, 336.0f, 0, 5.0f);
    CHECK_EQ(top(), 60 + (int)std::lround(44.0 * (1.0 - std::exp(-0.6))));
    cut_to(6, 240.0f);
    track(6, 1, 336.0f, 0, -1.0f);
    CHECK_EQ(top(), 60);
}

// Under the letterbox the crop centres; out of shot it holds, unless that is
// a cut, which centres it.
NOCTURNE_TEST(the_letterbox_centres_and_a_lost_focus_holds) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(7, 300.0f); // top 120
    track(8, 1, 300.0f, 1, 0.0f);
    CHECK_EQ(top(), 60);
    cut_to(9, 300.0f);
    track(9, 0, 0.0f, 0, 0.05f);
    CHECK_EQ(top(), 120);
    track(10, 0, 0.0f, 0, 0.05f);
    CHECK_EQ(top(), 60);
}

// A full look up shows the top of the shot and a full look down the bottom,
// from wherever the crop is; let go, the crop eases back to where tracking has
// it; a cut drops the look.
NOCTURNE_TEST(a_look_reaches_either_edge_and_eases_back) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(20, 240.0f); // top 60
    for (int i = 0; i < 60; i++)
        track(20, 1, 240.0f, 0, 0.1f, 1.0f);
    CHECK_EQ(top(), 0);
    for (int i = 0; i < 60; i++)
        track(20, 1, 240.0f, 0, 0.1f, -1.0f);
    CHECK_EQ(top(), 120);
    for (int i = 0; i < 60; i++)
        track(20, 1, 240.0f, 0, 0.1f);
    CHECK_EQ(top(), 60);
    track(20, 1, 240.0f, 0, 0.1f, 1.0f);
    CHECK(top() < 60);
    cut_to(21, 240.0f);
    CHECK_EQ(top(), 60);
}

// Under the letterbox the stick moves nothing: a look held as it comes up
// eases back to the centred shot, and one asked for under it is not taken.
NOCTURNE_TEST(a_cutscene_cannot_be_looked_around) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(30, 240.0f); // top 60, the centre
    for (int i = 0; i < 60; i++)
        track(30, 1, 240.0f, 0, 0.1f, 1.0f);
    CHECK_EQ(top(), 0);
    track(30, 1, 240.0f, 1, 0.1f, 1.0f);
    const int easing = top();
    CHECK(easing > 0);
    CHECK(easing < 60);
    for (int i = 0; i < 60; i++)
        track(30, 1, 240.0f, 1, 0.1f, 1.0f);
    CHECK_EQ(top(), 60);
    for (int i = 0; i < 60; i++)
        track(30, 1, 240.0f, 1, 0.1f, -1.0f);
    CHECK_EQ(top(), 60);
}

// A screen that is not reframed leaves the crop where it was.
NOCTURNE_TEST(a_screen_not_reframed_is_not_tracked) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(11, 300.0f);
    nocturne_widescreen_track(1280, 960, 12, 1, 0.0f, 0, 0.0f, 0.0f);
    CHECK_EQ(top(), 120);
}

// The crop is clamped to what a different screen can show: at 1280x800 the
// screen shows 400 rows, so the top stops at 80.
NOCTURNE_TEST(the_crop_is_clamped_to_the_screen_asked_about) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(13, 300.0f);
    NocturneReframe r = {};
    CHECK_EQ(nocturne_widescreen_reframe(1280, 800, &r), 1);
    CHECK_EQ(r.src_y, 133);
    CHECK_EQ(r.src_h, 667);
}

// A scene point lands where the crop shows it: the width's scale both ways,
// less the crop's top.
NOCTURNE_TEST(a_scene_point_lands_where_the_crop_shows_it) {
    set_mode(NOCTURNE_WIDESCREEN_PAN);
    cut_to(14, 300.0f); // top 120
    int x = 0, y = 0;
    nocturne_widescreen_scene_to_screen(kWide, kWideHigh, 320, 300, &x, &y);
    CHECK_EQ(x, 640);
    CHECK_EQ(y, 360);
    nocturne_widescreen_scene_to_screen(kWide, kWideHigh, 0, 120, &x, &y);
    CHECK_EQ(x, 0);
    CHECK_EQ(y, 0);
}

NOCTURNE_TEST_MAIN()
