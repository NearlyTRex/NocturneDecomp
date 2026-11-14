// Name: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00449920
// Address: 00449920
// Address Range: [[00449920, 004499b3]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00449920(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00449920(CCrossbow *this_ptr)

{
  float animation_frame;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_ffffffc0;
  uint auStack_28 [7];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_28;
  puVar3 = (uint *)&stack0xffffffc0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(&stack0xffffffc0);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return 0;
  }
  animation_frame = core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&(this_ptr->base).model,animation_frame,in_stack_ffffffc0);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar1;
}
