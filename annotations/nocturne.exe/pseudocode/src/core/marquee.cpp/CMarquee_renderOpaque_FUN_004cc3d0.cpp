// Name: core_marquee.cpp_CMarquee_renderOpaque_FUN_004cc3d0
// Address: 004cc3d0
// Address Range: [[004cc3d0, 004cc437]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_004cc3d0(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_004cc3d0(CMarquee *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  this_ptr->is_visible = iVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return this_ptr->is_visible;
}
