#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDeformableModelInstance;

// Function Definition: CDeformableModel_MotionBlendWeightFunc
typedef float CDeformableModel_MotionBlendWeightFunc(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, struct CDeformableModelInstance* instance);

