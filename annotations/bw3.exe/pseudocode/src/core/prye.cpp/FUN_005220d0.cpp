// Name: core_prye.cpp_FUN_005220d0
// Address: 005220d0
// Address Range: [[005220d0, 00522875]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_005220d0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_prye_cpp_FUN_005220d0(CCharacter *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1134 [888];
  CDemonRenderer *pCVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  uint uVar10;
  byte auStack_32c [48];
  uint auStack_2fc [12];
  byte auStack_2cc [48];
  uint auStack_29c [12];
  byte auStack_26c [48];
  uint auStack_23c [12];
  uint auStack_20c [12];
  uint auStack_1dc [12];
  byte auStack_1ac [48];
  uint auStack_17c [12];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint auStack_100 [2];
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  uint uStack_e0;
  uint auStack_dc [5];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  uint uStack_a4;
  uint auStack_a0 [5];
  CVector3f CStack_8c;
  uint uStack_80;
  uint auStack_7c [8];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint auStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  byte *puStack_24;
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_FUN_0042e220(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)core_charactr_cpp_FUN_00433a60(param_1,6);
  if ((float)_DAT_005cd687 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&param_1->field_0x2628 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x2628 + 0x20);
    }
    if (*(int *)&param_1[2].field_0x708c != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1[2].field_0x708c + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x708c);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x2628);
      unkafter_prye_cpp_FUN_00524800(param_1);
      puVar4 = &uStack_a4;
      uStack_a4 = auStack_dc[2];
      auStack_a0[(uint)bVar6 * -2] = auStack_dc[(uint)bVar6 * -2 + 3];
      auStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_actor_cpp_FUN_00408b00(param_1,puVar4);
      pCVar8 = pCStack_18;
      pCVar9 = &CStack_14c;
      CStack_14c._0_4_ = CStack_c8._0_4_;
      *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_c8 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fStack_14 = (float)core_setcolid_cpp_FUN_0053cff0(g_CDemonSetPtr,pCVar8,pCVar9);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_FUN_004a2b70
                (0x01C73654,pCStack_18,&CStack_14c,1.0,1.0,
                 (CVector3f *)&g_CDemonSetPtr->field_0x14d128,fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    }
  }
  iVar2 = *(int *)&param_1->field_0x25b0;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  }
  iVar2 = *(int *)&param_1[2].field_0x708c;
  if ((((iVar2 == 0) || (iVar2 == *(int *)&param_1->field_0x25b0)) ||
      (iVar2 == *(int *)&param_1->field_0x2628)) ||
     (*(int *)(&param_1->field_0x2298 + _DAT_01ed3744 * 4) == 0)) goto LAB_00522382;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1[2].field_0x708c,g_CDiseaseClassInfo.name_hash);
  if ((iVar2 != 0) ||
     (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&param_1[2].field_0x708c,g_CBindEvilClassInfo.name_hash),
     iVar2 != 0)) {
    core_prye_cpp_FUN_0051f360(param_1,1);
  }
  (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0x10))
            (*(int *)&param_1[2].field_0x708c);
  if (*(int *)&param_1[2].field_0x708c == 0) {
switchD_00522306_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1[2].field_0x708c + 0x2e0)) {
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
      goto switchD_00522306_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
    case 0xc:
      uVar3 = 8;
      break;
    case 9:
    case 10:
      uVar3 = 0xe;
      break;
    case 0xd:
      uVar3 = 0x11;
      break;
    case 0xe:
      uVar3 = 0x12;
    }
  }
  fStack_14 = (float)core_charactr_cpp_FUN_00433a60(param_1,uVar3);
  bVar1 = (float)_DAT_005cd68f < fStack_14;
  if ((*(int *)(*(int *)&param_1[2].field_0x708c + 0x2e0) == 1) &&
     (*(int *)&param_1->field_0x2f00 == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)&param_1[2].field_0x708c + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)&param_1[2].field_0x708c + 0x154) + 0xf0))
              (*(int *)&param_1[2].field_0x708c);
  }
  core_prye_cpp_FUN_0051f360(param_1,0);
