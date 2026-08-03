// Name: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_0043d0a0
// Address: 0043d0a0
// Address Range: [[0043d0a0, 0043d11e]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_0043d0a0(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_0043d0a0(CCrossbow *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int render_flags;
  CBoundingBox3D local_24;
  float fStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_24);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return 0;
  }
  render_flags = -1;
  fStack_c = core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043d810(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&(this_ptr->base).model,fStack_c,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iVar1;
}
