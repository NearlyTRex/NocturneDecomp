// =============================================================================
// GOGGLES CAMERA HOLD — a script's camera hold runs out under the goggles
// =============================================================================

#include "game/goggles_camera_hold.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <memory>

// The hold counts down by the frame's time and stops at nothing; with none
// left, or no set, there is nothing to count.
NOCTURNE_TEST(the_hold_counts_down_to_nothing) {
    std::unique_ptr<CDemonSet> set(new CDemonSet());
    set->camera_switch_cooldown = 0.5f;
    nocturne_goggles_camera_hold_tick(set.get(), 0.2f);
    CHECK_NEAR(set->camera_switch_cooldown, 0.3f, 1e-6f);
    nocturne_goggles_camera_hold_tick(set.get(), 1.0f);
    CHECK_EQ(set->camera_switch_cooldown, 0.0f);
    nocturne_goggles_camera_hold_tick(set.get(), 1.0f);
    CHECK_EQ(set->camera_switch_cooldown, 0.0f);
    nocturne_goggles_camera_hold_tick(nullptr, 1.0f);
}

NOCTURNE_TEST_MAIN()
