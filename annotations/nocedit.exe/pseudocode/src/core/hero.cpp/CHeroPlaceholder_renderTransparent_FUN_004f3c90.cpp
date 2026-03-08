// Name: core_hero.cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90
// Address: 004f3c90
// Address Range: [[004f3c90, 004f3d19]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90(CHeroPlaceholder *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_1c;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      if (iVar1 != 0) {
        core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
                  (&this_ptr->base,0xff,0xff,0xff,0x80);
      }
      return iVar1;
    }
  }
  return 0;
}
