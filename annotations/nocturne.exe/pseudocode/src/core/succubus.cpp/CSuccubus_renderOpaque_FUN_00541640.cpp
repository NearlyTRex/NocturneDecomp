// Name: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640
// Address: 00541640
// Address Range: [[00541640, 005417bb]]
// Convention: __cdecl
// Signature: int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00541640(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00541640(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  CMorph *this_ptr_00;
  int iVar1;
  CBoundingBox3D *this_ptr_01;
  CBoundingBox3D local_24;
  int iStack_c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_24);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    if (iStack_c != 0) {
      model_ptr = &this_ptr->hotdemon_model;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iVar1 == 0) {
        if (this_ptr->morph_started == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20((CCharacter *)this_ptr);
        }
        else {
          this_ptr_00 = &this_ptr->morph;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                    (this_ptr_00,0,&(this_ptr->base).base.model,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(this_ptr_00,1,model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    (this_ptr_00,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    (this_ptr_00,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0,2);
          core_morph_cpp_CMorph_render_FUN_004e0820
                    (this_ptr_00,this_ptr->morph_timer / 4.0f);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                  (model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_004385a0(&this_ptr->hotdemon_cloth_list,model_ptr);
      }
      if ((_DAT_01cd4318 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar1 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return iStack_c;
  }
  return 0;
}
