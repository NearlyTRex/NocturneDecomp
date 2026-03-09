// Name: core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0
// Address: 004189b0
// Address Range: [[004189b0, 00418abc]]
// Convention: __cdecl
// Signature: int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs *this_ptr)

#include "nocturne.h"

int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 != 0) {
    iVar2 = this_ptr->morphing;
    (this_ptr->base).base.was_rendered_opaque = 1;
    if (iVar2 == 0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0((CCharacter *)this_ptr);
    }
    else {
      this_ptr_00 = &this_ptr->morph;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600
                (this_ptr_00,0,&(this_ptr->base).base.model,0);
      part_index = 0;
      iVar2 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model)
      ;
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
                (this_ptr_00,1,model_ptr,iVar2,part_index);
      core_morph_cpp_CMorph_render_FUN_0052bae0(this_ptr_00,this_ptr->morph_timer / 4.0f);
    }
    if (INT_02f43978 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar1;
}
