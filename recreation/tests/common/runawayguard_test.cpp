#include "tests/mocks/runawayguard.h"

#include <gtest/gtest.h>

namespace nocturne {
namespace {

TEST(CRunawayGuard, FramesUpToTheLimitPass) {
    CRunawayGuard guard(3, "test loop");
    guard.countFrame();
    guard.countFrame();
    guard.countFrame();
    guard.reset();
    guard.countFrame();
    guard.countFrame();
    guard.countFrame();
}

// However the loop under test treats the input it is given, the next frame past the limit ends
// the process, so a test can't run on printing a failure a frame.
TEST(CRunawayGuardDeathTest, TheFramePastTheLimitEndsTheProcess) {
    GTEST_FLAG_SET(death_test_style, "threadsafe");
    EXPECT_DEATH(
        {
            CRunawayGuard guard(3, "test loop");
            while (true) {
                guard.countFrame();
            }
        },
        "runaway loop: test loop after 3 frames");
}

} // namespace
} // namespace nocturne
