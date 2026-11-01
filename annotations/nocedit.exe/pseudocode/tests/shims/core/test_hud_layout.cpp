// =============================================================================
// HUD LAYOUT — the frame, the camera's space on its corner, and boxes in boxes
// =============================================================================
//
// The frame is the scene's picture: the 4:3 column when pillarboxed, the whole
// screen otherwise. The camera's space is laid onto a box at one scale with its
// bottom-right corner on the box's, so a panel in the camera's corner lands in
// the box's. The letterbox bars are measured over the 4:3 picture.

#include "../gl/ini_support.h"
#include "core/hud_layout.h"
#include "gl/widescreen.h"
#include "nocturne_test.h"

#include <filesystem>
#include <system_error>

namespace {

using nocturne_hud::Rect;

Rect rect(int left, int top, int right, int bottom) {
    Rect r;
    r.left = left;
    r.top = top;
    r.right = right;
    r.bottom = bottom;
    return r;
}

bool same(const Rect &a, const Rect &b) {
    return a.left == b.left && a.top == b.top && a.right == b.right && a.bottom == b.bottom;
}

} // namespace

// Pan & scan, the default: the frame is the screen.
NOCTURNE_TEST(the_frame_is_the_screen_unless_pillarboxed) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_hud_layout_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    CHECK(same(nocturne_hud::frame(1280, 720), rect(0, 0, 1280, 720)));
    CHECK_EQ(nocturne_hud::frame(1280, 720).width(), 1280);
    CHECK_EQ(nocturne_hud::frame(1280, 720).height(), 720);
    while (nocturne_widescreen_get() != NOCTURNE_WIDESCREEN_PILLARBOX)
        nocturne_widescreen_cycle(1);
    CHECK(same(nocturne_hud::frame(1280, 720), rect(160, 0, 1120, 720)));
    CHECK(same(nocturne_hud::frame(1280, 960), rect(0, 0, 1280, 960)));
}

// The camera's 640x480 on a 1280x720 screen is 1.5 to a unit, right-aligned:
// its corner is the screen's, its left edge 320 pixels in.
NOCTURNE_TEST(the_space_is_laid_on_the_corner_at_one_scale) {
    const Rect screen = rect(0, 0, 1280, 720);
    const nocturne_hud::Space s = nocturne_hud::corner_space(screen, 640, 480);
    CHECK_EQ(s.scale, 1.5f);
    CHECK_EQ(s.offset_x, 320.0f);
    CHECK_EQ(s.offset_y, 0.0f);
    // A 240x96 panel at the corner, and one inset 8 from it.
    CHECK(same(nocturne_hud::from_corner(screen, s, 240, 96), rect(920, 576, 1280, 720)));
    CHECK(same(nocturne_hud::from_corner(screen, s, 80, 80, 8), rect(1148, 588, 1268, 708)));
    // Pillarboxed, the column's corner.
    const Rect column = rect(160, 0, 1120, 720);
    const nocturne_hud::Space c = nocturne_hud::corner_space(column, 640, 480);
    CHECK_EQ(c.offset_x, 160.0f);
    CHECK(same(nocturne_hud::from_corner(column, c, 240, 96), rect(760, 576, 1120, 720)));
}

// Each corner, with its margins.
NOCTURNE_TEST(a_box_is_placed_at_its_corner) {
    const Rect parent = rect(100, 50, 500, 350);
    CHECK(same(nocturne_hud::place(parent, nocturne_hud::TOP_LEFT, 20, 10, 4, 6),
               rect(104, 56, 124, 66)));
    CHECK(same(nocturne_hud::place(parent, nocturne_hud::TOP_RIGHT, 20, 10, 4, 6),
               rect(476, 56, 496, 66)));
    CHECK(same(nocturne_hud::place(parent, nocturne_hud::BOTTOM_LEFT, 20, 10, 4, 6),
               rect(104, 334, 124, 344)));
    CHECK(same(nocturne_hud::place(parent, nocturne_hud::BOTTOM_RIGHT, 20, 10, 4, 6),
               rect(476, 334, 496, 344)));
}

NOCTURNE_TEST(insetting_and_centring) {
    CHECK(same(nocturne_hud::inset(rect(10, 20, 110, 220), 5), rect(15, 25, 105, 215)));
    CHECK_EQ(nocturne_hud::centre_x(rect(100, 0, 500, 10), 100), 250);
}

// The shipped proportion at 4:3 and 5:4; on a wider screen, the 4:3 picture's.
NOCTURNE_TEST(the_letterbox_keeps_its_proportion) {
    CHECK_EQ(nocturne_hud::letterbox_bar(640, 480, 0), 67);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 1024, 0), (1024 - 1280 * 100 / 185) / 2);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 720, 0), (720 - 960 * 100 / 185) / 2);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 720, 0), 101);
}

// Panned and scanned the crop takes most of the bar already: at 1280x720 the
// screen shows 360 rows, the crop takes 60 off the top, and 7 of the shipped
// 67 are left, 14 pixels; at 1280x800, 27 rows, 54 pixels. Never under the
// least asked for, and none at all where the crop takes the lot.
NOCTURNE_TEST(a_panned_letterbox_is_what_the_crop_leaves) {
    while (nocturne_widescreen_get() != NOCTURNE_WIDESCREEN_PAN)
        nocturne_widescreen_cycle(1);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 720, 0), 14);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 720, 30), 30);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 800, 0), 54);
    CHECK_EQ(nocturne_hud::letterbox_bar(1280, 540, 20), 20);
}

NOCTURNE_TEST_MAIN()
