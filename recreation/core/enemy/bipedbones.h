#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// The bones of a two-legged enemy's skeleton its own code poses and hits.
struct SBipedBones {
    int head = 0;
    int left_hand = 0;
    int right_hand = 0;
    int left_forearm = 0;
    int right_forearm = 0;
    int left_upper_arm = 0;
    int right_upper_arm = 0;
    int left_foot = 0;
    int right_foot = 0;
    int spine = 0;
    // -1 for a skeleton it isn't looked for in.
    int spine1 = -1;
    int spine2 = 0;
};

// Each fatal when the skeleton hasn't it, looked for in the order the enemies' setups look:
// the head, the forearms, upper arms, feet and hands, then up the spine.
[[nodiscard]] SBipedBones findBipedBones(const CSkeleton &skeleton, bool with_spine1);

} // namespace nocturne::core
