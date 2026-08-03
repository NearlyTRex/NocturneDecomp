// Name: core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100
// Address: 0053d100
// Address Range: [[0053d100, 0053d6b0]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0053d100(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0053d100(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  bool bVar3;
  int iVar4;
  CVector3f *input;
  CVector3f *start_pos;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CLightGun *local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    local_34.y = 3.1415927;
    local_34.x = 0.0;
    local_34.z = 0.0;
    local_a0.x = 0.0;
    local_a0.y = 0.71933335;
    local_a0.z = 0.185;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_16c,&local_a0,&local_34);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (&local_16c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f50,
               &local_22c);
    pCVar5 = &local_22c;
    pCVar6 = &local_13c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_0055bc00(&local_13c,&local_ac);
    core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_13c,&local_94);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_94,&local_ac);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  }
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                       ((CCharacter *)this_ptr,6);
  if ((float)0.98999999999999999 < local_14) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    start_pos = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      start_pos = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      start_pos = &(this_ptr->weapon->base).location.position;
    }
    if (start_pos != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,(this_ptr->base).base.carry_hands[1].carry_actor);
      input = core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(this_ptr,&local_70);
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                ((CDemonActor *)this_ptr,&local_7c,input);
      local_14 = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0
                           (g_CDemonSet_PTR_005be368,start_pos,&local_7c);
      local_18 = local_14;
      if (local_14 < 0.0) {
        local_18 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440
                (g_CFireEffect_PTR_005b80f0,start_pos,&local_7c,1.0,1.0,
                 &g_CDemonSet_PTR_005be368->collision_normal,local_18,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    }
  }
  pCVar2 = this_ptr->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] == 0))
  goto LAB_0053d387;
  (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0053d2cf_caseD_3:
    iVar4 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case 0:
    case 5:
      iVar4 = 2;
      break;
    case 1:
      iVar4 = 4;
      break;
    case 2:
      iVar4 = 5;
      break;
    default:
      goto switchD_0053d2cf_caseD_3;
    case 4:
      iVar4 = 7;
      break;
    case 7:
      iVar4 = 8;
    }
  }
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                       ((CCharacter *)this_ptr,iVar4);
  bVar3 = (float)0.94999999999999996 < local_14;
  if ((this_ptr->weapon->weapon_type == 1) && ((this_ptr->base).base.layer_action_index == 8)) {
    bVar3 = true;
LAB_0053d31f:
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  else if (bVar3) goto LAB_0053d31f;
  if (this_ptr->weapon->weapon_type == 0) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(this_ptr,1);
    (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    if (bVar3) {
      (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->weapon);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(this_ptr,0);
LAB_0053d387:
  if ((((this_ptr->base).is_wearing_gas_mask != 0) &&
      ((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] != 0)) &&
     (local_1c = (this_ptr->base).inventory.light_gun_ptr, local_1c != (CLightGun *)0x0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    if ((this_ptr->base).is_wearing_gas_mask == 2) {
      local_88.z = 0.0;
      local_88.x = -0.140457;
      local_64.z = 0.537644;
      local_88.y = -3.0786;
      local_64.x = 0.00604827;
      local_64.y = 0.283614;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_1cc,&local_64,&local_88);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                (&local_1cc,
                 (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f50,
                 &local_10c);
      pCVar5 = &local_10c;
    }
    else {
      local_28.x = 1.16195;
      local_28.z = 0.0489636;
      local_28.y = 0.368073;
      local_58.x = 0.512623;
      local_58.y = -0.0202601;
      local_58.z = 0.130713;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_1fc,&local_58,&local_28);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                (&local_1fc,
                 (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f88,
                 &local_19c);
      pCVar5 = &local_19c;
    }
    pCVar6 = &local_dc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_dc,&local_40);
    core_xform_cpp_getTranslation_FUN_0055bc00(&local_dc,&local_4c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_40,&local_4c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&(local_1c->base).model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] == 0) &&
      (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar4 == 0
      )) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_00438320(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
