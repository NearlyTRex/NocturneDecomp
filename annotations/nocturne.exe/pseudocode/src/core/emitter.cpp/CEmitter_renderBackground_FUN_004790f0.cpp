// Name: core_emitter.cpp_CEmitter_renderBackground_FUN_004790f0
// Address: 004790f0
// Address Range: [[004790f0, 0047913d]]
// Convention: unknown
// Signature: void core_emitter_cpp_CEmitter_renderBackground_FUN_004790f0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_emitter_cpp_CEmitter_renderBackground_FUN_004790f0(CDemonActor *param_1,int param_2)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (param_2 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  *(int *)(param_1[3].create_event + 0x1c) = iVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
