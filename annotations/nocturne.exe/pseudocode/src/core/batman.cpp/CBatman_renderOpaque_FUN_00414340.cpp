// Name: core_batman.cpp_CBatman_renderOpaque_FUN_00414340
// Address: 00414340
// Address Range: [[00414340, 0041450f]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CBatman *this_ptr)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  uint render_flags;
  float fStack_30;
  CBoundingBox3D local_2c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if (((this_ptr->mist_state != 2) &&
      (((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                           (g_CDemonRenderer_PTR_005ae704), iVar2 == 0 ||
        (this_ptr->mist_state == 0)) && (iVar1 == 0)))) &&
     ((this_ptr->base).base.render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_2c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      iVar2 = this_ptr->mist_state;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20((CCharacter *)this_ptr);
      }
      else {
        if (iVar2 == 1) {
          fStack_30 = (1.0 - this_ptr->vanish_timer) / 1.0f;
        }
        else {
          fStack_30 = ((float)0.5 - this_ptr->vanish_timer) / 1.0f;
          if (fStack_30 < 0.0) {
            fStack_30 = 0.0;
          }
        }
        if (0.0 < (double)fStack_30) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000
                    (g_CDemonRenderer_PTR_005ae704,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
                    (g_CDemonRenderer_PTR_005ae704,fStack_30);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
                    (g_CDemonRenderer_PTR_005ae704,1);
          if ((double)fStack_30 <= 0.5) {
            render_flags = 0x267;
          }
          else {
            render_flags = 0x2e7;
          }
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                    (&(this_ptr->base).base.model,-1,render_flags,1,0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
                    (g_CDemonRenderer_PTR_005ae704);
        }
      }
      if ((_DAT_01cd4318 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                            (g_CDemonRenderer_PTR_005ae704), iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
