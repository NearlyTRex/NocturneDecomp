// Name: core_stranger.cpp_FUN_005baee0
// Address: 005baee0
// Address Range: [[005baee0, 005baf1d]]
// Convention: __cdecl
// Signature: float core_stranger.cpp_FUN_005baee0(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance * instance)

#include "nocturne.h"

float __cdecl
core_stranger_cpp_FUN_005baee0
          (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,
          CDeformableModelInstance *instance)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = (float)0.40000000000000002;
  }
  else {
    if (hierarchy_distance != 1) {
      return blend_weight;
    }
    fVar1 = (float)0.69999999999999996;
  }
  return blend_weight * fVar1;
}
