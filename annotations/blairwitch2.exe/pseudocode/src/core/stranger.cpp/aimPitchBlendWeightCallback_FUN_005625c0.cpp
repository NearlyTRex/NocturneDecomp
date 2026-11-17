// Name: core_stranger.cpp_aimPitchBlendWeightCallback_FUN_005625c0
// Address: 005625c0
// Address Range: [[005625c0, 005625fd]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_005625c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

#include "nocturne.h"

float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_005625c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

{
  double dVar1;
  
  dVar1 = 0.40000000000000002;
  if ((0 < hierarchy_distance) && (dVar1 = 0.69999999999999996, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
