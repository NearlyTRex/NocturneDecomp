// Name: core_stranger.cpp_FUN_0056b770
// Address: 0056b770
// Address Range: [[0056b770, 0056bc71]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0056b770(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_stranger_cpp_FUN_0056b770(CStranger *param_1)

{
  bool bVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int aiStackY_10b4 [948];
  byte *puVar8;
  CVector3f *pCVar9;
  int *piVar10;
  byte auStack_18c [48];
  uint auStack_15c [12];
  uint auStack_12c [12];
  byte auStack_fc [48];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  uint uStack_b4;
  int aiStack_b0 [2];
  CVector3f CStack_a8;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  int aiStack_8c [5];
  CVector3f CStack_78;
  CVector3f CStack_6c;
  uint uStack_60;
  int aiStack_5c [2];
  CVector3f CStack_54;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int aiStack_38 [6];
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = core_charactr_cpp_FUN_004254b0(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  fStack_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,6);
  if ((float)_DAT_005ebc45 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&param_1->field_0x2698 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x2698 + 0x20);
    }
    if (*(int *)&param_1->field_0x25698 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x25698 + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x25698);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x2698);
      core_stranger_cpp_FUN_0056da90(param_1);
      puVar5 = &uStack_90;
      uStack_90 = uStack_b4;
      aiStack_8c[(uint)bVar7 * -2] = aiStack_b0[(uint)bVar7 * -2];
      aiStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           aiStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_FUN_00408cf0(param_1,puVar5);
      pCVar2 = pCStack_18;
      pCVar9 = &CStack_6c;
      CStack_6c._0_4_ = CStack_cc._0_4_;
      *(uint *)((int)&CStack_6c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_6c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = (float)core_setcolid_cpp_FUN_00536210(g_CDemonSetPtr,pCVar2,pCVar9);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_FUN_0049d840
                (0x01C3DEB4,pCStack_18,&CStack_6c,1.0,1.0,
                 (CVector3f *)&g_CDemonSetPtr->field_0x14d128,fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  iVar3 = *(int *)&param_1->field_0x25698;
  if ((((iVar3 == 0) || (iVar3 == *(int *)&param_1->field_0x2620)) ||
      (iVar3 == *(int *)&param_1->field_0x2698)) ||
     (*(int *)(&param_1->field_0x23f4 + _DAT_0264be88 * 4) == 0)) goto LAB_0056ba07;
  (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x18))(iVar3);
  if (*(int *)&param_1->field_0x25698 == 0) {
switchD_0056b94f_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1->field_0x25698 + 0x43c)) {
    case 0:
    case 5:
      uVar4 = 2;
      break;
    case 1:
      uVar4 = 4;
      break;
    case 2:
      uVar4 = 5;
      break;
    default:
      goto switchD_0056b94f_caseD_3;
    case 4:
      uVar4 = 7;
      break;
    case 7:
      uVar4 = 8;
    }
  }
  fStack_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,uVar4);
  bVar1 = (float)_DAT_005ebc4d < fStack_14;
  if ((*(int *)(*(int *)&param_1->field_0x25698 + 0x43c) == 1) &&
     (*(int *)&param_1->field_0x2d04 == 8)) {
    bVar1 = true;
LAB_0056b99f:
    (**(code **)(*(int *)(*(int *)&param_1->field_0x25698 + 0x2b0) + 0xf8))
              (*(int *)&param_1->field_0x25698);
  }
  else if (bVar1) goto LAB_0056b99f;
  if (*(int *)(*(int *)&param_1->field_0x25698 + 0x43c) == 0) {
    core_stranger_cpp_FUN_005683d0(param_1,1);
    (**(code **)(*(int *)(*(int *)&param_1->field_0x25698 + 0x2b0) + 0x18))
              (*(int *)&param_1->field_0x25698);
    if (bVar1) {
      (**(code **)(*(int *)(*(int *)&param_1->field_0x25698 + 0x2b0) + 0xf8))
                (*(int *)&param_1->field_0x25698);
    }
  }
  core_stranger_cpp_FUN_005683d0(param_1,0);
LAB_0056ba07:
  if (((*(int *)&param_1->field_0x255e8 != 0) &&
      (*(int *)(&param_1->field_0x23f4 + _DAT_0264be88 * 4) != 0)) &&
     (aiStack_38[5] = *(int *)&param_1->field_0x247d4, aiStack_38[5] != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    puStack_20 = &param_1->field_0x1134;
    if (*(int *)&param_1->field_0x255e8 == 2) {
      puVar5 = &uStack_60;
      aiStack_38[2] = 0xbe0fd3f6;
      aiStack_38[4] = 0;
      aiStack_38[3] = 0xc04507c8;
      uStack_44 = 0x3e9135db;
      uStack_48 = 0x3bc63091;
      puVar6 = &uStack_48;
      puVar8 = auStack_18c;
      uStack_40 = 0x3f09a30a;
      uStack_60 = 0xbe0fd3f6;
      aiStack_5c[(uint)bVar7 * -2] = aiStack_38[(uint)bVar7 * -2 + 3];
      aiStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           aiStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_xform_cpp_FUN_00591c10(puVar8,puVar6,puVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_18c,puStack_20 + _DAT_0264be30 * 0x30);
      puVar5 = (uint *)&stack0xfffffe44;
    }
    else {
      uStack_3c = 0x3f94bac7;
      aiStack_38[1] = 0x3d488e0e;
      piVar10 = aiStack_8c + 2;
      aiStack_38[0] = 0x3ebc7410;
      aiStack_8c[2] = 0x3f94bac7;
      aiStack_8c[(uint)bVar7 * -2 + 3] = aiStack_38[(uint)bVar7 * -2];
      aiStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           aiStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      uStack_94 = 0x3e05d9a1;
      uStack_9c = 0x3f033b43;
      uStack_98 = 0xbca5f882;
      core_xform_cpp_FUN_00591c10(auStack_fc,&uStack_9c,piVar10);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_fc,puStack_20 + _DAT_0264be68 * 0x30);
      puVar5 = auStack_12c;
    }
    puVar6 = auStack_15c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_FUN_00591de0(auStack_15c);
    CStack_c0._0_4_ = CStack_54._0_4_;
    *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_xform_cpp_FUN_00592720(auStack_15c);
    pCVar9 = &CStack_78;
    CStack_78._0_4_ = CStack_a8._0_4_;
    *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&CStack_c0,pCVar9);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(aiStack_38[5] + 0x2b4),0.0,-1);
    engine_matrix_c_pop_FUN_0046b4a0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  }
  if (((*(int *)(&param_1->field_0x23f4 + _DAT_0264be88 * 4) == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0
      )) && (0 < *(int *)&param_1->field_0x2d0c)) {
    core_cloth_cpp_FUN_005b1550((CClothList *)&param_1->field_0x2d0c);
  }
  return 1;
}
