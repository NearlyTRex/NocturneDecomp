#pragma once

// =============================================================================
// SCREENS SUPPORT — what the loading, act and credits screens draw through
// =============================================================================
//
// The layout, the scaled text and pictures, the clock, keys, sounds and the
// credits file, stood in for: each call recorded in order as a line of text
// in `calls`, the answers the test sets. Text is 8 pixels a character and
// `char_height` high before scaling. reset() puts it back.

#include "nocturne.h"

#include <set>
#include <string>
#include <utility>
#include <vector>

namespace screens_support {

struct Stand {
    std::vector<std::string> calls;       // in order, each as text
    NocturneLayout layout = {1.0f, 0, 0}; // nocturne_layout
    int char_height = 10;                 // getCharHeight, unscaled
    unsigned random = 0;                  // nocturne_rng_fx
    int time_step = 0;                    // getTime: each call this much later
    std::set<int> held;                   // getKeyState answers 1 for these
    int escape_after = -1;                // and Escape after this many swaps
    float delta = 0.0f;                   // updateDT sets the game's step to this
    int swaps = 0;
    // The credits file: absent, or these lines, the last read setting EOF.
    bool credits_file = true;
    std::vector<std::string> credits;
    int music_channel = 1; // isSfxChannelEnabled
    int music_frames = -1; // isSfxPlaying answers 1 this many times, then 0
    std::string wrap_text; // wrapText's text, and its width
    int wrap_width = 0;
    // The gamepad: frame i's stick, from when its moon is drawn, and the key
    // getAndClearKeyState answers once after its swap (0 for none).
    std::vector<std::pair<int, int>> sticks;
    std::vector<int> presses;

    void reset();
};

extern Stand stand;

// The screen `width` x `height`.
void screen(int width, int height);

// How many recorded calls start with `prefix`, and the first that does ("" if
// none).
int count(const std::string &prefix);
std::string first(const std::string &prefix);

} // namespace screens_support
