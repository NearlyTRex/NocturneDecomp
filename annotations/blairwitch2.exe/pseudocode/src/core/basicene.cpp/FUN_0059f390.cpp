// Name: core_basicene.cpp_FUN_0059f390
// Address: 0059f390
// Address Range: [[0059f390, 0059f40e]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059f390(int param_1)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059f390(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x11418) != 0) && (*(int *)(param_1 + 0x113d0) != 0)) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    if (iVar1 < 1) {
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                ((CDeformableModelInstance *)(param_1 + 0x2b4),*(int *)(param_1 + 0x113f4),
                 (*(float *)(param_1 + 0x11404) / *(float *)(param_1 + 0x11400)) *
                 (float)*(int *)(param_1 + 0x113f8),0.99,*(int *)(param_1 + 0x113fc),
                 core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      return;
    }
  }
  return;
}
