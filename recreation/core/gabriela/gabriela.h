#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
float weaponDrawBlendWeightCallback(int current_bone_index, int target_bone_index,
                                    float blend_weight, int hierarchy_distance,
                                    CDeformableModelInstance *instance);
float flashlightBlendWeightCallback(int current_bone_index, int target_bone_index,
                                    float blend_weight, int hierarchy_distance,
                                    CDeformableModelInstance *instance);
float aimRotationBlendWeightCallback(int current_bone_index, int target_bone_index,
                                     float blend_weight, int hierarchy_distance,
                                     CDeformableModelInstance *model_ptr);
CGabriella *factoryFuncGabriella();
CWeapon *getSelectedWeapon(CInventory *inventory_ptr);

} // namespace nocturne::core
