// Name: core_prye.cpp_CPrye_renderOpaque_FUN_005220d0
// Address: 005220d0
// Address Range: [[005220d0, 00522875]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

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
  float *pfVar10;
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
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float afStack_100 [2];
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  uint uStack_e0;
  float afStack_dc [5];
  float fStack_c8;
  float fStack_bc;
  CVector3f CStack_b0;
  uint uStack_a4;
  float afStack_a0 [8];
  float afStack_80 [3];
  float afStack_74 [6];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  float afStack_50 [6];
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
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005cd687 < fStack_14) {
    pCStack_18 = (CVector3f *)0x0;
    if (*(int *)&this_ptr->field_0x2628 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&this_ptr->field_0x2628 + 0x20);
    }
    if (*(int *)&this_ptr->field_0x20c24 != 0) {
      pCStack_18 = (CVector3f *)(*(int *)&this_ptr->field_0x20c24 + 0x20);
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x20c24);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2628);
      unkafter_prye_cpp_FUN_00524800(this_ptr);
      puVar3 = &uStack_a4;
      uStack_a4 = afStack_dc[2];
      afStack_a0[(uint)bVar5 * -2] = afStack_dc[(uint)bVar5 * -2 + 3];
      afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_actor_cpp_FUN_00408b00(this_ptr,puVar3);
      pCVar7 = pCStack_18;
      pCVar8 = &CStack_14c;
      CStack_14c.x = fStack_c8;
      *(float *)((int)&CStack_14c + (uint)bVar5 * -8 + 4) = afStack_dc[(uint)bVar5 * -2 + 6];
      *(float *)((int)&CStack_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      fStack_14 = (float)core_setcolid_cpp_FUN_0053cff0(g_CDemonSetPtr,pCVar7,pCVar8);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004a2b70
                (0x01C73654,pCStack_18,&CStack_14c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    }
  }
  iVar2 = *(int *)&this_ptr->field_0x25b0;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2);
  }
  iVar2 = *(int *)&this_ptr->field_0x20c24;
  if ((((iVar2 == 0) || (iVar2 == *(int *)&this_ptr->field_0x25b0)) ||
      (iVar2 == *(int *)&this_ptr->field_0x2628)) ||
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01ed3744 * 4) == 0)) goto LAB_00522382;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x20c24,g_CDiseaseClassInfo.name_hash);
  if ((iVar2 != 0) ||
     (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&this_ptr->field_0x20c24,g_CBindEvilClassInfo.name_hash),
     iVar2 != 0)) {
    core_prye_cpp_FUN_0051f360(this_ptr,1);
  }
  (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20c24 + 0x154) + 0x10))
            (*(int *)&this_ptr->field_0x20c24);
  if (*(int *)&this_ptr->field_0x20c24 == 0) {
switchD_00522306_caseD_3:
    iVar2 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&this_ptr->field_0x20c24 + 0x2e0)) {
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
      goto switchD_00522306_caseD_3;
    case 4:
      iVar2 = 7;
      break;
    case 7:
    case 0xc:
      iVar2 = 8;
      break;
    case 9:
    case 10:
      iVar2 = 0xe;
      break;
    case 0xd:
      iVar2 = 0x11;
      break;
    case 0xe:
      iVar2 = 0x12;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,iVar2);
  bVar1 = (float)_DAT_005cd68f < fStack_14;
  if ((*(int *)(*(int *)&this_ptr->field_0x20c24 + 0x2e0) == 1) &&
     (*(int *)&this_ptr->field_0x2f00 == 8)) {
    bVar1 = true;
  }
  if ((*(int *)(*(int *)&this_ptr->field_0x20c24 + 0x2e0) == 9) || (bVar1)) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20c24 + 0x154) + 0xf0))
              (*(int *)&this_ptr->field_0x20c24);
  }
  core_prye_cpp_FUN_0051f360(this_ptr,0);
