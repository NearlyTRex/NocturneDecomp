// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
// Address: 00426440
// Address Range: [[00426440, 0042650d]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_20;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar1 == 0) {
    this_ptr->was_rendered_opaque = 0;
  }
  if (this_ptr->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      this_ptr->was_rendered_opaque = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(this_ptr);
      if (_DAT_01cd4318 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                          (g_CDemonRenderer_PTR_005ae704);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_render_FUN_004e22b0
                    (&(this_ptr->model).motion_controller,&this_ptr->base);
          (*((this_ptr->base).vtable._ub)->renderTargetPoints)(&this_ptr->base);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
