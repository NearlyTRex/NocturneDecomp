// Name: core_lever.cpp_CLever_renderOpaque_FUN_004ff5d0
// Address: 004ff5d0
// Address Range: [[004ff5d0, 004ff66c]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_004ff5d0(CLever *this_ptr)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_004ff5d0(CLever *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int render_flags;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = auStack_2c;
  puVar4 = auStack_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_44);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return 0;
  }
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  iStack_14 = pCVar1->frame_count + -1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            (&this_ptr->model,(float)iStack_14 * this_ptr->param,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return iVar2;
}
