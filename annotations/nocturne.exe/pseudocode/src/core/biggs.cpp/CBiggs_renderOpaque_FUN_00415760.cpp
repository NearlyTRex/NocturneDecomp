// Name: core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760
// Address: 00415760
// Address Range: [[00415760, 0041586e]]
// Convention: __cdecl
// Signature: int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_00415760(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_00415760(CBiggs *this_ptr)

{
  CMorph *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  CKeyFramedModel *model_ptr;
  int iVar2;
  int part_index;
  CBoundingBox3D local_20;
  
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
  if (iVar1 != 0) {
    iVar2 = this_ptr->morphing;
    (this_ptr->base).base.was_rendered_opaque = 1;
    if (iVar2 == 0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20((CCharacter *)this_ptr);
    }
    else {
      this_ptr_00 = &this_ptr->morph;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                (this_ptr_00,0,&(this_ptr->base).base.model,0);
      part_index = 0;
      iVar2 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model)
      ;
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                (this_ptr_00,1,model_ptr,iVar2,part_index);
      core_morph_cpp_CMorph_render_FUN_004e0820(this_ptr_00,this_ptr->morph_timer / 4.0f);
    }
    if (_DAT_01cd4318 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iVar1;
}
