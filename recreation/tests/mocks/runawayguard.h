#pragma once

#include <cstdio>
#include <cstdlib>
#include <string_view>

namespace nocturne {

// Counts the frames a test's loop presents, and past the limit ends the test's process. Pressing
// a key to back out instead trusts the code under test to answer it, and a loop that doesn't, as
// one that takes the key as a binding, runs on, a failure printed a frame, until the test runner
// holding the output runs the machine out of memory. ctest runs each test in a process of its own,
// so only this one fails.
class CRunawayGuard {
public:
    CRunawayGuard(int limit, std::string_view what) : limit_(limit), what_(what) {}

    // Past the limit it doesn't return.
    void countFrame() {
        if (++frames_ <= limit_) {
            return;
        }
        std::fprintf(stderr, "runaway loop: %.*s after %d frames\n", static_cast<int>(what_.size()),
                     what_.data(), limit_);
        std::fflush(stderr);
        std::abort();
    }

    // For a limit counted afresh, as from each wait's start.
    void reset() {
        frames_ = 0;
    }

private:
    int limit_;
    std::string_view what_;
    int frames_ = 0;
};

} // namespace nocturne
