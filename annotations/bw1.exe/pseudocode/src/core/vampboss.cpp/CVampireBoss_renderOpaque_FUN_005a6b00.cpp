// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005a6b00
// Address: 005a6b00
// Address Range: [[005a6b00, 005a6cbd]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005a6b00(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005a6b00(CVampireBoss *this_ptr)

{
  byte *model_ptr;
  CDeformableModelInstance *model_ptr_00;
  byte *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CCloth *model_ptr_01;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  CDeformableModelInstance *pCStack_10;
  CKeyFramedModel *pCStack_c;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iStack_14 = core_box_cpp_FUN_004207b0(auStack_2c);
  if (iStack_14 == 0) goto LAB_005a6bdf;
  model_ptr = &this_ptr->field_0x83c6c;
  pCStack_c = (CKeyFramedModel *)&this_ptr->field_0x4913c;
  model_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              (model_ptr_00,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_00441800((CCloth *)pCStack_c,(CDeformableModelInstance *)0x0);
    model_ptr_01 = (CCloth *)model_ptr;
LAB_005a6ba2:
    core_cloth_cpp_CCloth_render_FUN_00441800(model_ptr_01,(CDeformableModelInstance *)0x0);
  }
  else {
    model_ptr_01 = (CCloth *)&this_ptr->field_0xe60c;
    pCStack_10 = &this_ptr->model;
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_005a6ba2;
    }
    this_ptr_00 = &this_ptr->field_0xbe7a0;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
              ((CMorph *)this_ptr_00,0,model_ptr_00,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,0,pCStack_c,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,0,pCStack_c,0,2);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,0,(CKeyFramedModel *)model_ptr,0,3);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,0,(CKeyFramedModel *)model_ptr,0,4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
              ((CMorph *)this_ptr_00,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,1,(CKeyFramedModel *)model_ptr_01,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr_00,1,(CKeyFramedModel *)model_ptr_01,0,2);
    core_morph_cpp_CMorph_render_FUN_005237e0((CMorph *)this_ptr_00,this_ptr->morph_t);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0((CCharacter *)this_ptr);
  if (_DAT_01d39d34 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if (iVar1 == 0) {
      core_motion_cpp_FUN_005254b0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
    }
  }
LAB_005a6bdf:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iStack_14;
}
