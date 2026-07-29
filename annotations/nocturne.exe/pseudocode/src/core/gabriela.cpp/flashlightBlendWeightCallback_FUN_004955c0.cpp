// Name: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004955c0
// Address: 004955c0
// Address Range: [[004955c0, 0049560d]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  uint local_c;
  
  local_c = blend_weight * _DAT_01c71394;
  if (hierarchy_distance < 1) {
    local_c = local_c * (float)0.69999999999999996;
  }
  else if (hierarchy_distance != 1) {
    return blend_weight;
  }
  return local_c;
}
