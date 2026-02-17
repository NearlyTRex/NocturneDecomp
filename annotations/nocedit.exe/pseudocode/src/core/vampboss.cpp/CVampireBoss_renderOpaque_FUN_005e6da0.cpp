// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0
// Address: 005e6da0
// Address Range: [[005e6da0, 005e6f46]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss *this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss *this_ptr)

{
  CCloth *pCVar1;
  CDeformableModelInstance *model_ptr;
  CMorph *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar2;
  CCloth *this_ptr_02;
  CBoundingBox3D local_2c;
  int iStack_14;
  CDeformableModelInstance *pCStack_10;
  CCloth *pCStack_c;
  
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_2c);
  iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iStack_14 == 0) goto LAB_005e6e6c;
  pCStack_c = &this_ptr->skirt_cloth;
  pCVar1 = &this_ptr->cape_cloth;
  model_ptr = &(this_ptr->base).base.model;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (model_ptr,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(pCVar1,0);
    this_ptr_02 = pCStack_c;
LAB_005e6e2e:
    core_cloth_cpp_CCloth_render_FUN_0043bae0(this_ptr_02,0);
  }
  else {
    this_ptr_02 = &this_ptr->wing_cloth;
    pCStack_10 = &this_ptr->model;
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_005e6e2e;
    }
    this_ptr_00 = &this_ptr->morph;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600(this_ptr_00,0,model_ptr,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640(this_ptr_00,0,&pCVar1->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640(this_ptr_00,0,&pCVar1->model,0,2);
    pCVar1 = pCStack_c;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640(this_ptr_00,0,&pCStack_c->model,0,3)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640(this_ptr_00,0,&pCVar1->model,0,4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600(this_ptr_00,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
              (this_ptr_00,1,&this_ptr_02->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
              (this_ptr_00,1,&this_ptr_02->model,0,2);
    core_morph_cpp_CMorph_render_FUN_0052bae0(this_ptr_00,this_ptr->morph_t);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420((CCharacter *)this_ptr);
  if (DAT_02f43978 != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_render_FUN_0052e700
                (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
    }
  }
LAB_005e6e6c:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iStack_14;
}
