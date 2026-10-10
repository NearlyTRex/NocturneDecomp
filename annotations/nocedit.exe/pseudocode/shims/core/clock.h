#pragma once

// =============================================================================
// WALL CLOCK — seconds on a monotonic clock
// =============================================================================
//
// For timing that has to hold while the game's own frame counter is not
// running: a blocking screen, an attract-mode countdown. steady_clock, so a
// change to the system time cannot stretch or cut one short.
//
// Header-only: it is one line.

#include <chrono>

inline double nocturne_now_seconds() {
    using namespace std::chrono;
    return duration<double>(steady_clock::now().time_since_epoch()).count();
}
