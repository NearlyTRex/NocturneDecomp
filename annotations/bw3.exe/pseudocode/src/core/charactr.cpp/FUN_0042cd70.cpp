// Name: core_charactr.cpp_FUN_0042cd70
// Address: 0042cd70
// Address Range: [[0042cd70, 0042d381]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042cd70(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
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
  uint *puVar10;
  byte bVar11;
  uint auStackY_18b0 [1511];
  byte *puVar12;
  uint auStack_104 [6];
  uint auStack_ec [6];
  uint local_d4;
  uint auStack_d0 [3];
  uint local_c4;
  float afStack_c0 [7];
  uint local_a4;
  uint local_94;
  uint local_84;
  uint auStack_80 [3];
  uint local_74;
  uint auStack_70 [3];
  uint local_64;
  uint auStack_60 [7];
  float local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [2];
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar11 = 0;
  fVar1 = param_1->sound_cooldown - param_2;
  bVar4 = false;
  param_1->sound_cooldown = fVar1;
  if (fVar1 < 0.0) {
    param_1->sound_cooldown = 0.0;
  }
  if (0.0 < param_1->bind_time) {
    if ((param_1->bind_type == 0) &&
       (iVar5 = sound_sndmain_cpp_FUN_00556700(param_1->bind_sound_handle), iVar5 == 0)) {
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
        local_2c = local_44;
        *(uint *)((int)local_28 + (uint)bVar11 * 0xfffffff8) =
             *(uint *)((int)auStack_60 + ((uint)bVar11 * -2 + 8) * 4);
        *(uint *)((int)local_28 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)auStack_60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 9) * 4);
        if (&local_38 != &local_2c) {
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
        puVar12 = (byte *)&local_64;
        local_64 = auStack_60[3];
        *(uint *)((int)auStack_60 + (uint)bVar11 * 0xfffffff8) =
             *(uint *)((int)auStack_60 + ((uint)bVar11 * -2 + 4) * 4);
        *(uint *)((int)auStack_60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)auStack_60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 5) * 4);
        ((uint *)((int)auStack_60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4))
        [(uint)bVar11 * -2 + 1] =
             ((uint *)((int)auStack_60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 5) * 4))
             [(uint)bVar11 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_38,puVar12);
        puVar12 = (byte *)&local_c4;
        local_c4 = local_a4;
        *(uint *)((int)afStack_c0 + (uint)bVar11 * 0xfffffff8) =
             *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + 8) * 4);
        *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 9) * 4);
        ((uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4))
        [(uint)bVar11 * -2 + 1] =
             ((uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 9) * 4))
             [(uint)bVar11 * -2 + 1];
        core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(local_30,puVar12);
        local_74 = local_94;
        *(uint *)((int)auStack_70 + (uint)bVar11 * 0xfffffff8) =
             *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + 0xc) * 4);
        *(uint *)((int)auStack_70 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd) * 4);
        ((uint *)((int)auStack_70 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4))
        [(uint)bVar11 * -2 + 1] =
             ((uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd) * 4))
             [(uint)bVar11 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_74);
        local_84 = local_d4;
        *(uint *)((int)auStack_80 + (uint)bVar11 * 0xfffffff8) =
             *(uint *)((int)auStack_d0 + (uint)bVar11 * 0xfffffff8);
        *(uint *)((int)auStack_80 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
             *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + -3) * 4);
        ((uint *)((int)auStack_80 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4))
        [(uint)bVar11 * -2 + 1] =
             ((uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + -3) * 4))
             [(uint)bVar11 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_84);
        puVar9 = (uint *)((int)local_18 + (uint)bVar11 * -8 + 0x80c);
        (local_18->model).bone_transform.pose_data.bone_rotations[0].w = afStack_c0[3];
        puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
        *puVar9 = *(uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + 4) * 4);
        *puVar10 = *(uint *)
                    ((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 5) * 4);
        puVar10[(uint)bVar11 * -2 + 1] =
             ((uint *)((int)afStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 5) * 4))
             [(uint)bVar11 * -2 + 1];
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
  core_charactr_cpp_FUN_0042e8c0(param_1,param_2);
  core_charactr_cpp_FUN_00432220(param_1,param_2);
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
        core_charactr_cpp_FUN_00431ab0(param_1,iVar5,0,0);
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
    puVar10 = auStack_104;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
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
