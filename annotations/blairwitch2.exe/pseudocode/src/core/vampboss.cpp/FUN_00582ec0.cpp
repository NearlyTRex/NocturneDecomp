// Name: core_vampboss.cpp_FUN_00582ec0
// Address: 00582ec0
// Address Range: [[00582ec0, 0058307d]]
// Convention: unknown
// Signature: int core_vampboss_cpp_FUN_00582ec0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_vampboss_cpp_FUN_00582ec0(CCharacter *param_1)

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
  if (*(int *)&param_1->field_0x2568 != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_44;
  puVar3 = auStack_2c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iStack_14 = core_box_cpp_FUN_0041a840(auStack_2c);
  if (iStack_14 == 0) goto LAB_00582f9f;
  model_ptr = &param_1[8].field_0x310c;
  pCStack_c = (CKeyFramedModel *)&param_1[4].field_0xaf5c;
  if (*(int *)&param_1[0xb].field_0xbd1c == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
              ((CDeformableModelInstance *)&param_1->field_0x2b4,-1,0xffffffff,1,0);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0((CCloth *)pCStack_c,(CDeformableModelInstance *)0x0);
    model_ptr_00 = (CCloth *)model_ptr;
LAB_00582f62:
    core_cloth_cpp_CCloth_render_FUN_005b0fe0(model_ptr_00,(CDeformableModelInstance *)0x0);
  }
  else {
    model_ptr_00 = (CCloth *)&param_1[1].field_0x234c;
    pCStack_10 = (CDeformableModelInstance *)&param_1[1].field_0x98;
    if (*(int *)&param_1[0xb].field_0xbd1c == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                (pCStack_10,-1,0xffffffff,1,0);
      goto LAB_00582f62;
    }
    this_ptr = &param_1[0xb].field_0xbd20;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
              ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190((CMorph *)this_ptr,0,pCStack_c,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190((CMorph *)this_ptr,0,pCStack_c,0,2);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)model_ptr,0,3);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              ((CMorph *)this_ptr,0,(CKeyFramedModel *)model_ptr,0,4);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150((CMorph *)this_ptr,1,pCStack_10,0);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)model_ptr_00,0,1);
    core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
              ((CMorph *)this_ptr,1,(CKeyFramedModel *)model_ptr_00,0,2);
    core_morph_cpp_CMorph_render_FUN_005b76a0
              ((CMorph *)this_ptr,*(float *)&param_1[0xb].field_0xc94c);
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(param_1);
  if (_DAT_01d1cdc8 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar1 == 0) {
      core_motion_cpp_FUN_005042e0
                ((CMotionController *)&param_1->field_0x2b4,(CDemonActor *)param_1);
    }
  }
LAB_00582f9f:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return iStack_14;
}
