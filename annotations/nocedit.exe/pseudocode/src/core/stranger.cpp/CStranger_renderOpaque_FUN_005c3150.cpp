// Name: core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150
// Address: 005c3150
// Address Range: [[005c3150, 005c3700]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_005c3150(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_005c3150(CStranger *this_ptr)

{
  CLightGun *pCVar3;
  int iVar4;
  float fVar4;
  CVector3f *input;
  int iVar5;
  CVector3f *start_pos;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar8;
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
  CWeapon *pCVar2;
  bool bVar3;
  CDemonActor *pCVar1;
  
  bVar7 = 0;
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[INT_03f6bb24] != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    local_34.y = 3.1415927;
    local_34.x = 0.0;
    local_34.z = 0.0;
    local_a0.x = 0.0;
    local_a0.y = 0.71933335;
    local_a0.z = 0.185;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_16c,&local_a0,&local_34);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_16c,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6bacc,
               &local_22c);
    pCVar7 = &local_22c;
    pCVar8 = &local_13c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar8->m[0].w = pCVar7->m[0].w;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar7 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_005f6110(&local_13c,&local_ac);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_13c,&local_94);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_94,(CVector3i *)&local_ac);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  }
  fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                    ((CCharacter *)this_ptr,6);
  if ((float)0.98999999999999999 < fVar4) {
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    start_pos = (CVector3f *)0x0;
    if (pCVar1 != (CDemonActor *)0x0) {
      start_pos = &(pCVar1->location).position;
    }
    if (this_ptr->weapon != (CWeapon *)0x0) {
      start_pos = &(this_ptr->weapon->base).location.position;
    }
    if (start_pos != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->weapon->base);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
      input = core_stranger_cpp_CStranger_getThrowDirection_FUN_005c51c0(this_ptr,&local_70);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_7c,input);
      local_18 = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
                           (g_CDemonSetPtr,start_pos,&local_7c);
      if (local_18 < 0.0) {
        local_18 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80
                (g_CFireEffectPtr,start_pos,&local_7c,1.0,1.0,&g_CDemonSetPtr->collision_normal,
                 local_18,0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    }
  }
  pCVar2 = this_ptr->weapon;
  if ((((pCVar2 == (CWeapon *)0x0) ||
       (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor)) ||
      (pCVar2 == (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor)) ||
     ((this_ptr->base).base.model.part_data.visibility_flags[INT_03f6bb24] == 0)) goto LAB_005c33d7;
  (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_005c331f_caseD_3:
    iVar5 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case 0:
    case 5:
      iVar5 = 2;
      break;
    case 1:
      iVar5 = 4;
      break;
    case 2:
      iVar5 = 5;
      break;
    default:
      goto switchD_005c331f_caseD_3;
    case 4:
      iVar5 = 7;
      break;
    case 7:
      iVar5 = 8;
    }
  }
  fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                    ((CCharacter *)this_ptr,iVar5);
  bVar3 = (float)0.94999999999999996 < fVar4;
  if ((this_ptr->weapon->weapon_type == 1) && ((this_ptr->base).base.layer_action_index == 8)) {
    bVar3 = true;
LAB_005c336f:
    (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
              ((CCharacter *)this_ptr->weapon);
  }
  else if (bVar3) goto LAB_005c336f;
  if (this_ptr->weapon->weapon_type == 0) {
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,1);
    (*((this_ptr->weapon->base).vtable._ub)->renderOpaque)(&this_ptr->weapon->base);
    if (bVar3) {
      (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).releaseFromGrab)
                ((CCharacter *)this_ptr->weapon);
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,0);
LAB_005c33d7:
  if ((((this_ptr->base).is_wearing_gas_mask != 0) &&
      ((this_ptr->base).base.model.part_data.visibility_flags[INT_03f6bb24] != 0)) &&
     (pCVar3 = (this_ptr->base).inventory.light_gun_ptr, pCVar3 != (CLightGun *)0x0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    if ((this_ptr->base).is_wearing_gas_mask == 2) {
      local_88.z = 0.0;
      local_88.x = -0.140457;
      local_64.z = 0.537644;
      local_88.y = -3.0786;
      local_64.x = 0.00604827;
      local_64.y = 0.283614;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_1cc,&local_64,&local_88);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&local_1cc,
                 (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6bacc,
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
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_1fc,&local_58,&local_28);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&local_1fc,
                 (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03f6bb04,
                 &local_19c);
      pCVar5 = &local_19c;
    }
    pCVar6 = &local_dc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
      pCVar6->m[0].w = pCVar5->m[0].w;
      pCVar5 = pCVar5;
      pCVar6 = pCVar6;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_dc,&local_40);
    core_xform_cpp_getTranslation_FUN_005f6110(&local_dc,&local_4c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_40,(CVector3i *)&local_4c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&(pCVar3->base).model,0.0,-1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  }
  if ((((this_ptr->base).base.model.part_data.visibility_flags[INT_03f6bb24] == 0) &&
      (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar5 == 0)) && (0 < (this_ptr->base).base.cloth_list.count)) {
    core_cloth_cpp_CClothList_reset_FUN_0043c070(&(this_ptr->base).base.cloth_list);
  }
  return 1;
}
