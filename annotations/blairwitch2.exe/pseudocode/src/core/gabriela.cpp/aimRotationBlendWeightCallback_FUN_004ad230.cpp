// Name: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_004ad230
// Address: 004ad230
// Address Range: [[004ad230, 004ad28f]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004ad230(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = blend_weight * (float)_DAT_005d6dbb;
  }
  else if (hierarchy_distance == 1) {
    fVar1 = blend_weight * (float)_DAT_005d6db3;
  }
  else if (hierarchy_distance == 2) {
    fVar1 = blend_weight * (float)_DAT_005d6dab;
  }
  else {
    if (hierarchy_distance != 3) {
      return blend_weight;
    }
    fVar1 = blend_weight * (float)_DAT_005d6da3;
  }
  return fVar1;
}
