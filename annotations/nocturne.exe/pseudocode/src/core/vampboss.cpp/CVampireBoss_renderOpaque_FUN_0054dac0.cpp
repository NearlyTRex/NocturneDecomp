// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dc68]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_0054dac0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_0054dac0(CVampireBoss *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_2c);
  iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
  if (iStack_14 == 0) goto LAB_0054db8e;
  pCStack_c = &this_ptr->skirt_cloth;
  pCVar1 = &this_ptr->cape_cloth;
  model_ptr = &(this_ptr->base).base.model;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (model_ptr,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_00437db0(pCVar1,(CDeformableModelInstance *)0x0);
    this_ptr_02 = pCStack_c;
LAB_0054db50:
    core_cloth_cpp_CCloth_render_FUN_00437db0(this_ptr_02,(CDeformableModelInstance *)0x0);
  }
  else {
    this_ptr_02 = &this_ptr->wing_cloth;
    pCStack_10 = &this_ptr->model;
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_0054db50;
    }
    this_ptr_00 = &this_ptr->morph;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(this_ptr_00,0,model_ptr,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(this_ptr_00,0,&pCVar1->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(this_ptr_00,0,&pCVar1->model,0,2);
    pCVar1 = pCStack_c;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(this_ptr_00,0,&pCStack_c->model,0,3)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(this_ptr_00,0,&pCVar1->model,0,4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(this_ptr_00,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              (this_ptr_00,1,&this_ptr_02->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              (this_ptr_00,1,&this_ptr_02->model,0,2);
    core_morph_cpp_CMorph_render_FUN_004e0820(this_ptr_00,this_ptr->morph_t);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0((CCharacter *)this_ptr);
  if (_DAT_01cd4318 != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                      (g_CDemonRenderer_PTR_005ae704);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_render_FUN_004e22b0
                (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
    }
  }
LAB_0054db8e:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iStack_14;
}
