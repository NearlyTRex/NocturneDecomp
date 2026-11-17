// Name: core_prye.cpp_CPrye_renderOpaque_FUN_005220d0
// Address: 005220d0
// Address Range: [[005220d0, 00522875]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)

{
  CWeapon *pCVar1;
  bool bVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1134 [69];
  CDemonActor *apCStackY_1020 [819];
  CDemonRenderer *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  uint uVar11;
  CVector3f *in_stack_fffffcd4;
  CMatrix3x4f CStack_2fc;
  CMatrix3x4f CStack_2cc;
  CMatrix3x4f CStack_29c;
  CMatrix3x4f CStack_26c;
  CMatrix3x4f CStack_23c;
  CMatrix3x4f CStack_20c;
  CMatrix3x4f CStack_1dc;
  CMatrix3x4f CStack_1ac;
  CMatrix3x4f CStack_17c;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  uint uStack_104;
  float afStack_100 [2];
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [5];
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  uint uStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_38;
  CDemonActor *apCStack_34 [4];
  CMatrix3x4f *pCStack_24;
  CMatrix3x4f *pCStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,6);
  if ((float)0.98999999999999999 < fStack_14) {
    pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCStack_18 = (CVector3f *)0x0;
    if (pCVar4 != (CDemonActor *)0x0) {
      pCStack_18 = &(pCVar4->location).position;
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
      core_prye_cpp_CPrye_getThrowDirection_FUN_00524800(this_ptr,&CStack_d4);
      pCVar10 = &CStack_a4;
      CStack_a4.x = CStack_d4.x;
      *(uint *)((int)&CStack_a4 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                ((CDemonActor *)this_ptr,pCVar10,&CStack_c8);
      pCVar9 = pCStack_18;
      pCVar10 = &CStack_14c;
      CStack_14c.x = CStack_c8.x;
      *(uint *)((int)&CStack_14c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_c8 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_14c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0053cff0
                            (g_CDemonSetPtr,pCVar9,pCVar10);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004a2b70
                (g_CFireEffect_PTR_005fc5a0,pCStack_18,&CStack_14c,1.0,1.0,
                 &g_CDemonSetPtr->collision_normal,fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    }
  }
  pCVar4 = (this_ptr->base).base.carry_hands[0].carry_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    (*((pCVar4->vtable)._ub)->renderOpaque)(pCVar4);
  }
  pCVar1 = this_ptr->weapon;
  if ((((pCVar1 == (CWeapon *)0x0) ||
       (pCVar1 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar1 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[g_StrangerIndices[0x16]] == 0))
  goto LAB_00522382;
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&this_ptr->weapon->base,g_CDiseaseClassInfo.name_hash);
  if ((pCVar4 != (CDemonActor *)0x0) ||
     (pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (&this_ptr->weapon->base,g_CBindEvilClassInfo.name_hash),
     pCVar4 != (CDemonActor *)0x0)) {
    core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(this_ptr,1);
  }
  (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00522306_caseD_3:
    iVar3 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar3 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar3 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar3 = 5;
      break;
    default:
      goto switchD_00522306_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 7;
      break;
    case WEAPON_TYPE_MELEE:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar3 = 0xe;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
      iVar3 = 0x11;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED:
      iVar3 = 0x12;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                        ((CCharacter *)this_ptr,iVar3);
  bVar2 = (float)0.94999999999999996 < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     ((this_ptr->base).base.layer_action_index == 8)) {
    bVar2 = true;
  }
  if ((this_ptr->weapon->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) || (bVar2)) {
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(this_ptr,0);
LAB_00522382:
  if (((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[g_StrangerIndices[0x16]] != 0)) {
    uVar11 = g_CGasMaskClassInfo.name_hash;
    pCVar4 = core_inv_cpp_CInventory_findItemOfClass_FUN_004db9e0
                       (&(this_ptr->base).inventory,"CGasMask");
    apCStack_34[2] = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,uVar11);
    if (apCStack_34[2] != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE) {
        uStack_5c = 0xbe0fd3f6;
        afStack_58[1] = 0.0;
        afStack_58[0] = -3.0786;
        CStack_50.x = 0.00604827;
        pCVar10 = &CStack_44;
        CStack_44.x = -0.140457;
        *(float *)((int)&CStack_44 + (uint)bVar7 * -8 + 4) = afStack_58[(uint)bVar7 * -2];
        *(float *)((int)&CStack_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_50.y = 0.283614;
        CStack_50.z = 0.537644;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&CStack_2cc,&CStack_50,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&CStack_2cc,pCStack_20 + g_INT_01ed36dc,&CStack_1dc);
        pCVar5 = &CStack_1dc;
      }
      else {
        pCVar10 = &CStack_80;
        uStack_104 = 0x3f94bac7;
        afStack_100[1] = 0.0489636;
        afStack_100[0] = 0.368073;
        CStack_110.y = -0.0202601;
        CStack_80.x = 1.16195;
        *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + 4) = afStack_100[(uint)bVar7 * -2];
        *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_110.z = 0.130713;
        CStack_110.x = 0.512623;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  ((CMatrix3x4f *)&stack0xfffffcd4,&CStack_110,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  ((CMatrix3x4f *)&stack0xfffffcd4,pCStack_20 + g_StrangerIndices[10],&CStack_2fc);
        pCVar5 = &CStack_2fc;
      }
      pCVar6 = &CStack_20c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&CStack_20c,in_stack_fffffcd4);
      CStack_128.x = afStack_94[2];
      *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + 4) = afStack_94[(uint)bVar7 * -2 + 3];
      *(float *)((int)&CStack_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_xform_cpp_getTranslation_FUN_00584450(&CStack_20c,&CStack_134);
      pCVar10 = &CStack_f8;
      pCVar9 = &CStack_128;
      CStack_f8.x = CStack_134.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_134 + (uint)bVar7 * -8 + 4);
      pCVar8 = g_CDemonRenderer_PTR_005f2afc;
      *(uint *)((int)&CStack_f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_134 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(apCStack_34[2] + 1),0.0,-1);
      engine_drender_cpp_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if (((this_ptr->base).is_wearing_goggles != 0) &&
     ((this_ptr->base).base.model.part_data.visibility_flags[g_StrangerIndices[0x16]] != 0)) {
    uVar11 = g_CGogglesClassInfo.name_hash;
    pCVar4 = core_inv_cpp_CInventory_findItemOfClass_FUN_004db9e0
                       (&(this_ptr->base).inventory,"CGoggles");
    apCStack_34[3] = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,uVar11);
    if (apCStack_34[3] != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      pCStack_24 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      if ((this_ptr->base).is_wearing_goggles == 2) {
        uStack_38 = 0x3da9307b;
        apCStack_34[1] = (CDemonActor *)0x3c518d91;
        apCStack_34[0] = (CDemonActor *)0x404904ab;
        CStack_11c.x = 0.00927716;
        pCVar10 = &CStack_e0;
        CStack_e0.x = 0.082612;
        *(CDemonActor **)((int)&CStack_e0 + (uint)bVar7 * -8 + 4) = apCStack_34[(uint)bVar7 * -2];
        *(CDemonActor **)((int)&CStack_e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             apCStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_11c.y = 0.336623;
        CStack_11c.z = 0.211929;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&CStack_26c,&CStack_11c,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&CStack_26c,pCStack_24 + g_INT_01ed36dc,&CStack_23c);
        pCVar5 = &CStack_23c;
      }
      else {
        pCVar10 = &CStack_68;
        uStack_98 = 0x3ea30f8c;
        afStack_94[1] = 0.00474347;
        afStack_94[0] = -0.246832;
        CStack_74.y = -0.0739879;
        CStack_68.x = 0.318478;
        *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + 4) = afStack_94[(uint)bVar7 * -2];
        *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_74.z = -0.022014;
        CStack_74.x = -0.427273;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&CStack_1ac,&CStack_74,pCVar10);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&CStack_1ac,pCStack_24 + g_StrangerIndices[9],&CStack_29c);
        pCVar5 = &CStack_29c;
      }
      pCVar6 = &CStack_17c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&CStack_17c,in_stack_fffffcd4);
      CStack_ec.x = fStack_140;
      *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + 4) = afStack_13c[(uint)bVar7 * -2];
      *(float *)((int)&CStack_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_13c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_xform_cpp_getTranslation_FUN_00584450(&CStack_17c,&CStack_bc);
      pCVar10 = &CStack_b0;
      pCVar9 = &CStack_ec;
      CStack_b0.x = CStack_bc.x;
      *(uint *)((int)&CStack_b0 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_bc + (uint)bVar7 * -8 + 4);
      pCVar8 = g_CDemonRenderer_PTR_005f2afc;
      *(uint *)((int)&CStack_b0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(pCVar8,pCVar9,pCVar10);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(apCStack_34[3] + 1),0.0,-1);
      engine_drender_cpp_pop_FUN_0046d080();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[g_StrangerIndices[0x16]] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540
                         (g_CDemonRenderer_PTR_005f2afc), iVar3 == 0)) &&
     (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_0043f9d0(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
