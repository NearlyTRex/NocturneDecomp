// Name: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700
// Address: 0042a700
// Address Range: [[0042a700, 0042a752]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(int param_1,float param_2,int param_3)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(int param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2620) * 0x38;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            ((CDeformableModelInstance *)(param_1 + 0x150),*(int *)(iVar1 + 0x2c + param_1 + 0x2624)
             ,(float)*(int *)(iVar1 + 0x30 + param_1 + 0x2624) * *(float *)(param_1 + 0x2a88),
             param_2,param_3,core_skeleton_cpp_FUN_0051b650);
  return;
}
