// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_004c4370
// Address: 004c4370
// Address Range: [[004c4370, 004c43e9]]
// Convention: __cdecl
// Signature: int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_004c4370(CLadder *this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_004c4370(CLadder *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_1c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar2;
}
