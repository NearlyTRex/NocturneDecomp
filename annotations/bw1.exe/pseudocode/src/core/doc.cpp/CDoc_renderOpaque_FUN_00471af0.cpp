// Name: core_doc.cpp_CDoc_renderOpaque_FUN_00471af0
// Address: 00471af0
// Address Range: [[00471af0, 0047221e]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_00471af0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_00471af0(CDoc *this_ptr)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1134 [888];
  CDemonRenderer *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  uint uVar9;
  CMatrix3x4f CStack_23c;
  CMatrix3x4f CStack_20c;
  CMatrix3x4f CStack_1dc;
  CMatrix3x4f CStack_1ac;
  uint auStack_17c [12];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [11];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [5];
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  int iStack_2c;
  int iStack_28;
  byte *puStack_24;
  byte *puStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005da2a4 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&this_ptr->field_0x2628 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&this_ptr->field_0x2628 + 0x20);
    }
    if (*(int *)&this_ptr->field_0x20004 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&this_ptr->field_0x20004 + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x20004);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2628);
      core_doc_cpp_FUN_004742a0(this_ptr);
      puVar3 = &uStack_f8;
      uStack_f8 = afStack_f4[8];
      afStack_f4[(uint)bVar5 * -2] = afStack_f4[(uint)bVar5 * -2 + 9];
      afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      core_actor_cpp_FUN_00408ac0(this_ptr,puVar3);
      pCVar7 = pCStack_18;
      pCVar8 = &CStack_11c;
      CStack_11c.x = fStack_140;
      *(float *)((int)&CStack_11c + (uint)bVar5 * -8 + 4) = afStack_13c[(uint)bVar5 * -2];
      *(float *)((int)&CStack_11c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_14 = (float)core_setcolid_cpp_FUN_00557630(g_CDemonSetPtr,pCVar7,pCVar8);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140
                (0x01C57074,pCStack_18,&CStack_11c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    }
  }
  iVar2 = *(int *)&this_ptr->field_0x20004;
  if ((((iVar2 == 0) || (iVar2 == *(int *)&this_ptr->field_0x25b0)) ||
      (iVar2 == *(int *)&this_ptr->field_0x2628)) ||
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01b6886c * 4) == 0)) goto LAB_00471d62;
  (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  if (*(int *)&this_ptr->field_0x20004 == 0) {
switchD_00471ce6_caseD_3:
    iVar2 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&this_ptr->field_0x20004 + 0x2e0)) {
    case 0:
    case 5:
      iVar2 = 2;
      break;
    case 1:
      iVar2 = 4;
      break;
    case 2:
      iVar2 = 5;
      break;
    default:
      goto switchD_00471ce6_caseD_3;
    case 4:
      iVar2 = 7;
      break;
    case 7:
      iVar2 = 8;
      break;
    case 9:
    case 10:
      iVar2 = 0xe;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,iVar2);
  bVar1 = (float)_DAT_005da2ac < fStack_14;
  if ((*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) == 1) &&
     (*(int *)&this_ptr->field_0x2c98 == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20004 + 0x154) + 0xf0))
              (*(int *)&this_ptr->field_0x20004);
  }
  core_doc_cpp_FUN_0046f610(this_ptr,0);
