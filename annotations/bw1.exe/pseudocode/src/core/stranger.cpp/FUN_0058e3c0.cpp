// Name: core_stranger.cpp_FUN_0058e3c0
// Address: 0058e3c0
// Address Range: [[0058e3c0, 0058e8cb]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0058e3c0(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_stranger_cpp_FUN_0058e3c0(CStranger *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_10b4 [948];
  CMatrix3x4f *output_matrix;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CMatrix3x4f aCStack_18c [48];
  uint auStack_15c [12];
  uint auStack_12c [12];
  CMatrix3x4f aCStack_fc [48];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  uint uStack_b4;
  uint auStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  uint uStack_90;
  uint auStack_8c [2];
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  uint uStack_3c;
  int aiStack_38 [6];
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_FUN_0042f240((CCharacter *)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)core_charactr_cpp_FUN_00434590(param_1,6);
  if ((float)_DAT_005f6eb9 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&param_1->field_0x2628 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x2628 + 0x20);
    }
    if (*(int *)&param_1->field_0x20004 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x20004 + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x20004);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x2628);
      core_stranger_cpp_FUN_005906e0(param_1);
      puVar4 = &uStack_90;
      uStack_90 = uStack_b4;
      auStack_8c[(uint)bVar6 * -2] = auStack_b0[(uint)bVar6 * -2];
      auStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408ac0(param_1,puVar4);
      pCVar7 = pCStack_18;
      pCVar8 = &CStack_6c;
      CStack_6c._0_4_ = CStack_cc._0_4_;
      *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fStack_14 = (float)core_setcolid_cpp_FUN_00557630(g_CDemonSetPtr,pCVar7,pCVar8);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_FUN_004b6140
                (0x01C57074,pCStack_18,&CStack_6c,1.0,1.0,
                 (CVector3f *)&g_CDemonSetPtr->field_0x14d128,fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    }
  }
  iVar2 = *(int *)&param_1->field_0x20004;
  if ((((iVar2 == 0) || (iVar2 == *(int *)&param_1->field_0x25b0)) ||
      (iVar2 == *(int *)&param_1->field_0x2628)) ||
     (*(int *)(&param_1->field_0x2298 + _DAT_02c83658 * 4) == 0)) goto LAB_0058e657;
  (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  if (*(int *)&param_1->field_0x20004 == 0) {
switchD_0058e59f_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1->field_0x20004 + 0x2e0)) {
    case 0:
    case 5:
      uVar3 = 2;
      break;
    case 1:
      uVar3 = 4;
      break;
    case 2:
      uVar3 = 5;
      break;
    default:
      goto switchD_0058e59f_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
      uVar3 = 8;
      break;
    case 9:
    case 10:
      uVar3 = 0xe;
    }
  }
  fStack_14 = (float)core_charactr_cpp_FUN_00434590(param_1,uVar3);
  bVar1 = (float)_DAT_005f6ec1 < fStack_14;
  if ((*(int *)(*(int *)&param_1->field_0x20004 + 0x2e0) == 1) &&
     (*(int *)&param_1->field_0x2c98 == 8)) {
    bVar1 = true;
LAB_0058e5ef:
    (**(code **)(*(int *)(*(int *)&param_1->field_0x20004 + 0x154) + 0xf0))
              (*(int *)&param_1->field_0x20004);
  }
  else if (bVar1) goto LAB_0058e5ef;
  if (*(int *)(*(int *)&param_1->field_0x20004 + 0x2e0) == 0) {
    core_stranger_cpp_FUN_0058aeb0(param_1,1);
    (**(code **)(*(int *)(*(int *)&param_1->field_0x20004 + 0x154) + 0x10))
              (*(int *)&param_1->field_0x20004);
    if (bVar1) {
      (**(code **)(*(int *)(*(int *)&param_1->field_0x20004 + 0x154) + 0xf0))
                (*(int *)&param_1->field_0x20004);
    }
  }
  core_stranger_cpp_FUN_0058aeb0(param_1,0);
LAB_0058e657:
  if (((*(int *)&param_1->field_0x1ff54 != 0) &&
      (*(int *)(&param_1->field_0x2298 + _DAT_02c83658 * 4) != 0)) &&
     (aiStack_38[5] = *(int *)&param_1->field_0x1ff44, aiStack_38[5] != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    puStack_20 = &param_1->field_0xfd8;
    if (*(int *)&param_1->field_0x1ff54 == 2) {
      pCVar8 = &CStack_60;
      aiStack_38[2] = 0xbe0fd3f6;
      aiStack_38[4] = 0;
      aiStack_38[3] = 0xc04507c8;
      CStack_48._4_4_ = 0x3e9135db;
      CStack_48._0_4_ = 0x3bc63091;
      pCVar7 = &CStack_48;
      output_matrix = aCStack_18c;
      CStack_48._8_4_ = 0x3f09a30a;
      CStack_60._0_4_ = 0xbe0fd3f6;
      *(int *)((int)&CStack_60 + (uint)bVar6 * -8 + 4) = aiStack_38[(uint)bVar6 * -2 + 3];
      *(int *)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_xform_cpp_FUN_005b5760(output_matrix,pCVar7,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_18c,puStack_20 + _DAT_02c83600 * 0x30);
      puVar4 = (uint *)&stack0xfffffe44;
    }
    else {
      uStack_3c = 0x3f94bac7;
      aiStack_38[1] = 0x3d488e0e;
      pCVar8 = &CStack_84;
      aiStack_38[0] = 0x3ebc7410;
      CStack_84._0_4_ = 0x3f94bac7;
      *(int *)((int)&CStack_84 + (uint)bVar6 * -8 + 4) = aiStack_38[(uint)bVar6 * -2];
      *(int *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      CStack_9c._8_4_ = 0x3e05d9a1;
      CStack_9c._0_4_ = 0x3f033b43;
      CStack_9c._4_4_ = 0xbca5f882;
      core_xform_cpp_FUN_005b5760(aCStack_fc,&CStack_9c,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_fc,puStack_20 + _DAT_02c83638 * 0x30);
      puVar4 = auStack_12c;
    }
    puVar5 = auStack_15c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5930(auStack_15c);
    CStack_c0._0_4_ = CStack_54._0_4_;
    *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_xform_cpp_FUN_005b6270(auStack_15c);
    pCVar8 = &CStack_78;
    CStack_78._0_4_ = CStack_a8._0_4_;
    *(uint *)((int)&CStack_78 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&CStack_c0,pCVar8);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)(aiStack_38[5] + 0x158),0.0,-1);
    engine_matrix_c_pop_FUN_004839a0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  }
  if (((*(int *)(&param_1->field_0x2298 + _DAT_02c83658 * 4) == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )) && (0 < *(int *)&param_1->field_0x2ca0)) {
    core_cloth_cpp_FUN_00441d70((CClothList *)&param_1->field_0x2ca0);
  }
  return 1;
}
