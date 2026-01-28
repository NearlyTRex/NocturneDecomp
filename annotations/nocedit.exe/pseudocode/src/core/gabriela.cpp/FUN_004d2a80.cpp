// Name: core_gabriela.cpp_FUN_004d2a80
// Address: 004d2a80
// Address Range: [[004d2a80, 004d2adf]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_FUN_004d2a80 (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance, CDeformableModelInstance *instance)

#include "nocturne.h"

float __cdecl
core_gabriela_cpp_FUN_004d2a80
          (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,
          CDeformableModelInstance *instance)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = blend_weight * (float)0.20000000000000001;
  }
  else if (hierarchy_distance == 1) {
    fVar1 = blend_weight * (float)0.40000000000000002;
  }
  else if (hierarchy_distance == 2) {
    fVar1 = blend_weight * (float)0.59999999999999998;
  }
  else {
    if (hierarchy_distance != 3) {
      return blend_weight;
    }
    fVar1 = blend_weight * (float)0.80000000000000004;
  }
  return fVar1;
}