LAB_00471d62:
  if ((*(int *)&this_ptr->field_0x1ff54 != 0) &&
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar9 = g_CGasMaskClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004f8c90((CInventory *)&this_ptr->field_0x1fae8,"CGasMask");
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,uVar9);
    if (iStack_28 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      puStack_20 = &this_ptr->field_0xfd8;
      if (*(int *)&this_ptr->field_0x1ff54 == 2) {
        uStack_c8 = 0xbe0fd3f6;
        uStack_c0 = 0;
        uStack_c4 = 0xc04507c8;
        CStack_bc.x = 0.00604827;
        pCVar8 = &CStack_98;
        CStack_98.x = -0.140457;
        *(float *)((int)&CStack_98 + (uint)bVar5 * -8 + 4) = afStack_f4[(uint)bVar5 * -2 + 0xc];
        *(float *)((int)&CStack_98 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
        CStack_bc.y = 0.283614;
        CStack_bc.z = 0.537644;
        core_xform_cpp_FUN_005b5760(&CStack_20c,&CStack_bc,pCVar8);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_20c,puStack_20 + _DAT_01b68814 * 0x30)
        ;
        puVar3 = (uint *)&stack0xfffffd64;
      }
      else {
        pCVar8 = &CStack_a4;
        afStack_f4[5] = 1.16195;
        afStack_f4[7] = 0.0489636;
        afStack_f4[6] = 0.368073;
        CStack_128.y = -0.0202601;
        CStack_a4.x = 1.16195;
        *(float *)((int)&CStack_a4 + (uint)bVar5 * -8 + 4) = afStack_f4[(uint)bVar5 * -2 + 6];
        *(float *)((int)&CStack_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        CStack_128.z = 0.130713;
        CStack_128.x = 0.512623;
        core_xform_cpp_FUN_005b5760(&CStack_1dc,&CStack_128,pCVar8);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_1dc,puStack_20 + _DAT_01b6884c * 0x30)
        ;
        puVar3 = (uint *)&stack0xfffffcd4;
      }
      puVar4 = (uint *)&stack0xfffffd04;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xfffffd04);
      CStack_8c.x = afStack_7c[2];
      *(float *)((int)&CStack_8c + (uint)bVar5 * -8 + 4) = afStack_7c[(uint)bVar5 * -2 + 3];
      *(float *)((int)&CStack_8c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_xform_cpp_FUN_005b6270(&stack0xfffffd04);
      pCVar8 = &CStack_50;
      pCVar7 = &CStack_8c;
      CStack_50.x = fStack_80;
      *(float *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) = afStack_7c[(uint)bVar5 * -2];
      pCVar6 = DAT_00612560;
      *(float *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar6,pCVar7,pCVar8);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(iStack_28 + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    }
  }
  if ((*(int *)&this_ptr->field_0x1ff58 != 0) &&
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01b6886c * 4) != 0)) {
    uVar9 = g_CGogglesClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004f8c90((CInventory *)&this_ptr->field_0x1fae8,"CGoggles");
    iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,uVar9);
    if (iStack_2c != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      puStack_24 = &this_ptr->field_0xfd8;
      if (*(int *)&this_ptr->field_0x1ff58 == 2) {
        afStack_13c[2] = 0.082612;
        afStack_13c[4] = 0.0127901;
        afStack_13c[3] = 3.14091;
        CStack_68.x = 0.00927716;
        pCVar8 = &CStack_14c;
        CStack_14c.x = 0.082612;
        *(float *)((int)&CStack_14c + (uint)bVar5 * -8 + 4) = afStack_13c[(uint)bVar5 * -2 + 3];
        *(float *)((int)&CStack_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        CStack_68.y = 0.336623;
        CStack_68.z = 0.211929;
        core_xform_cpp_FUN_005b5760(&CStack_23c,&CStack_68,pCVar8);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_23c,puStack_24 + _DAT_01b68814 * 0x30)
        ;
        puVar3 = (uint *)&stack0xfffffd34;
      }
      else {
        pCVar8 = &CStack_38;
        afStack_f4[2] = -0.212778;
        afStack_f4[4] = -1.03518;
        afStack_f4[3] = 0.458564;
        CStack_5c.y = -0.299625;
        CStack_38.x = -0.212778;
        *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) = afStack_f4[(uint)bVar5 * -2 + 3];
        *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        CStack_5c.z = -0.0281333;
        CStack_5c.x = 0.26492;
        core_xform_cpp_FUN_005b5760(&CStack_1ac,&CStack_5c,pCVar8);
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_1ac,puStack_24 + _DAT_01b6884c * 0x30)
        ;
        puVar3 = auStack_17c;
      }
      puVar4 = (uint *)&stack0xfffffd94;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xfffffd94);
      CStack_110.x = fStack_b0;
      *(float *)((int)&CStack_110 + (uint)bVar5 * -8 + 4) = afStack_ac[(uint)bVar5 * -2];
      *(float *)((int)&CStack_110 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_xform_cpp_FUN_005b6270(&stack0xfffffd94);
      pCVar8 = &CStack_104;
      pCVar7 = &CStack_110;
      CStack_104.x = fStack_44;
      *(float *)((int)&CStack_104 + (uint)bVar5 * -8 + 4) = afStack_40[(uint)bVar5 * -2];
      pCVar6 = DAT_00612560;
      *(float *)((int)&CStack_104 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(pCVar6,pCVar7,pCVar8);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(iStack_2c + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    }
  }
  if (((*(int *)(&this_ptr->field_0x2298 + _DAT_01b6886c * 4) == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      )) && (0 < *(int *)&this_ptr->field_0x2ca0)) {
    core_cloth_cpp_CClothList_reset_FUN_00441d70((CClothList *)&this_ptr->field_0x2ca0);
  }
  return 1;
}
