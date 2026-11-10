// Name: core_tvbat.cpp_CTVBat_renderOpaque_FUN_005a4ec0
// Address: 005a4ec0
// Address Range: [[005a4ec0, 005a4f40]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005a4ec0(CTVBat *this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005a4ec0(CTVBat *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_34;
  puVar3 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,this_ptr->anim_frame,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar1;
}
