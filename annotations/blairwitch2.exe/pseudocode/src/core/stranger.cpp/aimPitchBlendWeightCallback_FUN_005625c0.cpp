// Name: core_stranger.cpp_aimPitchBlendWeightCallback_FUN_005625c0
// Address: 005625c0
// Address Range: [[005625c0, 005625fd]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_005625c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_stranger_cpp_aimPitchBlendWeightCallback_FUN_005625c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance)

{
  double dVar1;
  
  dVar1 = _DAT_005eb1ad;
  if ((0 < hierarchy_distance) && (dVar1 = _DAT_005eb1a5, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
