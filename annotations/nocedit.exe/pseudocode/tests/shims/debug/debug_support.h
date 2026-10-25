#pragma once

// =============================================================================
// DEBUG SUPPORT — the game state and engine calls the debug shims read
// =============================================================================
//
// The globals they look at, defined here, zeroed; the engine's console, the
// cheat switches, the HUD's text drawing and the front-buffer dump, stood in
// for and recording what they were handed; and a clock for the frame-rate
// overlay, which this directory's build of perf_overlay.cpp reads in place of
// SDL's performance counter (CMakeLists.txt beside this), with the GL
// presenter's time in the swap on the same clock. A test sets the
// answers it needs and reads back the rest; reset() puts both back.

#include <string>
#include <vector>

struct CBitFont;

namespace debug_support {

struct Text {
    std::string text;
    int x;
    int y;
};

struct Stand {
    // The console, a line per CConsole::printf.
    std::vector<std::string> console;

    // nocturne_cheat_local(NOCTURNE_CHEAT_PERF_STATS).
    int perf_stats = 0;

    // The HUD's text drawing: every string drawn, and the font it was in.
    std::vector<Text> drawn;
    CBitFont *drawn_font = nullptr;

    // The performance counter, in ticks of a 1000Hz frequency.
    unsigned long long counter = 0;

    // The presenter's time in the swap so far, on the same clock.
    unsigned long long swap_ticks = 0;

    // What nocturne_dump_frontbuffer answers, and the paths it was asked for.
    int dump_result = 0;
    std::vector<std::string> dumps;

    // The netplay view trace's: CDemonSet::findVdirBoxAtPosition, and the
    // session's state.
    int vdir_zone = -1;
    int session_active = 0;
    int session_frame = 0;

    void reset() {
        *this = Stand();
    }
};

extern Stand stand;

// Fonts to hand the overlay; never drawn with for real.
CBitFont *micro_font();
CBitFont *small_font();

} // namespace debug_support
