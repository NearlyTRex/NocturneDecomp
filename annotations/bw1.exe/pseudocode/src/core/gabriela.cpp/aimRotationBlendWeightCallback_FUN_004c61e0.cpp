// Name: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_004c61e0
// Address: 004c61e0
// Address Range: [[004c61e0, 004c623f]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_004c61e0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = blend_weight * (float)_DAT_005e0e34;
  }
  else if (hierarchy_distance == 1) {
    fVar1 = blend_weight * (float)_DAT_005e0e2c;
  }
  else if (hierarchy_distance == 2) {
    fVar1 = blend_weight * (float)_DAT_005e0e24;
  }
  else {
    if (hierarchy_distance != 3) {
      return blend_weight;
    }
    fVar1 = blend_weight * (float)_DAT_005e0e1c;
  }
  return fVar1;
}
