// Name: core_batman.cpp_CBatman_renderOpaque_FUN_00414340
// Address: 00414340
// Address Range: [[00414340, 0041450f]]
// Convention: unknown
// Signature: int core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CCharacter *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  uint render_flags;
  float fStack_30;
  CBoundingBox3D local_2c;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar2 == 0) {
    param_1->was_rendered_opaque = 0;
  }
  if (((param_1[1].base.previous_transform_state.orientation.vec.x != 2.8026e-45) &&
      (((iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
        iVar3 == 0 || (param_1[1].base.previous_transform_state.orientation.vec.x == 0.0)) &&
       (iVar2 == 0)))) && (param_1->render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_2c);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    if (iVar2 != 0) {
      fVar1 = param_1[1].base.previous_transform_state.orientation.vec.x;
      param_1->was_rendered_opaque = 1;
      if (fVar1 == 0.0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
      }
      else {
        if (fVar1 == 1.4013e-45) {
          fStack_30 = (1.0 - param_1[1].base.previous_transform_state.orientation.vec.y) /
                      1.0f;
        }
        else {
          fStack_30 = ((float)0.5 -
                      param_1[1].base.previous_transform_state.orientation.vec.y) / 1.0f;
          if (fStack_30 < 0.0) {
            fStack_30 = 0.0;
          }
        }
        if (0.0 < (double)fStack_30) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
                    (DAT_005ae704,fStack_30);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
          if ((double)fStack_30 <= 0.5) {
            render_flags = 0x267;
          }
          else {
            render_flags = 0x2e7;
          }
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                    (&param_1->model,-1,render_flags,1,0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
        }
      }
      if ((_DAT_01cd4318 != 0) &&
         (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar3 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(param_1->model).motion_controller,&param_1->base);
        (*((param_1->base).vtable._ub)->renderTargetPoints)(&param_1->base);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iVar2;
  }
  return 0;
}
