#pragma once

#include "core/fwd.h"

namespace nocturne::core {

float blendWeightCallback(int bone, int target, float weight, int distance,
                          CDeformableModelInstance *instance);
CStranger *factoryFuncStranger();

} // namespace nocturne::core
