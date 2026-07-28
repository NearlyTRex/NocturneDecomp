// Name: core_vampboss.cpp_FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dc68]]
// Convention: unknown
// Signature: int core_vampboss_cpp_FUN_0054dac0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_vampboss_cpp_FUN_0054dac0(CCharacter *param_1)

{
  CCloth *pCVar1;
  float *this_ptr;
  float fVar2;
  CBoundingBox3D *this_ptr_00;
  int iVar3;
  CCloth *this_ptr_01;
  CBoundingBox3D local_2c;
  int iStack_14;
  CDeformableModelInstance *pCStack_10;
  CCloth *pCStack_c;
  
  if (param_1->render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
  this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_2c);
  iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iStack_14 == 0) goto LAB_0054db8e;
  pCStack_c = (CCloth *)&param_1[0xb].model.bone_transform.bone_world_matrices[0x42].m[0].x;
  fVar2 = param_1[0x10].model.bone_transform.bone_world_matrices[0x2f].m[0].y;
  pCVar1 = (CCloth *)(param_1[6].model.bone_transform.bone_world_matrices + 0x55);
  if (fVar2 == 0.0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (&param_1->model,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_00437db0(pCVar1,(CDeformableModelInstance *)0x0);
    this_ptr_01 = pCStack_c;
LAB_0054db50:
    core_cloth_cpp_CCloth_render_FUN_00437db0(this_ptr_01,(CDeformableModelInstance *)0x0);
  }
  else {
    this_ptr_01 = (CCloth *)(param_1[1].model.part_data.texture_set_indices + 0x11);
    pCStack_10 = (CDeformableModelInstance *)(param_1[1].base.create_event + 0x20);
    if (fVar2 == 2.8026e-45) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_0054db50;
    }
    this_ptr = &param_1[0x10].model.bone_transform.bone_world_matrices[0x2f].m[0].z;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
              ((CMorph *)this_ptr,0,&param_1->model,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)pCVar1,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)pCVar1,0,2);
    pCVar1 = pCStack_c;
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,0,&pCStack_c->model,0,3);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,0,&pCVar1->model,0,4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340((CMorph *)this_ptr,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)this_ptr_01,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)this_ptr_01,0,2);
    core_morph_cpp_CMorph_render_FUN_004e0820
              ((CMorph *)this_ptr,param_1[0x10].carry_hands[0].initial_carry_transform.m[2].y);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(param_1);
  if (_DAT_01cd4318 != 0) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_render_FUN_004e22b0
                (&(param_1->model).motion_controller,&param_1->base);
    }
  }
LAB_0054db8e:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
  return iStack_14;
}
