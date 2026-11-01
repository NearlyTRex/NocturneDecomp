#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// The bones of a hero's skeleton the hero's own code poses.
struct SHeroBones {
    int head = 0;
    int left_clavicle = 0;
    int right_clavicle = 0;
    int left_upper_arm = 0;
    int right_upper_arm = 0;
    int left_forearm = 0;
    int right_forearm = 0;
    int left_foot = 0;
    int right_foot = 0;
    int left_thigh = 0;
    int right_thigh = 0;
    int left_calf = 0;
    int right_calf = 0;
    int left_hand = 0;
    int right_hand = 0;
    int spine2 = 0;
    int spine = 0;
};

// Each fatal when the skeleton hasn't it, looked for in the order the heroes' setups look: the
// head, then out along the arms and legs, the hands, and down the spine.
[[nodiscard]] SHeroBones findHeroBones(const CSkeleton &skeleton);

} // namespace nocturne::core
