// Name: core_emitter.cpp_FUN_004790f0
// Address: 004790f0
// Address Range: [[004790f0, 0047913d]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_004790f0(int param_1,int param_2)

#include "nocturne.h"

void core_emitter_cpp_FUN_004790f0(int param_1,int param_2)

{
  uint uVar1;
  byte local_1c [24];
  
  if (param_2 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  uVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  *(uint *)(param_1 + 0x484) = uVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