LAB_00522382:
  if ((*(int *)&param_1[2].field_0x6fc0 != 0) &&
     (*(int *)(&param_1->field_0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar10 = g_CGasMaskClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004db9e0((CInventory *)&param_1[2].field_0x6b50,"CGasMask");
    iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,uVar10);
    if (iStack_2c != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
      puStack_20 = &param_1->field_0xfd8;
      if (*(int *)&param_1[2].field_0x6fc0 == 2) {
        uStack_5c = 0xbe0fd3f6;
        uStack_54 = 0;
        uStack_58 = 0xc04507c8;
        uStack_50 = 0x3bc63091;
        puVar4 = auStack_7c + 0xe;
        auStack_44[0] = 0xbe0fd3f6;
        auStack_7c[(uint)bVar6 * -2 + 0xf] = auStack_7c[(uint)bVar6 * -2 + 9];
        auStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             auStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        uStack_4c = 0x3e9135db;
        uStack_48 = 0x3f09a30a;
        core_xform_cpp_FUN_00583940(auStack_2cc,auStack_7c + 0xb,puVar4);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_2cc,puStack_20 + _DAT_01ed36dc * 0x30)
        ;
        puVar4 = auStack_1dc;
      }
      else {
        puVar4 = &uStack_80;
        uStack_104 = 0x3f94bac7;
        auStack_100[1] = 0x3d488e0e;
        auStack_100[0] = 0x3ebc7410;
        uStack_10c = 0xbca5f882;
        uStack_80 = 0x3f94bac7;
        auStack_7c[(uint)bVar6 * -2] = auStack_100[(uint)bVar6 * -2];
        auStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             auStack_100[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        uStack_108 = 0x3e05d9a1;
        uStack_110 = 0x3f033b43;
        core_xform_cpp_FUN_00583940(auStack_32c,&uStack_110,puVar4);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_32c,puStack_20 + _DAT_01ed3714 * 0x30)
        ;
        puVar4 = auStack_2fc;
      }
      puVar5 = auStack_20c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00583b10(auStack_20c);
      CStack_128._0_4_ = CStack_8c._0_4_;
      *(uint *)((int)&CStack_128 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_128 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_xform_cpp_FUN_00584450(auStack_20c);
      pCVar9 = &CStack_f8;
      pCVar8 = &CStack_128;
      CStack_f8._0_4_ = CStack_134._0_4_;
      *(uint *)((int)&CStack_f8 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_134 + (uint)bVar6 * -8 + 4);
      pCVar7 = DAT_005f2afc;
      *(uint *)((int)&CStack_f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_134 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar7,pCVar8,pCVar9);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_2c + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
    }
  }
  if ((*(int *)&param_1[2].field_0x6fc4 != 0) &&
     (*(int *)(&param_1->field_0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar10 = g_CGogglesClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004db9e0((CInventory *)&param_1[2].field_0x6b50,"CGoggles");
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,uVar10);
    if (iStack_28 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
      puStack_24 = &param_1->field_0xfd8;
      if (*(int *)&param_1[2].field_0x6fc4 == 2) {
        uStack_38 = 0x3da9307b;
        uStack_30 = 0x3c518d91;
        uStack_34 = 0x404904ab;
        uStack_11c = 0x3c17ff3b;
        puVar4 = &uStack_e0;
        uStack_e0 = 0x3da9307b;
        auStack_dc[(uint)bVar6 * -2] = auStack_7c[(uint)bVar6 * -2 + 0x12];
        auStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             auStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        uStack_118 = 0x3eac59da;
        uStack_114 = 0x3e5903ea;
        core_xform_cpp_FUN_00583940(auStack_26c,&uStack_11c,puVar4);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_26c,puStack_24 + _DAT_01ed36dc * 0x30)
        ;
        puVar4 = auStack_23c;
      }
      else {
        puVar4 = auStack_7c + 5;
        auStack_a0[2] = 0x3ea30f8c;
        auStack_a0[4] = 0x3b9b6f1c;
        auStack_a0[3] = 0xbe7cc187;
        auStack_7c[3] = 0xbd9786f8;
        auStack_7c[5] = 0x3ea30f8c;
        auStack_7c[(uint)bVar6 * -2 + 6] = auStack_a0[(uint)bVar6 * -2 + 3];
        auStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             auStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        auStack_7c[4] = 0xbcb456b4;
        auStack_7c[2] = 0xbedac387;
        core_xform_cpp_FUN_00583940(auStack_1ac,auStack_7c + 2,puVar4);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1ac,puStack_24 + _DAT_01ed3710 * 0x30)
        ;
        puVar4 = auStack_29c;
      }
      puVar5 = auStack_17c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_00583b10(auStack_17c);
      CStack_ec._0_4_ = CStack_140._0_4_;
      *(uint *)((int)&CStack_ec + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_xform_cpp_FUN_00584450(auStack_17c);
      pCVar9 = &CStack_b0;
      pCVar8 = &CStack_ec;
      CStack_b0._0_4_ = CStack_bc._0_4_;
      *(uint *)((int)&CStack_b0 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_bc + (uint)bVar6 * -8 + 4);
      pCVar7 = DAT_005f2afc;
      *(uint *)((int)&CStack_b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar7,pCVar8,pCVar9);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_28 + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
    }
  }
  if (((*(int *)(&param_1->field_0x2298 + _DAT_01ed3744 * 4) == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar2 == 0
      )) && (0 < *(int *)&param_1->field_0x2f08)) {
    core_cloth_cpp_FUN_0043f9d0((CClothList *)&param_1->field_0x2f08);
  }
  return 1;
}
