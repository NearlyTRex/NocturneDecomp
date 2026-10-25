// =============================================================================
// CONSOLE — the engine console's grid, sized and scaled to the window
// =============================================================================
//
// A history larger than the shipped 80 x 25, laid out at the largest scale
// that still holds a readable console; scrolled back with the keys and the
// wheel; and drawn a glyph at a time into the framebuffer at that scale.

#include "core/console.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "ui_support.h"

#include <cstring>

namespace {

using ui_support::stand;

struct Layout {
    int scale, cols, rows;
};

Layout layout(int x, int y, int max_cols, int max_rows) {
    Layout out = {0, 0, 0};
    nocturne_console_layout(x, y, max_cols, max_rows, &out.scale, &out.cols, &out.rows);
    return out;
}

} // namespace

// 640 x 480 stays at one, 1920 x 1080 reaches two: three would leave fewer
// than forty rows.
NOCTURNE_TEST(the_console_scales_while_a_readable_grid_remains) {
    ui_support::screen(640, 480, 32);
    Layout small = layout(0, 0, 256, 200);
    CHECK_EQ(small.scale, 1);
    CHECK_EQ(small.cols, 91);
    CHECK_EQ(small.rows, 43);

    g_WindowWidth = 1920;
    g_WindowHeight = 1080;
    Layout full_hd = layout(0, 0, 256, 200);
    CHECK_EQ(full_hd.scale, 2);
    CHECK_EQ(full_hd.cols, 137);
    CHECK_EQ(full_hd.rows, 49);

    // A grid capped well inside a vast window stops at eight.
    g_WindowWidth = 100000;
    g_WindowHeight = 100000;
    Layout vast = layout(0, 0, 80, 50);
    CHECK_EQ(vast.scale, 8);
    CHECK_EQ(vast.cols, 80);
    CHECK_EQ(vast.rows, 50);
}

// Before the resolution is set, 640 x 480; a grid pushed off the screen still
// has a cell; the outputs are each optional.
NOCTURNE_TEST(the_layout_has_a_cell_whatever_it_is_given) {
    ui_support::screen(640, 480, 32);
    g_WindowWidth = 0;
    g_WindowHeight = 0;
    CHECK_EQ(layout(0, 0, 256, 200).cols, 91);
    g_WindowWidth = 640;
    g_WindowHeight = 480;
    Layout off = layout(700, 600, 256, 200);
    CHECK_EQ(off.cols, 1);
    CHECK_EQ(off.rows, 1);
    nocturne_console_layout(0, 0, 256, 200, nullptr, nullptr, nullptr);
}

// The grid's rows, by index, inside it only.
NOCTURNE_TEST(the_grid_has_its_rows_and_no_others) {
    CHECK(nocturne_console_row(-1) == nullptr);
    CHECK(nocturne_console_row(NOCTURNE_CONSOLE_MAX_ROWS) == nullptr);
    CHECK(nocturne_console_row(1) == nocturne_console_row(0) + nocturne_console_stride());
    CHECK_EQ(nocturne_console_stride(), NOCTURNE_CONSOLE_MAX_COLS);
    CHECK_EQ(nocturne_console_capacity(), NOCTURNE_CONSOLE_MAX_ROWS);
}

// Scrolling moves every row up one and clears the last, within the grid.
NOCTURNE_TEST(scrolling_moves_the_rows_up) {
    nocturne_console_clear();
    std::strcpy(nocturne_console_row(1), "second");
    std::strcpy(nocturne_console_row(2), "third");
    nocturne_console_scroll_up(80, 3);
    CHECK_EQ(std::string(nocturne_console_row(0)), std::string("second"));
    CHECK_EQ(std::string(nocturne_console_row(1)), std::string("third"));
    CHECK_EQ(nocturne_console_row(2)[0], '\0');

    nocturne_console_scroll_up(-5, 2); // no width: the rows stay
    CHECK_EQ(std::string(nocturne_console_row(0)), std::string("second"));
    nocturne_console_scroll_up(1000, 1000);
    CHECK_EQ(std::string(nocturne_console_row(0)), std::string("third"));
    nocturne_console_scroll_up(80, 0);
    CHECK_EQ(std::string(nocturne_console_row(0)), std::string("third"));
}

