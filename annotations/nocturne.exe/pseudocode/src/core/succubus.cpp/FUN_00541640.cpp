// Name: core_succubus.cpp_FUN_00541640
// Address: 00541640
// Address Range: [[00541640, 005417bb]]
// Convention: unknown
// Signature: int core_succubus_cpp_FUN_00541640(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_succubus_cpp_FUN_00541640(CCharacter *param_1)

{
  CDeformableModelInstance *model_ptr;
  float *this_ptr;
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_24;
  int iStack_c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    param_1->was_rendered_opaque = 0;
  }
  if (param_1->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_24);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iStack_c != 0) {
      model_ptr = (CDeformableModelInstance *)(param_1[1].base.create_event + 0x20);
      param_1->was_rendered_opaque = 1;
      if (iVar1 == 0) {
        if (param_1[1].carry_hands[1].initial_carry_transform.m[1].z == 0.0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
        }
        else {
          this_ptr = &param_1[1].carry_hands[1].initial_carry_transform.m[2].x;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                    ((CMorph *)this_ptr,0,&param_1->model,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                    ((CMorph *)this_ptr,1,model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    ((CMorph *)this_ptr,1,(CKeyFramedModel *)param_1[1].carry_hands[0].blend_speed,0
                     ,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    ((CMorph *)this_ptr,1,(CKeyFramedModel *)param_1[1].carry_hands[0].blend_speed,0
                     ,2);
          core_morph_cpp_CMorph_render_FUN_004e0820
                    ((CMorph *)this_ptr,
                     param_1[1].carry_hands[1].initial_carry_transform.m[2].w / 4.0f);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                  (model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_004385a0
                  ((CClothList *)(param_1[1].model.part_data.texture_set_indices + 0x11),model_ptr);
      }
      if ((_DAT_01cd4318 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar1 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(param_1->model).motion_controller,&param_1->base);
        (*((param_1->base).vtable._ub)->renderTargetPoints)(&param_1->base);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iStack_c;
  }
  return 0;
}
