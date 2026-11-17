// Name: core_stranger.cpp_aimPitchBlendWeightCallback_FUN_00585040
// Address: 00585040
// Address Range: [[00585040, 0058507d]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_00585040(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

#include "nocturne.h"

float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_00585040(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

{
  double dVar1;
  
  dVar1 = 0.40000000000000002;
  if ((0 < hierarchy_distance) && (dVar1 = 0.69999999999999996, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
