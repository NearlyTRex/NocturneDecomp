// Name: core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770
// Address: 0056b770
// Address Range: [[0056b770, 0056bc71]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0056b770(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0056b770(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *this_ptr_00;
  bool bVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_10b4 [36];
  CLightGun *apCStackY_1024 [912];
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CVector3f *in_stack_fffffe44;
  CMatrix3x4f CStack_18c;
  CMatrix3x4f CStack_15c;
  CMatrix3x4f CStack_12c;
  CMatrix3x4f CStack_fc;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  uint uStack_3c;
  CLightGun *apCStack_38 [6];
  CMatrix3x4f *pCStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005ebc45 < fStack_14) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCStack_18 = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCStack_18 = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCStack_18 = &(this_ptr->weapon->base).location.position;
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      core_stranger_cpp_CStranger_getThrowDirection_FUN_0056da90(this_ptr,&CStack_b4);
      pCVar8 = &CStack_90;
      CStack_90.x = CStack_b4.x;
      *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,pCVar8,&CStack_cc);
      pCVar7 = pCStack_18;
      pCVar8 = &CStack_6c;
      CStack_6c.x = CStack_cc.x;
      *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fStack_14 = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00536210
                            (g_CDemonSetPtr,pCVar7,pCVar8);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840
                (0x01C3DEB4,pCStack_18,&CStack_6c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  this_ptr_00 = this_ptr->weapon;
  if ((((this_ptr_00 == (CWeapon *)0x0) ||
       (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_0264be88] == 0))
  goto LAB_0056ba07;
  (*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0056b94f_caseD_3:
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
      goto switchD_0056b94f_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar3 = 8;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,iVar3);
  bVar2 = (float)_DAT_005ebc4d < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     ((this_ptr->base).base.layer_action_index == 8)) {
    bVar2 = true;
LAB_0056b99f:
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  else if (bVar2) goto LAB_0056b99f;
  if (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,1);
    (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    if (bVar2) {
      (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->weapon);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
LAB_0056ba07:
  if ((((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY) &&
      ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_0264be88] != 0)) &&
     (apCStack_38[5] = (this_ptr->base).inventories[0].light_gun_ptr,
     apCStack_38[5] != (CLightGun *)0x0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    if ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE) {
      pCVar8 = &CStack_60;
      apCStack_38[2] = (CLightGun *)0xbe0fd3f6;
      apCStack_38[4] = (CLightGun *)0x0;
      apCStack_38[3] = (CLightGun *)0xc04507c8;
      CStack_48.y = 0.283614;
      CStack_48.x = 0.00604827;
      pCVar7 = &CStack_48;
      pCVar4 = &CStack_18c;
      CStack_48.z = 0.537644;
      CStack_60.x = -0.140457;
      *(CLightGun **)((int)&CStack_60 + (uint)bVar6 * -8 + 4) = apCStack_38[(uint)bVar6 * -2 + 3];
      *(CLightGun **)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           apCStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar4,pCVar7,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_18c,pCStack_20 + _DAT_0264be30,(CMatrix3x4f *)&stack0xfffffe44);
      pCVar4 = (CMatrix3x4f *)&stack0xfffffe44;
    }
    else {
      uStack_3c = 0x3f94bac7;
      apCStack_38[1] = (CLightGun *)0x3d488e0e;
      pCVar8 = &CStack_84;
      apCStack_38[0] = (CLightGun *)0x3ebc7410;
      CStack_84.x = 1.16195;
      *(CLightGun **)((int)&CStack_84 + (uint)bVar6 * -8 + 4) = apCStack_38[(uint)bVar6 * -2];
      *(CLightGun **)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           apCStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      CStack_9c.z = 0.130713;
      CStack_9c.x = 0.512623;
      CStack_9c.y = -0.0202601;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&CStack_fc,&CStack_9c,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_fc,pCStack_20 + _DAT_0264be68,&CStack_12c);
      pCVar4 = &CStack_12c;
    }
    pCVar5 = &CStack_15c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&CStack_15c,in_stack_fffffe44);
    CStack_c0.x = fStack_54;
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) = afStack_50[(uint)bVar6 * -2];
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_xform_cpp_getTranslation_FUN_00592720(&CStack_15c,&CStack_a8);
    pCVar8 = &CStack_78;
    CStack_78.x = CStack_a8.x;
    *(uint *)((int)&CStack_78 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&CStack_c0,pCVar8);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&(apCStack_38[5]->base).model,0.0,-1);
    engine_drender_cpp_pop_FUN_0046b4a0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_0264be88] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_005b1550(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
