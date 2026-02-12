// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
// Address: 0042a2c0
// Address Range: [[0042a2c0, 0042a38b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    this_ptr->was_rendered_opaque = 0;
  }
  if (this_ptr->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      this_ptr->was_rendered_opaque = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0(this_ptr);
      if (DAT_02f43978 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_render_FUN_0052e700
                    (&(this_ptr->model).motion_controller,&this_ptr->base);
          (*((this_ptr->base).vtable._ub)->renderTargetPoints)(&this_ptr->base);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
