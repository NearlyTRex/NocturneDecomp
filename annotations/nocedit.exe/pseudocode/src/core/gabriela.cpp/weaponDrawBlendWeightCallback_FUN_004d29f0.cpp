// Name: core_gabriela.cpp_weaponDrawBlendWeightCallback_FUN_004d29f0
// Address: 004d29f0
// Address Range: [[004d29f0, 004d2a2d]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = 0.90000000000000002;
  if ((0 < hierarchy_distance) && (dVar1 = 0.94999999999999996, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
