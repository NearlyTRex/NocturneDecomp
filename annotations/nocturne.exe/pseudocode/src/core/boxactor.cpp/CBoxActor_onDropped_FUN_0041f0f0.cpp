// Name: core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0
// Address: 0041f0f0
// Address Range: [[0041f0f0, 0041f146]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(int param_1,int param_2)

#include "nocturne.h"

void core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(int param_1,int param_2)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  *(uint *)(param_1 + 0x310) = 0;
  core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(param_1);
  if (param_2 == 0) {
    return;
  }
  local_8 = 0;
  local_c = 0;
  local_10 = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(param_1 + 0x38c,param_2,&local_10);
  return;
}
