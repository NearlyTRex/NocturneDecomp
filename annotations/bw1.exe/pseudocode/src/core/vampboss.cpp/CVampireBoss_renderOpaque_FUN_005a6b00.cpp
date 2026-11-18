// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005a6b00
// Address: 005a6b00
// Address Range: [[005a6b00, 005a6cbd]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005a6b00(CVampireBoss *this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005a6b00(CVampireBoss *this_ptr)

{
  CCloth *model_ptr;
  CCloth *this_ptr_00;
  CDeformableModelInstance *model_ptr_00;
  CMorph *this_ptr_01;
  int iVar1;
  uint *puVar2;
  int unaff_EDI;
  uint *puVar3;
  byte bVar4;
  CCloth *this_ptr_02;
  uint auStack_3c [4];
  uint auStack_2c [2];
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_3c;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(&CStack_24,unaff_EDI);
  if (iStack_c == 0) goto LAB_005a6bdf;
  model_ptr = &this_ptr->skirt_cloth;
  this_ptr_00 = &this_ptr->cape_cloth;
  model_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              (model_ptr_00,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_00441800(this_ptr_00,(CDeformableModelInstance *)0x0);
    this_ptr_02 = model_ptr;
LAB_005a6ba2:
    core_cloth_cpp_CCloth_render_FUN_00441800(this_ptr_02,(CDeformableModelInstance *)0x0);
  }
  else {
    this_ptr_02 = &this_ptr->wing_cloth;
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (&this_ptr->model,-1,0xffffffff,1,0);
      goto LAB_005a6ba2;
    }
    this_ptr_01 = &this_ptr->morph;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290(this_ptr_01,0,model_ptr_00,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              (this_ptr_01,0,&this_ptr_00->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              (this_ptr_01,0,&this_ptr_00->model,0,2);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(this_ptr_01,0,&model_ptr->model,0,3)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(this_ptr_01,0,&model_ptr->model,0,4)
    ;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290(this_ptr_01,1,&this_ptr->model,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              (this_ptr_01,1,&this_ptr_02->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              (this_ptr_01,1,&this_ptr_02->model,0,2);
    core_morph_cpp_CMorph_render_FUN_005237e0(this_ptr_01,this_ptr->morph_t);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0((CCharacter *)this_ptr);
  if (g_RenderMotionDebug != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60
                      (g_CDemonRenderer_PTR_00612560);
    if (iVar1 == 0) {
      core_motion_cpp_CMotionController_render_FUN_005254b0
                (&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
    }
  }
LAB_005a6bdf:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iStack_c;
}
