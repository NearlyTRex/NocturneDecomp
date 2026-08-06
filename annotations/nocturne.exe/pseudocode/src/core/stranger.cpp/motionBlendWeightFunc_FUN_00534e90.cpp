// Name: core_stranger.cpp_motionBlendWeightFunc_FUN_00534e90
// Address: 00534e90
// Address Range: [[00534e90, 00534ecd]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_motionBlendWeightFunc_FUN_00534e90(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_stranger_cpp_motionBlendWeightFunc_FUN_00534e90(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.40000000000000002;
  if ((0 < hierarchy_distance) && (dVar1 = 0.69999999999999996, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
