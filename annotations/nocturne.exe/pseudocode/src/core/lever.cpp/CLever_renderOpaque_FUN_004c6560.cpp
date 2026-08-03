// Name: core_lever.cpp_CLever_renderOpaque_FUN_004c6560
// Address: 004c6560
// Address Range: [[004c6560, 004c65ed]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_004c6560(CLever *this_ptr)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_004c6560(CLever *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModel *pCVar2;
  int render_flags;
  CBoundingBox3D local_2c;
  int local_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return 0;
  }
  render_flags = -1;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  local_14 = pCVar2->frame_count + -1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&this_ptr->model,(float)local_14 * this_ptr->param,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar1;
}
