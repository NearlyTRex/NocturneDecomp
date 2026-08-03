// Name: core_tvbat.cpp_CTVBat_renderOpaque_FUN_0054bfd0
// Address: 0054bfd0
// Address Range: [[0054bfd0, 0054c03c]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_0054bfd0(CTVBat *this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_0054bfd0(CTVBat *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,this_ptr->anim_frame,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iVar1;
}
