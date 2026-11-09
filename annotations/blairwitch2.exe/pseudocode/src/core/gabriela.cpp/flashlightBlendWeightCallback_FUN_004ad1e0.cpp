// Name: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004ad1e0
// Address: 004ad1e0
// Address Range: [[004ad1e0, 004ad22d]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004ad1e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  uint uStack_c;
  
  uStack_c = blend_weight * _DAT_01cb0674;
  if (hierarchy_distance < 1) {
    uStack_c = uStack_c * (float)_DAT_005d6d9b;
  }
  else if (hierarchy_distance != 1) {
    return blend_weight;
  }
  return uStack_c;
}
