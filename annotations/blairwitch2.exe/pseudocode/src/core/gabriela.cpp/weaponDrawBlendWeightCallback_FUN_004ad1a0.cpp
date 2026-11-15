// Name: core_gabriela.cpp_weaponDrawBlendWeightCallback_FUN_004ad1a0
// Address: 004ad1a0
// Address Range: [[004ad1a0, 004ad1dd]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004ad1a0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004ad1a0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  double dVar1;
  
  dVar1 = _DAT_005d6d93;
  if ((0 < hierarchy_distance) && (dVar1 = _DAT_005d6d8b, hierarchy_distance != 1)) {
    return blend_weight;
  }
  return blend_weight * (float)dVar1;
}
