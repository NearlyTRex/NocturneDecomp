// =============================================================================
// LOADING SCREEN — the loading pictures and the promo at the game's resolution
// =============================================================================
//
// Where each picture and its moon's window go at 640x480 and on a larger
// layout, which picture a random pick takes, and the promo's text and timing.

#include "core/loading_screen.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "screens_support.h"

#include <string>

namespace {

using screens_support::count;
using screens_support::first;
using screens_support::stand;

CLevelLoader s_loader = {};

void fresh() {
    stand.reset();
    s_loader = CLevelLoader();
}

// A 1920x1080 screen: the layout 2.25 times as large, 240 in from the left.
void wide() {
    screens_support::screen(1920, 1080);
    stand.layout = {2.25f, 240, 0};
}

} // namespace

// At 640x480 a picture is drawn where it ships, and the moon's window sits on
// it where it ships, tinted as it ships.
NOCTURNE_TEST(a_picture_and_its_window_are_where_they_ship) {
    fresh();
    nocturne_level_loader_show(&s_loader, 30, 0, 0);
    CHECK_EQ(stand.calls[0], std::string("clear"));
    CHECK_EQ(first("model"), std::string("model moon.kfm"));
    CHECK_EQ(count("glow"), 1);
    CHECK_EQ(first("load"), std::string("load load1 640x480"));
    CHECK_EQ(first("display"), std::string("display 0 0 ffff"));
    CHECK_EQ(count("dtor"), 1);
    CHECK_EQ(s_loader.enabled, 1);
    CHECK_EQ(s_loader.total_frames, 30);
    CHECK_EQ(s_loader.current_frame, 0);
    CHECK_EQ(s_loader.use_custom_viewport, 1);
    CHECK_EQ(s_loader.viewport_x, 0x78);
    CHECK_EQ(s_loader.viewport_y, 0x82);
    CHECK_EQ(s_loader.viewport_width, 0x5a);
    CHECK_EQ(s_loader.viewport_height, 0x5a);
    CHECK_EQ(s_loader.color.r, 0x82);
    CHECK_EQ(s_loader.color.g, 200);
    CHECK_EQ(s_loader.color.b, 0xf4);
}

// On a larger screen the window is placed and sized on the picture with it.
NOCTURNE_TEST(the_window_follows_the_layout) {
    fresh();
    wide();
    nocturne_level_loader_show(&s_loader, 30, 0, 1);
    CHECK_EQ(first("load"), std::string("load load2 640x480"));
    CHECK_EQ(s_loader.viewport_x, 240 + 1089); // 0x1e4 at 2.25
    CHECK_EQ(s_loader.viewport_y, 149);        // 0x42 at 2.25, rounded
    CHECK_EQ(s_loader.viewport_width, 203);    // 0x5a at 2.25, rounded
    CHECK_EQ(s_loader.color.b, 0xff);
}

// The third and fourth pictures; a kind past those draws none, and the screen
// keeps the full-screen viewport the shipped routine sets.
NOCTURNE_TEST(each_picture_has_its_window) {
    fresh();
    nocturne_level_loader_show(&s_loader, 30, 0, 2);
    CHECK_EQ(first("load"), std::string("load load3 640x480"));
    CHECK_EQ(s_loader.viewport_x, 0x9f);
    CHECK_EQ(s_loader.viewport_y, 1);
    fresh();
    nocturne_level_loader_show(&s_loader, 30, 0, 3);
    CHECK_EQ(first("load"), std::string("load load4 640x480"));
    CHECK_EQ(s_loader.viewport_x, 0x17b);
    CHECK_EQ(s_loader.color.r, 0x6b);
    fresh();
    nocturne_level_loader_show(&s_loader, 30, 0, 4);
    CHECK_EQ(count("load"), 0);
    CHECK_EQ(s_loader.use_custom_viewport, 0);
    CHECK_EQ(s_loader.viewport_width, 0x280);
    CHECK_EQ(s_loader.viewport_height, 0x1e0);
}

