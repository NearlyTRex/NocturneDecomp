// =============================================================================
// PLATFORM LOOP — when a looping platform is on its way back
// =============================================================================
//
// TRAIN.MSN's telephone pole crosses the set in 10 s and returns in 0.1 s, its
// events both "true". Only that return is hidden: the crossing, a platform that
// does not loop, and one at rest are drawn as shipped.

#include "game/platform_loop.h"
#include "nocturne_test.h"

namespace {

const int kAtStart = 0;
const int kAtEnd = 1;
const int kStopped = 2;
const int kMovingToEnd = 3;
const int kMovingToStart = 4;

int pole(int state) {
    return nocturne_platform_loop_return(state, "true", "true", 0.1f, 10.0f);
}

} // namespace

NOCTURNE_TEST(the_poles_return_is_hidden_and_its_crossing_drawn) {
    CHECK_EQ(pole(kMovingToStart), 1);
    CHECK_EQ(pole(kMovingToEnd), 0);
}

NOCTURNE_TEST(a_loop_at_rest_is_drawn) {
    CHECK_EQ(pole(kAtStart), 0);
    CHECK_EQ(pole(kAtEnd), 0);
    CHECK_EQ(pole(kStopped), 0);
}

// The shorter leg is the return, whichever way it runs, and "TRUE" is the same
// condition as "true".
NOCTURNE_TEST(the_shorter_leg_is_the_return_either_way) {
    CHECK_EQ(nocturne_platform_loop_return(kMovingToEnd, "TRUE", "True", 10.0f, 0.1f), 1);
    CHECK_EQ(nocturne_platform_loop_return(kMovingToStart, "TRUE", "True", 10.0f, 0.1f), 0);
    CHECK_EQ(nocturne_platform_loop_return(kMovingToStart, "true", "true", 2.0f, 2.0f), 0);
}

// A door or lift opened by an event goes back and forth when told; it is drawn
// all the way.
NOCTURNE_TEST(a_platform_that_waits_for_an_event_is_drawn) {
    CHECK_EQ(nocturne_platform_loop_return(kMovingToStart, "", "DoorCrateOpen", 2.0f, 1.0f), 0);
    CHECK_EQ(nocturne_platform_loop_return(kMovingToStart, "true", "DoorOpen", 0.1f, 10.0f), 0);
}

NOCTURNE_TEST_MAIN()
