// =============================================================================
// PERF OVERLAY — the frame rate in the top-right corner
// =============================================================================
//
// While the Debug page's FPS line is on: the frame rate, the mean and worst
// frame over the last half second, the time in the swap, and the resolution
// and renderer, right-aligned in the HUD's font. The clock is the stand's, a
// millisecond a tick, and so is the presenter's swap total.

#include "debug/perf_overlay.h"
#include "debug_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>

namespace {

using debug_support::stand;

// A frame `ms` after the last.
void frame_after(int ms) {
    stand.counter += (unsigned long long)ms;
    stand.drawn.clear();
    nocturne_perf_overlay_render();
}

} // namespace

// Off, nothing is drawn.
NOCTURNE_TEST(while_the_line_is_off_nothing_is_drawn) {
    stand.reset();
    g_SmallEditorFont = debug_support::small_font();
    frame_after(16);
    CHECK(stand.drawn.empty());
}

// Each half second the figures are published: the rate, the mean and the worst
// frame; the lines sit against the right edge, one under another.
NOCTURNE_TEST(each_half_second_the_rate_and_frame_times_are_shown) {
    stand.reset();
    stand.perf_stats = 1;
    stand.counter = 1000;
    g_SmallEditorFont = debug_support::small_font();
    frame_after(0); // the first: the clock starts
    CHECK_EQ(stand.drawn[0].text, std::string("0 FPS"));
    for (int i = 0; i < 24; ++i)
        frame_after(20);
    stand.swap_ticks = 125; // 5 ms of each frame in the swap
    frame_after(20);        // 25 frames in 500 ms
    CHECK_EQ(stand.drawn[0].text, std::string("50 FPS"));
    CHECK_EQ(stand.drawn[1].text, std::string("20.0 ms avg  20.0 max"));
    CHECK_EQ(stand.drawn[2].text, std::string("5.0 ms in swap"));
    CHECK_EQ(stand.drawn[3].text, std::string("640x480 software"));
    CHECK_EQ(stand.drawn[0].x, 640 - 4 - 6 * 8);
    CHECK_EQ(stand.drawn[0].y, 4);
    CHECK_EQ(stand.drawn[1].y, 4 + 11);
    CHECK(stand.drawn_font == debug_support::small_font());

    // A slow frame is the worst, until the next half second publishes.
    frame_after(100);
    for (int i = 0; i < 20; ++i)
        frame_after(20);
    CHECK_EQ(stand.drawn[1].text, std::string("23.8 ms avg  100.0 max"));
    // Only what was spent since the last half second counts.
    CHECK_EQ(stand.drawn[2].text, std::string("0.0 ms in swap"));
}

// Shown again after being hidden, the gap is not counted as a frame.
NOCTURNE_TEST(the_time_hidden_is_not_a_frame) {
    stand.reset();
    stand.perf_stats = 1;
    stand.counter = 5000;
    g_SmallEditorFont = debug_support::small_font();
    frame_after(0);
    stand.perf_stats = 0;
    frame_after(10000);
    stand.perf_stats = 1;
    frame_after(0);
    for (int i = 0; i < 25; ++i)
        frame_after(20);
    CHECK_EQ(stand.drawn[1].text, std::string("20.0 ms avg  20.0 max"));
}

// Below 384 lines it is in the HUD's small font; with hardware rendering it
// says so; with no font loaded nothing is drawn.
NOCTURNE_TEST(the_font_and_renderer_follow_the_screen) {
    stand.reset();
    stand.perf_stats = 1;
    stand.counter = 9000;
    g_MicroFont = debug_support::micro_font();
    g_WindowWidth = 320;
    g_WindowHeight = 240;
    g_UseExternalRenderer = 1;
    frame_after(0);
    CHECK(stand.drawn_font == debug_support::micro_font());
    CHECK_EQ(stand.drawn[3].text, std::string("320x240 hardware"));
    g_MicroFont = nullptr;
    frame_after(16);
    CHECK(stand.drawn.empty());
    g_WindowWidth = 640;
    g_WindowHeight = 480;
    g_UseExternalRenderer = 0;
}

NOCTURNE_TEST_MAIN()