// Without a picture the moon has the layout's top-right corner, white; the
// screen is not cleared under it, and no picture is picked for it.
NOCTURNE_TEST(the_corner_window_keeps_to_the_layouts_corner) {
    fresh();
    wide();
    stand.random = 1;
    nocturne_level_loader_show(&s_loader, 10, 1, -1);
    CHECK_EQ(count("clear"), 0);
    CHECK_EQ(count("load"), 0);
    CHECK_EQ(s_loader.viewport_x, 240 + 1006); // 0x1bf at 2.25, rounded
    CHECK_EQ(s_loader.viewport_y, 0);
    CHECK_EQ(s_loader.viewport_width, 432); // 0xc0 at 2.25
    CHECK_EQ(s_loader.color.r, 0xff);
}

// A random pick is one of the first three, as a signed remainder: a number
// with its top bit set picks none.
NOCTURNE_TEST(a_random_pick_is_one_of_the_first_three) {
    fresh();
    stand.random = 5;
    nocturne_level_loader_show(&s_loader, 30, 0, -1);
    CHECK_EQ(first("load"), std::string("load load3 640x480"));
    fresh();
    stand.random = 0x80000001u;
    nocturne_level_loader_show(&s_loader, 30, 0, -1);
    CHECK_EQ(count("load"), 0);
}

// The promo: a loading picture, its date and address centred in rows of its
// own font's height, and once the time is up the prompt above the address.
NOCTURNE_TEST(the_promo_shows_its_text_where_it_ships) {
    fresh();
    stand.random = 6;
    stand.time_step = 0x12 * 0x4000; // a whole step each frame: 40 to the end
    nocturne_promo_screen();
    CHECK_EQ(first("height"), std::string("height medium"));
    CHECK_EQ(first("load"), std::string("load load3 640x480"));
    CHECK_EQ(first("display"), std::string("display 0 0 ffff"));
    CHECK_EQ(first("text medium In"), std::string("text medium In stores 10/26/99 248 220 7 1"));
    CHECK_EQ(first("text medium www"), std::string("text medium www.nocturnegame.com 240 470 7 1"));
    CHECK_EQ(first("text medium Press"),
             std::string("text medium Press any key to continue... 208 460 7 1"));
    CHECK_EQ(stand.swaps, 1 + 40 + 1);
    CHECK_EQ(count("keypress"), 1);
    CHECK_EQ(count("free 1"), 1);
    CHECK_EQ(count("free 2"), 1);
}

// Larger, the text is scaled and kept to the picture.
NOCTURNE_TEST(the_promos_text_follows_the_layout) {
    fresh();
    screens_support::screen(1280, 960);
    stand.layout = {2.0f, 0, 0};
    stand.time_step = 0x12 * 0x8000; // longer than a step: held to one
    nocturne_promo_screen();
    CHECK_EQ(first("text medium In"), std::string("text medium In stores 10/26/99 496 440 7 2"));
    CHECK_EQ(first("text medium www"), std::string("text medium www.nocturnegame.com 480 940 7 2"));
    CHECK_EQ(stand.swaps, 1 + 40 + 1);
}

// Shift and Escape held together skip the wait; Shift alone does not, and a
// clock that runs back counts as no time.
NOCTURNE_TEST(shift_and_escape_skip_the_promo) {
    fresh();
    stand.held = {DIK_LSHIFT, DIK_ESCAPE};
    nocturne_promo_screen();
    CHECK_EQ(stand.swaps, 1 + 1 + 1);
    fresh();
    stand.held = {DIK_LSHIFT};
    stand.time_step = -0x12;
    stand.escape_after = 4;
    nocturne_promo_screen();
    CHECK_EQ(g_GlobalDeltaTimeInt, 0);
    CHECK_EQ(stand.swaps, 4 + 1);
}

NOCTURNE_TEST_MAIN()
