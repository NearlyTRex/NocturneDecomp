// =============================================================================
// WALK TURN — the forward-step scale for scripted walks
// =============================================================================
//
// The curve decides how fast a cutscene character walks while it turns. It has
// to leave small heading errors alone, since the 4-connected path headings wobble
// by up to about 27 degrees on a diagonal, and it has to stop the character
// before it walks sideways into a doorframe.

#include "nocturne_test.h"

#include "game/walk_turn.h"

namespace {

const float kDeg = 0.017453292f;

} // namespace

NOCTURNE_TEST(unscripted_walks_are_never_scaled) {
    CHECK_EQ(nocturne_walk_turn_scale(0, 0.0f), 1.0f);
    CHECK_EQ(nocturne_walk_turn_scale(0, 80.0f * kDeg), 1.0f);
    CHECK_EQ(nocturne_walk_turn_scale(0, 180.0f * kDeg), 1.0f);
}

NOCTURNE_TEST(path_heading_wobble_keeps_full_speed) {
    CHECK_EQ(nocturne_walk_turn_scale(1, 0.0f), 1.0f);
    CHECK_EQ(nocturne_walk_turn_scale(1, 27.0f * kDeg), 1.0f);
    CHECK_EQ(nocturne_walk_turn_scale(1, 30.0f * kDeg), 1.0f);
}

NOCTURNE_TEST(scale_falls_linearly_to_a_stop_at_ninety) {
    CHECK_NEAR(nocturne_walk_turn_scale(1, 60.0f * kDeg), 0.5f, 1e-5f);
    CHECK_NEAR(nocturne_walk_turn_scale(1, 45.0f * kDeg), 0.75f, 1e-5f);
    CHECK_EQ(nocturne_walk_turn_scale(1, 90.0f * kDeg), 0.0f);
    CHECK_EQ(nocturne_walk_turn_scale(1, 170.0f * kDeg), 0.0f);
}

NOCTURNE_TEST(left_and_right_turns_scale_the_same) {
    CHECK_EQ(nocturne_walk_turn_scale(1, -45.0f * kDeg),
             nocturne_walk_turn_scale(1, 45.0f * kDeg));
    CHECK_EQ(nocturne_walk_turn_scale(1, -120.0f * kDeg), 0.0f);
}

NOCTURNE_TEST_MAIN()
