// Name: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00
// Address: 00448e00
// Address Range: [[00448e00, 00448e7a]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00448e00(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00448e00(CCrossbow *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int render_flags;
  CBoundingBox3D CStack_24;
  float fStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&CStack_24);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return 0;
  }
  render_flags = -1;
  fStack_c = core_crossbow_cpp_CCrossbow_FUN_00449540(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&(this_ptr->base).model,fStack_c,render_flags);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar1;
}
