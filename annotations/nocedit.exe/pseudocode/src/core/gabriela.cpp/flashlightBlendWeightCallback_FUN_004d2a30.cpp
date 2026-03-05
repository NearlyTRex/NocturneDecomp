// Name: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004d2a30
// Address: 004d2a30
// Address Range: [[004d2a30, 004d2a7d]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004d2a30(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004d2a30(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)

{
  uint local_c;
  
  local_c = blend_weight * FLOAT_02d7b844;
  if (hierarchy_distance < 1) {
    local_c = local_c * (float)0.69999999999999996;
  }
  else if (hierarchy_distance != 1) {
    return blend_weight;
  }
  return local_c;
}
