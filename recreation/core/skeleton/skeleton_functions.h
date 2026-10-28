#pragma once

#include "core/fwd.h"

namespace nocturne::core {

float blendWeightCallback(int current_bone_index, int target_bone_index, float blend_weight,
                          int hierarchy_distance, CDeformableModelInstance *instance);
// deferred: the pools of 64 deformable models and 40 skeletons, with this and loadSkeleton
// nocedit 0x00599670
CDeformableModel *getDeformableModel(char *model_filename);
void freeAllModels();
void freeAllSkeletons();
void getMemoryStats(char *output_buffer);

} // namespace nocturne::core
