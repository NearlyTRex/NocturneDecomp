#pragma once

#include "core/fwd.h"

namespace nocturne::core {

float blendWeightCallback(int current_bone_index, int target_bone_index, float blend_weight,
                          int hierarchy_distance, CDeformableModelInstance *instance);

} // namespace nocturne::core
