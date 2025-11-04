#pragma once

// Individual function definition header for: CDeformableModel_MotionBlendWeightFunc

// Function Definition: CDeformableModel_MotionBlendWeightFunc
typedef float (*CDeformableModel_MotionBlendWeightFunc)(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance* instance);

