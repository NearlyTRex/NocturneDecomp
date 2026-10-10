#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
float blendWeightCallback(int current_bone_index, int target_bone_index, float blend_weight,
                          int hierarchy_distance, CDeformableModelInstance *instance);
CDeformableModel *getDeformableModel(char *model_filename);
void freeAllModels();
void freeAllSkeletons();
void getMemoryStats(char *output_buffer);

} // namespace nocturne::core
