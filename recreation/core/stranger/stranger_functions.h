#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
float blendWeightCallback(int bone, int target, float weight, int distance,
                          CDeformableModelInstance *instance);
CStranger *factoryFuncStranger();

} // namespace nocturne::core
