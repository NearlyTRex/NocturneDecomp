// Name: core_charactr.cpp_FUN_0042cd70
// Address: 0042cd70
// Address Range: [[0042cd70, 0042d381]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042cd70(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_0042cd70(CCharacter *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  CPlatform *pCVar3;
  bool bVar4;
  CScript *this_ptr;
  int iVar5;
  CSkeleton *pCVar6;
  uint uVar7;
  CCharacter *pCVar8;
  uint *puVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_18b0 [1511];
  CQuaternion4f *quat2_in;
  CQuaternion4f *quat2_in_00;
  uint auStack_104 [6];
  uint auStack_ec [6];
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  CQuaternion4f local_94;
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  float local_54;
  float afStack_50 [6];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [2];
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar13 = 0;
  fVar1 = param_1->sound_cooldown - param_2;
  bVar4 = false;
  param_1->sound_cooldown = fVar1;
  if (fVar1 < 0.0) {
    param_1->sound_cooldown = 0.0;
  }
  if (0.0 < param_1->bind_time) {
    if ((param_1->bind_type == 0) &&
       (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(param_1->bind_sound_handle), iVar5 == 0)
       ) {
      uVar7 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,&param_1->base,"wp_bindevil_loop.wav",
                         &(param_1->base).location.position);
      param_1->bind_sound_handle = uVar7;
    }
    if ((param_1->bind_type == 1) || (param_1->bind_type == 2)) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&param_1->model);
      local_1c = (param_1->model).bone_transform.pose_data.bone_rotations;
      local_18 = param_1;
      local_20 = &param_1->model;
      for (iVar5 = 0;
          pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(local_20),
          iVar5 < pCVar6->bone_count; iVar5 = iVar5 + 1) {
        core_xform_cpp_FUN_00585de0(local_1c);
        local_2c = afStack_50[3];
        local_28[(uint)bVar13 * -2] = afStack_50[(uint)bVar13 * -2 + 4];
        local_28[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_50[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5];
        if (afStack_50 + 6 != &local_2c) {
          local_38 = local_2c;
          local_34 = local_28[0];
          local_30 = local_28[1];
        }
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.15707964,0.15707964);
        local_34 = local_14 + local_34;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.15707964,0.15707964);
        local_38 = local_14 + local_38;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.15707964,0.15707964);
        local_30 = local_14 + local_30;
        core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_34);
        quat2_in_00 = &local_64;
        local_64.w = local_54;
        pfVar10 = (float *)((int)&local_64 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&local_64 + (uint)bVar13 * -8 + 4) = afStack_50[(uint)bVar13 * -2];
        *pfVar10 = afStack_50[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar10[(uint)bVar13 * -2 + 1] =
             (afStack_50 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_38,&local_a4);
        quat2_in = &local_c4;
        local_c4.w = local_a4.w;
        puVar11 = (uint *)((int)&local_c4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        puVar9 = (uint *)((int)&local_a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(uint *)((int)&local_c4 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_a4 + (uint)bVar13 * -8 + 4);
        *puVar11 = *puVar9;
        puVar11[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
        core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(local_30,&local_94);
        local_74.w = local_94.w;
        puVar11 = (uint *)((int)&local_74 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        puVar9 = (uint *)((int)&local_94 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(uint *)((int)&local_74 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_94 + (uint)bVar13 * -8 + 4);
        *puVar11 = *puVar9;
        puVar11[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_74,quat2_in,&local_d4);
        local_84.w = local_d4.w;
        puVar11 = (uint *)((int)&local_84 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        puVar9 = (uint *)((int)&local_d4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(uint *)((int)&local_84 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_d4 + (uint)bVar13 * -8 + 4);
        *puVar11 = *puVar9;
        puVar11[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_84,quat2_in_00,&local_b4);
        puVar11 = (uint *)((int)local_18 + (uint)bVar13 * -8 + 0x80c);
        (local_18->model).bone_transform.pose_data.bone_rotations[0].w = local_b4.w;
        puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
        puVar9 = (uint *)((int)&local_b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *puVar11 = *(uint *)((int)&local_b4 + (uint)bVar13 * -8 + 4);
        *puVar12 = *puVar9;
        puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
        local_1c = local_1c + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 0x10);
      }
    }
    if ((param_1->bind_type == 3) || (param_1->bind_type == 4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    param_1->bind_time = param_1->bind_time - param_2;
    if (0.0 <= param_1->bind_time) {
      if (param_1->bind_type != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(param_1->bind_sound_handle);
        param_1->bind_sound_handle = 0;
      }
    }
    else {
      if (param_1->bind_type == 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(param_1->bind_sound_handle);
        param_1->bind_sound_handle = 0;
      }
      param_1->bind_type = 0;
      param_1->bind_time = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_processFire_FUN_0042e8c0(param_1,param_2);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_00432220(param_1,param_2);
  fVar1 = param_1->stagger_amount - param_2;
  param_1->stagger_amount = fVar1;
  if (fVar1 < 0.0) {
    param_1->stagger_amount = 0.0;
  }
  if ((0.0 < param_1->speech_timer) &&
     (fVar1 = param_1->speech_timer - param_2, param_1->speech_timer = fVar1,
     this_ptr = g_CScriptPtr, fVar1 < 0.0)) {
    param_1->speech_timer = 0.0;
    core_script_cpp_CScript_setSpeaker_FUN_00530390(this_ptr,&param_1->base);
  }
  if (param_1->health_bar_mode == HEALTH_BAR_ALWAYS) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bd930
              (g_CGamePtr,param_1->descriptive_name,param_1->hit_points / param_1->max_hit_points,
               2.0);
  }
  if (param_1->render_active != 0) {
    return 0;
  }
  if (param_1->closest_distance_threshold == _DAT_005dd234) {
    iVar5 = 0;
    pCVar8 = param_1;
    do {
      while ((pCVar8->carry_hands[0].carry_actor != (CDemonActor *)0x0 &&
             (pCVar8->carry_hands[0].has_carry_offset == 0))) {
        core_charactr_cpp_CCharacter_computePickup_FUN_00431ab0(param_1,iVar5,0.0,(int *)0x0);
        iVar5 = iVar5 + 1;
        pCVar8 = (CCharacter *)(pCVar8->base).create_event;
        if (1 < iVar5) goto LAB_0042d163;
      }
      iVar5 = iVar5 + 1;
      pCVar8 = (CCharacter *)(pCVar8->base).create_event;
    } while (iVar5 < 2);
  }
LAB_0042d163:
  fVar1 = (param_1->base).platform_position_delta.y;
  (param_1->base).platform_position_delta.y = 0.0;
  fVar2 = param_1->closest_distance_threshold;
  (param_1->base).location.position.y = fVar1 + (param_1->base).location.position.y;
  if ((fVar2 == _DAT_005dd234) || ((param_1->base).standing_platform != (CPlatform *)0x0)) {
    local_14 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                         (&param_1->base,param_1->collision_cylinder_height,(CVector3f *)0x0);
    param_1->closest_distance_threshold = local_14;
  }
  param_1->is_on_ground =
       (uint)((param_1->base).location.position.y <
             param_1->closest_distance_threshold + (float)_DAT_005b826e);
  (param_1->position_delta).z = 0.0;
  (param_1->position_delta).y = (param_1->position_delta).z;
  (param_1->position_delta).x = (param_1->position_delta).y;
  pCVar3 = (param_1->base).standing_platform;
  param_1->turn_angle_accumulator = 0.0;
  if (((pCVar3 == (CPlatform *)0x0) && (param_1->walk_to_target == (CDemonActor *)0x0)) &&
     (iVar5 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004d23f0
                        (&(param_1->base).location.position,param_1->ai_detection_range_max,
                         param_1->ai_detection_range_min), iVar5 == 0)) {
    (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,(CBoundingBox3D *)0x0);
    puVar9 = auStack_ec;
    puVar11 = auStack_104;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    iVar5 = core_box_cpp_FUN_0041daf0(auStack_104);
    if (iVar5 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1->sfx_handle);
      return 0;
    }
  }
  if (!bVar4) {
    return 1;
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(param_1,param_2);
  return 0;
}
