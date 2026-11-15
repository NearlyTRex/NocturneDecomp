// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_004e0040
// Address: 004e0040
// Address Range: [[004e0040, 004e00cd]]
// Convention: __cdecl
// Signature: int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_004e0040(CLadder *this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_004e0040(CLadder *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  int unaff_EDI;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [2];
  CBoundingBox3D CStack_2c;
  uint auStack_14 [4];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = auStack_14;
  puVar4 = auStack_34;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_2c,unaff_EDI);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iVar2;
}