// The window follows the newest line until scrolled back; then it holds still
// as output arrives, until scrolled to the bottom or reset.
NOCTURNE_TEST(a_scrolled_back_window_holds_still) {
    nocturne_console_clear();
    CHECK_EQ(nocturne_console_view_top(50, 20), 31);
    CHECK_EQ(nocturne_console_view_top(5, 20), 0);

    nocturne_console_scroll_view(-10, 50, 20);
    CHECK_EQ(nocturne_console_view_top(50, 20), 21);
    nocturne_console_scroll_up(80, 60);
    CHECK_EQ(nocturne_console_view_top(50, 20), 20);
    // The newest line moved back up past the window: it is held at the bottom.
    CHECK_EQ(nocturne_console_view_top(30, 20), 11);

    nocturne_console_scroll_view(-100, 50, 20);
    CHECK_EQ(nocturne_console_view_top(50, 20), 0);
    nocturne_console_scroll_up(80, 60);
    CHECK_EQ(nocturne_console_view_top(50, 20), 0);
    nocturne_console_scroll_view(100, 50, 20);
    CHECK_EQ(nocturne_console_view_top(60, 20), 41);
    nocturne_console_reset_view();
}

// Page Up and Down move a screen at a time, End returns to the newest line,
// and each wheel notch is three lines.
NOCTURNE_TEST(the_keys_and_the_wheel_scroll_the_window) {
    ui_support::screen(640, 480, 32);
    stand.reset();
    nocturne_console_reset_view();
    stand.pressed = {DIK_PRIOR};
    nocturne_console_process_input(100, 20);
    CHECK_EQ(nocturne_console_view_top(100, 20), 61);
    stand.pressed = {DIK_NEXT};
    nocturne_console_process_input(100, 20);
    CHECK_EQ(nocturne_console_view_top(100, 20), 81);
    stand.wheel = {2};
    nocturne_console_process_input(100, 20);
    CHECK_EQ(nocturne_console_view_top(100, 20), 75);
    stand.pressed = {DIK_END};
    nocturne_console_process_input(100, 20);
    CHECK_EQ(nocturne_console_view_top(100, 30), 71);

    g_CKeysPtr = nullptr;
    nocturne_console_process_input(100, 20);
    CHECK_EQ(nocturne_console_view_top(100, 30), 71);
}

// A glyph is drawn at the scale asked, in the framebuffer's depth, where it
// fits whole; anything else is passed over.
NOCTURNE_TEST(a_glyph_is_drawn_whole_or_not_at_all) {
    ui_support::screen(64, 64, 32);
    SFontGlyph &a = g_FontTable['A' - 0x20];
    a.width = 2;
    a.bitmap[0] = 1; // row 0: on, off
    a.bitmap[3] = 1; // row 1: off, on
    g_ColorTable32[5] = 0x00ff00;
    nocturne_console_draw_char('A', 4, 4, 5, 2);
    CHECK_EQ(ui_support::pixel32(4, 4), 0x00ff00u);
    CHECK_EQ(ui_support::pixel32(5, 5), 0x00ff00u);
    CHECK_EQ(ui_support::pixel32(6, 4), 0u);
    CHECK_EQ(ui_support::pixel32(7, 6), 0x00ff00u);

    ui_support::screen(64, 64, 16);
    g_ColorTable16[5] = 0x07e0;
    nocturne_console_draw_char('A', 0, 0, 5, 0); // scale 0 is 1
    CHECK_EQ(ui_support::pixel16(0, 0), 0x07e0u);
    CHECK_EQ(ui_support::pixel16(1, 0), 0u);

    ui_support::screen(64, 64, 8);
    nocturne_console_draw_char('A', 0, 0, 7, 1);
    CHECK_EQ(((unsigned char *)g_ScreenBufferArray[0])[0], 7u);

    // Not drawn: control characters, past the font, a glyph with no width, or
    // one that would cross the clip on any side or run off the buffer table.
    ui_support::screen(64, 64, 32);
    nocturne_console_draw_char(0x1f, 0, 0, 5, 1);
    nocturne_console_draw_char(0x100, 0, 0, 5, 1);
    nocturne_console_draw_char('B', 0, 0, 5, 1);
    nocturne_console_draw_char('A', -1, 0, 5, 1);
    nocturne_console_draw_char('A', 0, -1, 5, 1);
    nocturne_console_draw_char('A', 63, 0, 5, 1);
    nocturne_console_draw_char('A', 0, 60, 5, 1);
    g_ClipBottom = 5000;
    nocturne_console_draw_char('A', 0, 1195, 5, 1);
    for (int y = 0; y < 64; y++) {
        for (int x = 0; x < 64; x++)
            CHECK_EQ(ui_support::pixel32(x, y), 0u);
    }

    // A row with no line behind it is passed over.
    g_ScreenBufferArray[1] = nullptr;
    nocturne_console_draw_char('A', 0, 0, 5, 1);
    CHECK_EQ(ui_support::pixel32(0, 0), 0x00ff00u);
}

NOCTURNE_TEST_MAIN()
