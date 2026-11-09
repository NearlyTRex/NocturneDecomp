// Name: core_vampboss.cpp_FUN_005a6b00
// Address: 005a6b00
// Address Range: [[005a6b00, 005a6cbd]]
// Convention: unknown
// Signature: int core_vampboss_cpp_FUN_005a6b00(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_vampboss_cpp_FUN_005a6b00(CCharacter *param_1)

{
  byte *model_ptr;
  byte *this_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CCloth *model_ptr_00;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  CDeformableModelInstance *pCStack_10;
  CKeyFramedModel *pCStack_c;
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x24fc != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iStack_14 = core_box_cpp_FUN_004207b0(auStack_2c);
  if (iStack_14 == 0) goto LAB_005a6bdf;
  model_ptr = &param_1[10].field_0xaa4c;
  pCStack_c = (CKeyFramedModel *)&param_1[6].field_0x65c;
  if (*(int *)&param_1[0xf].field_0x8c6c == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              ((CDeformableModelInstance *)&param_1->field_0x158,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_00441800((CCloth *)pCStack_c,(CDeformableModelInstance *)0x0);
    model_ptr_00 = (CCloth *)model_ptr;
LAB_005a6ba2:
    core_cloth_cpp_CCloth_render_FUN_00441800(model_ptr_00,(CDeformableModelInstance *)0x0);
  }
  else {
    model_ptr_00 = (CCloth *)&param_1[1].field_0x243c;
    pCStack_10 = (CDeformableModelInstance *)&param_1[1].field_0x98;
    if (*(int *)&param_1[0xf].field_0x8c6c == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_005a6ba2;
    }
    this_ptr = &param_1[0xf].field_0x8c70;
    core_morph_cpp_FUN_00523290
              ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x158,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0((CMorph *)this_ptr,0,pCStack_c,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0((CMorph *)this_ptr,0,pCStack_c,0,2);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)model_ptr,0,3);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)model_ptr,0,4);
    core_morph_cpp_FUN_00523290((CMorph *)this_ptr,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)model_ptr_00,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)model_ptr_00,0,2);
    core_morph_cpp_CMorph_render_FUN_005237e0
              ((CMorph *)this_ptr,*(float *)&param_1[0xf].field_0x989c);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0(param_1);
  if (_DAT_01d39d34 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if (iVar1 == 0) {
      core_motion_cpp_FUN_005254b0
                ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
    }
  }
LAB_005a6bdf:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  return iStack_14;
}
