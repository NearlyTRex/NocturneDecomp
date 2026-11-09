// Name: core_doc.cpp_FUN_00471af0
// Address: 00471af0
// Address Range: [[00471af0, 0047221e]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00471af0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_00471af0(CCharacter *param_1)

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
  CMatrix3x4f aCStack_23c [48];
  CMatrix3x4f aCStack_20c [48];
  CMatrix3x4f aCStack_1dc [48];
  CMatrix3x4f aCStack_1ac [48];
  uint auStack_17c [12];
  CVector3f CStack_14c;
  CVector3f CStack_140;
  uint uStack_134;
  uint auStack_130 [2];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  uint uStack_f8;
  uint auStack_f4 [11];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  int iStack_2c;
  int iStack_28;
  byte *puStack_24;
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_FUN_0042f240(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = (float)core_charactr_cpp_FUN_00434590(param_1,6);
  if ((float)_DAT_005da2a4 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&param_1->field_0x2628 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1->field_0x2628 + 0x20);
    }
    if (*(int *)&param_1[2].field_0x7c64 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&param_1[2].field_0x7c64 + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x7c64);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x2628);
      core_doc_cpp_FUN_004742a0(param_1);
      puVar4 = &uStack_f8;
      uStack_f8 = auStack_f4[8];
      auStack_f4[(uint)bVar6 * -2] = auStack_f4[(uint)bVar6 * -2 + 9];
      auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_actor_cpp_FUN_00408ac0(param_1,puVar4);
      pCVar8 = pCStack_18;
      pCVar9 = &CStack_11c;
      CStack_11c._0_4_ = CStack_140._0_4_;
      *(uint *)((int)&CStack_11c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_140 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fStack_14 = (float)core_setcolid_cpp_FUN_00557630(g_CDemonSetPtr,pCVar8,pCVar9);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_FUN_004b6140
                (0x01C57074,pCStack_18,&CStack_11c,1.0,1.0,
                 (CVector3f *)&g_CDemonSetPtr->field_0x14d128,fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    }
  }
  iVar2 = *(int *)&param_1[2].field_0x7c64;
  if ((((iVar2 == 0) || (iVar2 == *(int *)&param_1->field_0x25b0)) ||
      (iVar2 == *(int *)&param_1->field_0x2628)) ||
     (*(int *)(&param_1->field_0x2298 + _DAT_01b6886c * 4) == 0)) goto LAB_00471d62;
  (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  if (*(int *)&param_1[2].field_0x7c64 == 0) {
switchD_00471ce6_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1[2].field_0x7c64 + 0x2e0)) {
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
      goto switchD_00471ce6_caseD_3;
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
  bVar1 = (float)_DAT_005da2ac < fStack_14;
  if ((*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x2e0) == 1) &&
     (*(int *)&param_1->field_0x2c98 == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x154) + 0xf0))
              (*(int *)&param_1[2].field_0x7c64);
  }
  core_doc_cpp_FUN_0046f610(param_1,0);
