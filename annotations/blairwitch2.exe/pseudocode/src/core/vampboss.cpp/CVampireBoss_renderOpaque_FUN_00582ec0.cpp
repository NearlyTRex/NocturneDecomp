// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_00582ec0
// Address: 00582ec0
// Address Range: [[00582ec0, 0058307d]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_00582ec0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_00582ec0(CVampireBoss *this_ptr)

{
  CCloth *model_ptr;
  CDeformableModelInstance *model_ptr_00;
  CMorph *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CCloth *this_ptr_01;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  CDeformableModelInstance *pCStack_10;
  CCloth *pCStack_c;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iStack_14 = core_box_cpp_FUN_0041a840(auStack_2c);
  if (iStack_14 == 0) goto LAB_00582f9f;
  model_ptr = &this_ptr->skirt_cloth;
  pCStack_c = &this_ptr->cape_cloth;
  model_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
              (model_ptr_00,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0(pCStack_c,(CDeformableModelInstance *)0x0);
    this_ptr_01 = model_ptr;
LAB_00582f62:
    core_cloth_cpp_CCloth_render_FUN_005b0fe0(this_ptr_01,(CDeformableModelInstance *)0x0);
  }
  else {
    this_ptr_01 = &this_ptr->wing_cloth;
    pCStack_10 = &this_ptr->model;
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_00582f62;
    }
    this_ptr_00 = &this_ptr->morph;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150(this_ptr_00,0,model_ptr_00,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(this_ptr_00,0,&pCStack_c->model,0,1)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(this_ptr_00,0,&pCStack_c->model,0,2)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(this_ptr_00,0,&model_ptr->model,0,3)
    ;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(this_ptr_00,0,&model_ptr->model,0,4)
    ;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150(this_ptr_00,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              (this_ptr_00,1,&this_ptr_01->model,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              (this_ptr_00,1,&this_ptr_01->model,0,2);
    core_morph_cpp_CMorph_render_FUN_005b76a0(this_ptr_00,this_ptr->morph_t);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0((CCharacter *)this_ptr);
  if (_DAT_01d1cdc8 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar1 == 0) {
      core_motion_cpp_FUN_005042e0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
    }
  }
LAB_00582f9f:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return iStack_14;
}