LAB_00522382:
  if ((*(int *)&this_ptr->field_0x20b58 != 0) &&
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar9 = g_CGasMaskClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004db9e0((CInventory *)&this_ptr->field_0x206e8,"CGasMask");
    iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,uVar9);
    if (iStack_2c != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      puStack_20 = &this_ptr->field_0xfd8;
      if (*(int *)&this_ptr->field_0x20b58 == 2) {
        uStack_5c = 0xbe0fd3f6;
        uStack_54 = 0;
        uStack_58 = 0xc04507c8;
        afStack_50[0] = 0.00604827;
        pfVar10 = afStack_a0 + 0x17;
        afStack_50[3] = -0.140457;
        afStack_a0[(uint)bVar5 * -2 + 0x18] = afStack_a0[(uint)bVar5 * -2 + 0x12];
        afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
             afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        afStack_50[1] = 0.283614;
        afStack_50[2] = 0.537644;
        core_xform_cpp_FUN_00583940(auStack_2cc,afStack_a0 + 0x14,pfVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_2cc,puStack_20 + _DAT_01ed36dc * 0x30)
        ;
        puVar3 = auStack_1dc;
      }
      else {
        pfVar10 = afStack_a0 + 8;
        uStack_104 = 0x3f94bac7;
        afStack_100[1] = 0.0489636;
        afStack_100[0] = 0.368073;
        uStack_10c = 0xbca5f882;
        afStack_80[0] = 1.16195;
        afStack_a0[(uint)bVar5 * -2 + 9] = afStack_100[(uint)bVar5 * -2];
        afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        uStack_108 = 0x3e05d9a1;
        uStack_110 = 0x3f033b43;
        core_xform_cpp_FUN_00583940(auStack_32c,&uStack_110,pfVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_32c,puStack_20 + _DAT_01ed3714 * 0x30)
        ;
        puVar3 = auStack_2fc;
      }
      puVar4 = auStack_20c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_20c);
      CStack_128.x = afStack_a0[5];
      *(float *)((int)&CStack_128 + (uint)bVar5 * -8 + 4) = afStack_a0[(uint)bVar5 * -2 + 6];
      *(float *)((int)&CStack_128 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      core_xform_cpp_FUN_00584450(auStack_20c);
      pCVar8 = &CStack_f8;
      pCVar7 = &CStack_128;
      CStack_f8.x = afStack_13c[2];
      *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) = afStack_13c[(uint)bVar5 * -2 + 3];
      pCVar6 = DAT_005f2afc;
      *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar6,pCVar7,pCVar8);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_2c + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if ((*(int *)&this_ptr->field_0x20b5c != 0) &&
     (*(int *)(&this_ptr->field_0x2298 + _DAT_01ed3744 * 4) != 0)) {
    uVar9 = g_CGogglesClassInfo.name_hash;
    iVar2 = core_inv_cpp_FUN_004db9e0((CInventory *)&this_ptr->field_0x206e8,"CGoggles");
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar2,uVar9);
    if (iStack_28 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      puStack_24 = &this_ptr->field_0xfd8;
      if (*(int *)&this_ptr->field_0x20b5c == 2) {
        uStack_38 = 0x3da9307b;
        uStack_30 = 0x3c518d91;
        uStack_34 = 0x404904ab;
        uStack_11c = 0x3c17ff3b;
        puVar3 = &uStack_e0;
        uStack_e0 = 0x3da9307b;
        afStack_dc[(uint)bVar5 * -2] = afStack_a0[(uint)bVar5 * -2 + 0x1b];
        afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
        uStack_118 = 0x3eac59da;
        uStack_114 = 0x3e5903ea;
        core_xform_cpp_FUN_00583940(auStack_26c,&uStack_11c,puVar3);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_26c,puStack_24 + _DAT_01ed36dc * 0x30)
        ;
        puVar3 = auStack_23c;
      }
      else {
        pfVar10 = afStack_a0 + 0xe;
        afStack_a0[2] = 0.318478;
        afStack_a0[4] = 0.00474347;
        afStack_a0[3] = -0.246832;
        afStack_74[1] = -0.0739879;
        afStack_74[3] = 0.318478;
        afStack_a0[(uint)bVar5 * -2 + 0xf] = afStack_a0[(uint)bVar5 * -2 + 3];
        afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
             afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        afStack_74[2] = -0.022014;
        afStack_74[0] = -0.427273;
        core_xform_cpp_FUN_00583940(auStack_1ac,afStack_a0 + 0xb,pfVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1ac,puStack_24 + _DAT_01ed3710 * 0x30)
        ;
        puVar3 = auStack_29c;
      }
      puVar4 = auStack_17c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_17c);
      CStack_ec.x = fStack_140;
      *(float *)((int)&CStack_ec + (uint)bVar5 * -8 + 4) = afStack_13c[(uint)bVar5 * -2];
      *(float *)((int)&CStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_xform_cpp_FUN_00584450(auStack_17c);
      pCVar8 = &CStack_b0;
      pCVar7 = &CStack_ec;
      CStack_b0.x = fStack_bc;
      *(float *)((int)&CStack_b0 + (uint)bVar5 * -8 + 4) = afStack_dc[(uint)bVar5 * -2 + 9];
      pCVar6 = DAT_005f2afc;
      *(float *)((int)&CStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar6,pCVar7,pCVar8);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_28 + 0x158),0.0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if (((*(int *)(&this_ptr->field_0x2298 + _DAT_01ed3744 * 4) == 0) &&
      (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar2 == 0
      )) && (0 < *(int *)&this_ptr->field_0x2f08)) {
    core_cloth_cpp_CClothList_reset_FUN_0043f9d0((CClothList *)&this_ptr->field_0x2f08);
  }
  return 1;
}
