// =============================================================================
// WALL CLOCK — seconds that only go forwards
// =============================================================================

#include "core/clock.h"
#include "nocturne_test.h"

#include <chrono>
#include <thread>

NOCTURNE_TEST(the_clock_moves_forwards_by_the_time_that_passed) {
    const double before = nocturne_now_seconds();
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    const double after = nocturne_now_seconds();
    CHECK(after - before >= 0.015);
    // Generous above: a busy machine is not a broken clock.
    CHECK(after - before < 2.0);
}

NOCTURNE_TEST_MAIN()
