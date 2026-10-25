// =============================================================================
// FOCUS TRACE — the frames after the window gains focus, written down
// =============================================================================
//
// With NOCTURNE_FOCUS_TRACE naming a directory, each focus gain is logged to
// focus_trace.txt there, the renderer's calls after it with the draws between
// them, and the next twelve presents each dumped as an image. Whether the
// trace is on is read at the first gain, so this is a run with it on and
// test_focus_trace_off.cpp one with it off.

#include "debug/focus_trace.h"
#include "debug_support.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "renderer/trigl_gl.h"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>

namespace {

namespace fs = std::filesystem;
using debug_support::stand;

fs::path trace_dir() {
    std::error_code ec;
    return fs::temp_directory_path(ec) / "nocturne_focus_trace_test";
}

std::string log_text() {
    std::ifstream in(trace_dir() / "focus_trace.txt");
    std::stringstream text;
    text << in.rdbuf();
    return text.str();
}

bool has(const std::string &text, const std::string &part) {
    return text.find(part) != std::string::npos;
}

} // namespace

// A gain arms the trace and is logged with the game frame, when there is a
// game; the renderer's calls follow, each with the draws made since the last.
NOCTURNE_TEST(a_focus_gain_logs_the_calls_and_draws_after_it) {
    std::error_code ec;
    fs::remove_all(trace_dir(), ec);
    fs::create_directories(trace_dir(), ec);
#if defined(_WIN32)
    _putenv_s("NOCTURNE_FOCUS_TRACE", trace_dir().string().c_str());
#else
    setenv("NOCTURNE_FOCUS_TRACE", trace_dir().string().c_str(), 1);
#endif
    stand.reset();
    nocturne_focus_trace_arm();
    CHECK_EQ(g_nocturne_focus_trace_active, 1);

    nocturne_focus_trace_event("beginScene"); // nothing drawn yet
    nocturne_trigl_stats.draws = 10;
    nocturne_trigl_stats.untextured_draws = 2;
    nocturne_focus_trace_event("masterZBuffer"); // with a backtrace
    nocturne_trigl_stats.draws = 3;              // the renderer restarted
    nocturne_trigl_stats.untextured_draws = 0;
    nocturne_focus_trace_event("toggle");
    const std::string text = log_text();
    CHECK(has(text, "=== focus gain 1 at "));
    CHECK(has(text, "game frame -1"));
    CHECK(has(text, "beginScene"));
    CHECK(has(text, "draws=10 untextured=2 missing_tex=0"));
    CHECK(has(text, "draws=3 untextured=0 missing_tex=0"));
}

// The next twelve presents are dumped and logged with the game's state, and
// then the trace is done until the next gain.
NOCTURNE_TEST(twelve_presents_are_dumped_and_then_it_stops) {
    stand.reset();
    static CGame game = {};
    static CNetGame net = {};
    game.frame_counter = 42;
    net.has_pending_sim_frame = 1;
    for (int i = 0; i < 12; ++i) {
        // A game and a network game for the second half.
        g_CGamePtr = i < 6 ? nullptr : &game;
        g_CNetGamePtr = i < 6 ? nullptr : &net;
        stand.dump_result = i == 3 ? -1 : 0;
        nocturne_focus_trace_event("present"); // not the first present's
        nocturne_focus_trace_presented();
    }
    CHECK_EQ(g_nocturne_focus_trace_active, 0);
    CHECK_EQ((int)stand.dumps.size(), 12);
    CHECK(has(stand.dumps[0], "focus_1_00.ppm"));
    CHECK(has(stand.dumps[11], "focus_1_11.ppm"));

    // Done: further calls write nothing.
    nocturne_focus_trace_event("late");
    nocturne_focus_trace_presented();
    CHECK_EQ((int)stand.dumps.size(), 12);
    const std::string text = log_text();
    CHECK(has(text, "present 3: game frame -1 pending_sim=-1"));
    CHECK(has(text, "dump=failed"));
    CHECK(has(text, "present 6: game frame 42 pending_sim=1"));
    CHECK(!has(text, "late"));

    // The next gain is the second, with a game to read the frame from.
    nocturne_focus_trace_arm();
    CHECK_EQ(g_nocturne_focus_trace_active, 1);
    CHECK(has(log_text(), "=== focus gain 2 at "));
    CHECK(has(log_text(), "game frame 42"));
    g_CGamePtr = nullptr;
    g_CNetGamePtr = nullptr;
}

NOCTURNE_TEST_MAIN()
