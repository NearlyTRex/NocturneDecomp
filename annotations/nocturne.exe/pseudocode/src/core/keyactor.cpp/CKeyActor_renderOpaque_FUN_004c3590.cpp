// Name: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_004c3590
// Address: 004c3590
// Address Range: [[004c3590, 004c35f9]]
// Convention: __cdecl
// Signature: int __cdecl core_keyactor_cpp_CKeyActor_renderOpaque_FUN_004c3590(CKeyActor *this_ptr)

#include "nocturne.h"

int __cdecl core_keyactor_cpp_CKeyActor_renderOpaque_FUN_004c3590(CKeyActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_20;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar1;
}