LAB_00471d62:
  if ((*(int *)&param_1[2].field_0x7bb4 != 0) &&
     (*(int *)(&param_1->field_0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar10 = g_CGasMaskClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004f8c90((CInventory *)&param_1[2].field_0x7748,"CGasMask");
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,uVar10);
    if (iStack_28 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
      puStack_20 = &param_1->field_0xfd8;
      if (*(int *)&param_1[2].field_0x7bb4 == 2) {
        uStack_c8 = 0xbe0fd3f6;
        uStack_c0 = 0;
        uStack_c4 = 0xc04507c8;
        CStack_bc._0_4_ = 0x3bc63091;
        pCVar9 = &CStack_98;
        CStack_98._0_4_ = 0xbe0fd3f6;
        *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + 4) = auStack_f4[(uint)bVar6 * -2 + 0xc]
        ;
        *(uint *)((int)&CStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        CStack_bc._4_4_ = 0x3e9135db;
        CStack_bc._8_4_ = 0x3f09a30a;
        core_xform_cpp_FUN_005b5760(aCStack_20c,&CStack_bc,pCVar9);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_20c,puStack_20 + _DAT_01b68814 * 0x30)
        ;
        puVar4 = (uint *)&stack0xfffffd64;
      }
      else {
        pCVar9 = &CStack_a4;
        auStack_f4[5] = 0x3f94bac7;
        auStack_f4[7] = 0x3d488e0e;
        auStack_f4[6] = 0x3ebc7410;
        CStack_128._4_4_ = 0xbca5f882;
        CStack_a4._0_4_ = 0x3f94bac7;
        *(uint *)((int)&CStack_a4 + (uint)bVar6 * -8 + 4) = auStack_f4[(uint)bVar6 * -2 + 6];
        *(uint *)((int)&CStack_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        CStack_128._8_4_ = 0x3e05d9a1;
        CStack_128._0_4_ = 0x3f033b43;
        core_xform_cpp_FUN_005b5760(aCStack_1dc,&CStack_128,pCVar9);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_1dc,puStack_20 + _DAT_01b6884c * 0x30)
        ;
        puVar4 = (uint *)&stack0xfffffcd4;
      }
      puVar5 = (uint *)&stack0xfffffd04;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5930(&stack0xfffffd04);
      CStack_8c._0_4_ = CStack_74._0_4_;
      *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_xform_cpp_FUN_005b6270(&stack0xfffffd04);
      pCVar9 = &CStack_50;
      pCVar8 = &CStack_8c;
      CStack_50._0_4_ = CStack_80._0_4_;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + 4);
      pCVar7 = DAT_00612560;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar7,pCVar8,pCVar9);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(iStack_28 + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    }
  }
  if ((*(int *)&param_1[2].field_0x7bb8 != 0) &&
     (*(int *)(&param_1->field_0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar10 = g_CGogglesClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004f8c90((CInventory *)&param_1[2].field_0x7748,"CGoggles");
    iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,uVar10);
    if (iStack_2c != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
      puStack_24 = &param_1->field_0xfd8;
      if (*(int *)&param_1[2].field_0x7bb8 == 2) {
        uStack_134 = 0x3da9307b;
        auStack_130[1] = 0x3c518d91;
        auStack_130[0] = 0x404904ab;
        CStack_68._0_4_ = 0x3c17ff3b;
        pCVar9 = &CStack_14c;
        CStack_14c._0_4_ = 0x3da9307b;
        *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + 4) = auStack_130[(uint)bVar6 * -2];
        *(uint *)((int)&CStack_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             auStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        CStack_68._4_4_ = 0x3eac59da;
        CStack_68._8_4_ = 0x3e5903ea;
        core_xform_cpp_FUN_005b5760(aCStack_23c,&CStack_68,pCVar9);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_23c,puStack_24 + _DAT_01b68814 * 0x30)
        ;
        puVar4 = (uint *)&stack0xfffffd34;
      }
      else {
        pCVar9 = &CStack_38;
        auStack_f4[2] = 0xbe59e27a;
        auStack_f4[4] = 0xbf8480c7;
        auStack_f4[3] = 0x3eeac8e7;
        CStack_5c._4_4_ = 0xbe996873;
        CStack_38._0_4_ = 0xbe59e27a;
        *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + 4) = auStack_f4[(uint)bVar6 * -2 + 3];
        *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        CStack_5c._8_4_ = 0xbce677ce;
        CStack_5c._0_4_ = 0x3e87a398;
        core_xform_cpp_FUN_005b5760(aCStack_1ac,&CStack_5c,pCVar9);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_1ac,puStack_24 + _DAT_01b6884c * 0x30)
        ;
        puVar4 = auStack_17c;
      }
      puVar5 = (uint *)&stack0xfffffd94;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5930(&stack0xfffffd94);
      CStack_110._0_4_ = CStack_b0._0_4_;
      *(uint *)((int)&CStack_110 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_b0 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_110 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_xform_cpp_FUN_005b6270(&stack0xfffffd94);
      pCVar9 = &CStack_104;
      pCVar8 = &CStack_110;
      CStack_104._0_4_ = CStack_44._0_4_;
      *(uint *)((int)&CStack_104 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_44 + (uint)bVar6 * -8 + 4);
      pCVar7 = DAT_00612560;
      *(uint *)((int)&CStack_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar7,pCVar8,pCVar9);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(iStack_2c + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    }
  }
  if (((*(int *)(&param_1->field_0x2298 + _DAT_01b6886c * 4) == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )) && (0 < *(int *)&param_1->field_0x2ca0)) {
    core_cloth_cpp_FUN_00441d70((CClothList *)&param_1->field_0x2ca0);
  }
  return 1;
}
