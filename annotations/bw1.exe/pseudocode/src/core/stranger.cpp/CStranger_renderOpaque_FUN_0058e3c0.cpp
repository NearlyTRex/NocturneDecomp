// Name: core_stranger.cpp_CStranger_renderOpaque_FUN_0058e3c0
// Address: 0058e3c0
// Address Range: [[0058e3c0, 0058e8cb]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0058e3c0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0058e3c0(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *this_ptr_00;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10b4 [36];
  CLightGun *apCStackY_1024 [912];
  CMatrix3x4f *output_matrix;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CMatrix3x4f CStack_18c;
  uint auStack_15c [12];
  uint auStack_12c [12];
  CMatrix3x4f CStack_fc;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [5];
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [2];
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
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,6);
  if ((float)_DAT_005f6eb9 < fStack_14) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    pCStack_18 = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCStack_18 = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      pCStack_18 = &(this_ptr->weapon->base).location.position;
    }
    if (pCStack_18 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      core_stranger_cpp_FUN_005906e0(this_ptr);
      puVar4 = &uStack_90;
      uStack_90 = uStack_b4;
      afStack_8c[(uint)bVar6 * -2] = afStack_b0[(uint)bVar6 * -2];
      afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408ac0(this_ptr,puVar4);
      pCVar7 = pCStack_18;
      pCVar8 = &CStack_6c;
      CStack_6c.x = fStack_cc;
      *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) = afStack_c8[(uint)bVar6 * -2];
      *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_14 = (float)core_setcolid_cpp_FUN_00557630(g_CDemonSetPtr,pCVar7,pCVar8);
      fStack_1c = fStack_14;
      if (fStack_14 < 0.0) {
        fStack_1c = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140
                (0x01C57074,pCStack_18,&CStack_6c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 fStack_1c,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    }
  }
  this_ptr_00 = this_ptr->weapon;
  if ((((this_ptr_00 == (CWeapon *)0x0) ||
       (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (this_ptr_00 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02c83658] == 0))
  goto LAB_0058e657;
  (*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0058e59f_caseD_3:
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
      goto switchD_0058e59f_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar3 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar3 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar3 = 0xe;
    }
  }
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                        ((CCharacter *)this_ptr,iVar3);
  bVar2 = (float)_DAT_005f6ec1 < fStack_14;
  if ((this_ptr->weapon->weapon_type == WEAPON_TYPE_SHOTGUN) &&
     ((this_ptr->base).base.layer_action_index == 8)) {
    bVar2 = true;
LAB_0058e5ef:
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  else if (bVar2) goto LAB_0058e5ef;
  if (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(this_ptr,1);
    (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    if (bVar2) {
      (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->weapon);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(this_ptr,0);
LAB_0058e657:
  if ((((this_ptr->base).is_wearing_gas_mask != GAS_MASK_AWAY) &&
      ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02c83658] != 0)) &&
     (apCStack_38[5] = (this_ptr->base).inventory.light_gun_ptr, apCStack_38[5] != (CLightGun *)0x0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    pCStack_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    if ((this_ptr->base).is_wearing_gas_mask == GAS_MASK_ON_FACE) {
      pCVar8 = &CStack_60;
      apCStack_38[2] = (CLightGun *)0xbe0fd3f6;
      apCStack_38[4] = (CLightGun *)0x0;
      apCStack_38[3] = (CLightGun *)0xc04507c8;
      CStack_48.y = 0.283614;
      CStack_48.x = 0.00604827;
      pCVar7 = &CStack_48;
      output_matrix = &CStack_18c;
      CStack_48.z = 0.537644;
      CStack_60.x = -0.140457;
      *(CLightGun **)((int)&CStack_60 + (uint)bVar6 * -8 + 4) = apCStack_38[(uint)bVar6 * -2 + 3];
      *(CLightGun **)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           apCStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_xform_cpp_FUN_005b5760(output_matrix,pCVar7,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_18c,pCStack_20 + _DAT_02c83600);
      puVar4 = (uint *)&stack0xfffffe44;
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
      core_xform_cpp_FUN_005b5760(&CStack_fc,&CStack_9c,pCVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_fc,pCStack_20 + _DAT_02c83638);
      puVar4 = auStack_12c;
    }
    puVar5 = auStack_15c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(auStack_15c);
    CStack_c0.x = fStack_54;
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) = afStack_50[(uint)bVar6 * -2];
    *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_xform_cpp_FUN_005b6270(auStack_15c);
    pCVar8 = &CStack_78;
    CStack_78.x = afStack_b0[2];
    *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + 4) = afStack_b0[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&CStack_c0,pCVar8);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&(apCStack_38[5]->base).model,0.0,-1);
    engine_matrix_c_pop_FUN_004839a0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02c83658] == 0) &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar3 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_00441d70(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
