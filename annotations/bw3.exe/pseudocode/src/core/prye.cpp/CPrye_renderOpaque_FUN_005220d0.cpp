// Name: core_prye.cpp_CPrye_renderOpaque_FUN_005220d0
// Address: 005220d0
// Address Range: [[005220d0, 00522875]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1134 [888];
  CDemonRenderer *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  uint uVar11;
  float *pfVar12;
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
  CMatrix3x4f *pCStack_24;
  CMatrix3x4f *pCStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005cd687 < fStack_14) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCStack_18 = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCStack_18 = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCStack_18 = &(this_ptr->weapon->base).location.position;
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      core_prye_cpp_FUN_00524800(this_ptr);
      puVar5 = &uStack_a4;
      uStack_a4 = afStack_dc[2];
      afStack_a0[(uint)bVar7 * -2] = afStack_dc[(uint)bVar7 * -2 + 3];
      afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_actor_cpp_FUN_00408b00(this_ptr,puVar5);
      pCVar9 = pCStack_18;
      pCVar10 = &CStack_14c;
      CStack_14c.x = fStack_c8;
      *(float *)((int)&CStack_14c + (uint)bVar7 * -8 + 4) = afStack_dc[(uint)bVar7 * -2 + 6];
      *(float *)((int)&CStack_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      fStack_14 = (float)core_setcolid_cpp_FUN_0053cff0(g_CDemonSetPtr,pCVar9,pCVar10);
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
  pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    (*((pCVar1->vtable)._ub)->renderOpaque)(pCVar1);
  }
  pCVar2 = this_ptr->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01ed3744] == 0))
  goto LAB_00522382;
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (this_ptr->weapon,g_CDiseaseClassInfo.name_hash);
  if ((iVar4 != 0) ||
     (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (this_ptr->weapon,g_CBindEvilClassInfo.name_hash), iVar4 != 0)) {
    core_prye_cpp_FUN_0051f360(this_ptr,1);
  }
  (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00522306_caseD_3:
    iVar4 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar4 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar4 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar4 = 5;
      break;
    default:
      goto switchD_00522306_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar4 = 7;
      break;
    case WEAPON_TYPE_MELEE:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN:
      iVar4 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar4 = 0xe;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
      iVar4 = 0x11;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED:
      iVar4 = 0x12;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,iVar4);
  bVar3 = (float)_DAT_005cd68f < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     ((this_ptr->base).base.layer_action_index == 8)) {
    bVar3 = true;
  }
  if ((this_ptr->weapon->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) || (bVar3)) {
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  core_prye_cpp_FUN_0051f360(this_ptr,0);
LAB_00522382:
  if (((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01ed3744] != 0)) {
    uVar11 = g_CGasMaskClassInfo.name_hash;
    iVar4 = core_inv_cpp_FUN_004db9e0(&(this_ptr->base).inventory,"CGasMask");
    iStack_2c = core_actor_cpp_castToClassHash_FUN_0040c840(iVar4,uVar11);
    if (iStack_2c != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE) {
        uStack_5c = 0xbe0fd3f6;
        uStack_54 = 0;
        uStack_58 = 0xc04507c8;
        afStack_50[0] = 0.00604827;
        pfVar12 = afStack_a0 + 0x17;
        afStack_50[3] = -0.140457;
        afStack_a0[(uint)bVar7 * -2 + 0x18] = afStack_a0[(uint)bVar7 * -2 + 0x12];
        afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        afStack_50[1] = 0.283614;
        afStack_50[2] = 0.537644;
        core_xform_cpp_FUN_00583940(auStack_2cc,afStack_a0 + 0x14,pfVar12);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_2cc,pCStack_20 + _DAT_01ed36dc);
        puVar5 = auStack_1dc;
      }
      else {
        pfVar12 = afStack_a0 + 8;
        uStack_104 = 0x3f94bac7;
        afStack_100[1] = 0.0489636;
        afStack_100[0] = 0.368073;
        uStack_10c = 0xbca5f882;
        afStack_80[0] = 1.16195;
        afStack_a0[(uint)bVar7 * -2 + 9] = afStack_100[(uint)bVar7 * -2];
        afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        uStack_108 = 0x3e05d9a1;
        uStack_110 = 0x3f033b43;
        core_xform_cpp_FUN_00583940(auStack_32c,&uStack_110,pfVar12);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_32c,pCStack_20 + _DAT_01ed3714);
        puVar5 = auStack_2fc;
      }
      puVar6 = auStack_20c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_20c);
      CStack_128.x = afStack_a0[5];
      *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + 4) = afStack_a0[(uint)bVar7 * -2 + 6];
      *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      core_xform_cpp_FUN_00584450(auStack_20c);
      pCVar10 = &CStack_f8;
      pCVar9 = &CStack_128;
      CStack_f8.x = afStack_13c[2];
      *(float *)((int)&CStack_f8 + (uint)bVar7 * -8 + 4) = afStack_13c[(uint)bVar7 * -2 + 3];
      pCVar8 = DAT_005f2afc;
      *(float *)((int)&CStack_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_2c + 0x158),0.0,-1);
      engine_drender_cpp_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if (((this_ptr->base).is_wearing_goggles != 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01ed3744] != 0)) {
    uVar11 = g_CGogglesClassInfo.name_hash;
    iVar4 = core_inv_cpp_FUN_004db9e0(&(this_ptr->base).inventory,"CGoggles");
    iStack_28 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar4,uVar11);
    if (iStack_28 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_goggles == 2) {
        uStack_38 = 0x3da9307b;
        uStack_30 = 0x3c518d91;
        uStack_34 = 0x404904ab;
        uStack_11c = 0x3c17ff3b;
        puVar5 = &uStack_e0;
        uStack_e0 = 0x3da9307b;
        afStack_dc[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 0x1b];
        afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
        uStack_118 = 0x3eac59da;
        uStack_114 = 0x3e5903ea;
        core_xform_cpp_FUN_00583940(auStack_26c,&uStack_11c,puVar5);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_26c,pCStack_24 + _DAT_01ed36dc);
        puVar5 = auStack_23c;
      }
      else {
        pfVar12 = afStack_a0 + 0xe;
        afStack_a0[2] = 0.318478;
        afStack_a0[4] = 0.00474347;
        afStack_a0[3] = -0.246832;
        afStack_74[1] = -0.0739879;
        afStack_74[3] = 0.318478;
        afStack_a0[(uint)bVar7 * -2 + 0xf] = afStack_a0[(uint)bVar7 * -2 + 3];
        afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
             afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        afStack_74[2] = -0.022014;
        afStack_74[0] = -0.427273;
        core_xform_cpp_FUN_00583940(auStack_1ac,afStack_a0 + 0xb,pfVar12);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1ac,pCStack_24 + _DAT_01ed3710);
        puVar5 = auStack_29c;
      }
      puVar6 = auStack_17c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_17c);
      CStack_ec.x = fStack_140;
      *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + 4) = afStack_13c[(uint)bVar7 * -2];
      *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_00584450(auStack_17c);
      pCVar10 = &CStack_b0;
      pCVar9 = &CStack_ec;
      CStack_b0.x = fStack_bc;
      *(float *)((int)&CStack_b0 + (uint)bVar7 * -8 + 4) = afStack_dc[(uint)bVar7 * -2 + 9];
      pCVar8 = DAT_005f2afc;
      *(float *)((int)&CStack_b0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(iStack_28 + 0x158),0.0,-1);
      engine_drender_cpp_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_01ed3744] == 0) &&
      (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar4 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_0043f9d0(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
