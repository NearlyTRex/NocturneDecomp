// Name: core_stranger.cpp_FUN_0053d100
// Address: 0053d100
// Address Range: [[0053d100, 0053d6b0]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0053d100(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_stranger_cpp_FUN_0053d100(CStranger *param_1)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  bool bVar3;
  int iVar4;
  CVector3f *pCVar5;
  uint uVar6;
  CVector3f *start_position;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float local_22c [12];
  byte local_1fc [48];
  byte local_1cc [48];
  float local_19c [12];
  byte local_16c [48];
  CMatrix3x4f local_13c;
  float local_10c [12];
  CMatrix3x4f local_dc;
  CVector3f local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  CVector3f local_94;
  uint local_88;
  uint local_84;
  uint local_80;
  CVector3f local_7c;
  CVector3f local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  CVector3f local_4c;
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  CLightGun *local_1c;
  float local_18;
  float local_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)param_1);
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_1->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)param_1);
    local_30 = 0x40490fdb;
    local_34 = 0;
    local_2c = 0;
    local_a0 = 0;
    local_9c = 0x3f38263b;
    local_98 = 0x3e3d70a4;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_16c,&local_a0,&local_34)
    ;
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_16c,
               (param_1->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f50);
    pfVar7 = local_22c;
    pCVar8 = &local_13c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar8->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_0055bc00(&local_13c,&local_ac);
    core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_13c,&local_94);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_94,&local_ac);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(&param_1->model,0.0,-1)
    ;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)param_1);
  }
  local_14 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,6);
  if ((float)0.98999999999999999 < local_14) {
    pCVar1 = (param_1->base).base.carry_hands[1].carry_actor;
    start_position = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      start_position = &(pCVar1->location).position;
    }
    if (param_1->weapon != (CWeapon *)0x0) {
      start_position = &(param_1->weapon->base).location.position;
    }
    if (start_position != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,(param_1->base).base.carry_hands[1].carry_actor);
      pCVar5 = core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(param_1,&local_70);
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_7c,pCVar5);
      local_14 = (float)core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0
                                  (0x01E57284,start_position,&local_7c);
      local_18 = local_14;
      if (local_14 < 0.0) {
        local_18 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440
                (0x01C08D04,start_position,&local_7c,1.0,1.0,
                 (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),local_18,0xff,0,
                 0);
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    }
  }
  pCVar2 = param_1->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(param_1->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(param_1->base).base.carry_hands[1].carry_actor)) ||
     ((param_1->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] == 0)) goto LAB_0053d387;
  (*((param_1->weapon->base).vtable._ub)->renderOpaque)(&param_1->weapon->base);
  if (param_1->weapon == (CWeapon *)0x0) {
switchD_0053d2cf_caseD_3:
    uVar6 = 0;
  }
  else {
    switch(param_1->weapon->weapon_type) {
    case 0:
    case 5:
      uVar6 = 2;
      break;
    case 1:
      uVar6 = 4;
      break;
    case 2:
      uVar6 = 5;
      break;
    default:
      goto switchD_0053d2cf_caseD_3;
    case 4:
      uVar6 = 7;
      break;
    case 7:
      uVar6 = 8;
    }
  }
  local_14 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                              (param_1,uVar6);
  bVar3 = (float)0.94999999999999996 < local_14;
  if ((param_1->weapon->weapon_type == 1) && ((param_1->base).base.layer_action_index == 8)) {
    bVar3 = true;
LAB_0053d31f:
    (*((param_1->weapon->base).vtable._ub)->archive)(&param_1->weapon->base);
  }
  else if (bVar3) goto LAB_0053d31f;
  if (param_1->weapon->weapon_type == 0) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,1);
    (*((param_1->weapon->base).vtable._ub)->renderOpaque)(&param_1->weapon->base);
    if (bVar3) {
      (*((param_1->weapon->base).vtable._ub)->archive)(&param_1->weapon->base);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
LAB_0053d387:
  if ((((param_1->base).is_wearing_gas_mask != 0) &&
      ((param_1->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] != 0)) &&
     (local_1c = (param_1->base).inventory.light_gun_ptr, local_1c != (CLightGun *)0x0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)param_1);
    if ((param_1->base).is_wearing_gas_mask == 2) {
      local_80 = 0;
      local_88 = 0xbe0fd3f6;
      local_5c = 0x3f09a30a;
      local_84 = 0xc04507c8;
      local_64 = 0x3bc63091;
      local_60 = 0x3e9135db;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_1cc,&local_64,&local_88);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                (local_1cc,
                 (param_1->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f50);
      pfVar7 = local_10c;
    }
    else {
      local_28 = 0x3f94bac7;
      local_20 = 0x3d488e0e;
      local_24 = 0x3ebc7410;
      local_58 = 0x3f033b43;
      local_54 = 0xbca5f882;
      local_50 = 0x3e05d9a1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_1fc,&local_58,&local_28);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                (local_1fc,
                 (param_1->base).base.model.bone_transform.bone_world_matrices + _DAT_02dc9f88);
      pfVar7 = local_19c;
    }
    pCVar8 = &local_dc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar8->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_dc,&local_40);
    core_xform_cpp_getTranslation_FUN_0055bc00(&local_dc,&local_4c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_40,&local_4c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&(local_1c->base).model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)param_1);
  }
  if ((((param_1->base).base.model.part_data.visibility_flags[_DAT_02dc9fa8] == 0) &&
      (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar4 == 0
      )) && (0 < (param_1->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_00438320(&(param_1->base).base.cloth_list);
  }
  return 1;
}
