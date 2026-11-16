// Name: core_charactr.cpp_CCharacter_processCharacter_FUN_0042cd70
// Address: 0042cd70
// Address Range: [[0042cd70, 0042d381]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042cd70(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042cd70(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CPlatform *pCVar2;
  bool bVar3;
  CScript *this_ptr_00;
  int iVar4;
  CSkeleton *pCVar5;
  uint uVar6;
  float fVar7;
  CCharacter *pCVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float in_stack_00000014;
  float afStackY_18b0 [1511];
  CQuaternion4f *quat2_in;
  CQuaternion4f *quat2_in_00;
  CBoundingBox3D *this_ptr_01;
  int in_stack_ffffff0c;
  CBoundingBox3D CStack_f0;
  uint uStack_d8;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  CQuaternion4f local_94;
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [2];
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar12 = 0;
  fVar7 = this_ptr->sound_cooldown - delta_time;
  bVar3 = false;
  this_ptr->sound_cooldown = fVar7;
  if (fVar7 < 0.0) {
    this_ptr->sound_cooldown = 0.0;
  }
  if (0.0 < this_ptr->bind_time) {
    if ((this_ptr->bind_type == 0) &&
       (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->bind_sound_handle), iVar4 == 0
       )) {
      uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,&this_ptr->base,"wp_bindevil_loop.wav",
                         &(this_ptr->base).location.position);
      this_ptr->bind_sound_handle = uVar6;
    }
    if ((this_ptr->bind_type == 1) || (this_ptr->bind_type == 2)) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&this_ptr->model);
      local_1c = (this_ptr->model).bone_transform.pose_data.bone_rotations;
      local_18 = this_ptr;
      local_20 = &this_ptr->model;
      for (iVar4 = 0;
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(local_20),
          iVar4 < pCVar5->bone_count; iVar4 = iVar4 + 1) {
        core_xform_cpp_quaternionToEulerAngles_FUN_00585de0(local_1c,&local_44);
        local_2c = local_44.x;
        local_28[(uint)bVar12 * -2] = *(float *)((int)&local_44 + (uint)bVar12 * -8 + 4);
        local_28[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             *(float *)((int)&local_44 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
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
        core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_34,&local_54);
        quat2_in_00 = &local_64;
        local_64.w = local_54.w;
        puVar10 = (uint *)((int)&local_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar9 = (uint *)((int)&local_54 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&local_64 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&local_54 + (uint)bVar12 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_38,&local_a4);
        quat2_in = &local_c4;
        local_c4.w = local_a4.w;
        puVar10 = (uint *)((int)&local_c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar9 = (uint *)((int)&local_a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&local_c4 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&local_a4 + (uint)bVar12 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
        core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(local_30,&local_94);
        local_74.w = local_94.w;
        puVar10 = (uint *)((int)&local_74 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar9 = (uint *)((int)&local_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&local_74 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&local_94 + (uint)bVar12 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_74,quat2_in,&local_d4);
        local_84.w = local_d4.w;
        puVar10 = (uint *)((int)&local_84 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar9 = (uint *)((int)&local_d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&local_84 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&local_d4 + (uint)bVar12 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_84,quat2_in_00,&local_b4);
        puVar10 = (uint *)((int)local_18 + (uint)bVar12 * -8 + 0x80c);
        (local_18->model).bone_transform.pose_data.bone_rotations[0].w = local_b4.w;
        puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
        puVar9 = (uint *)((int)&local_b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *puVar10 = *(uint *)((int)&local_b4 + (uint)bVar12 * -8 + 4);
        *puVar11 = *puVar9;
        puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
        local_1c = local_1c + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 0x10);
      }
    }
    if ((this_ptr->bind_type == 3) || (this_ptr->bind_type == 4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_ptr->bind_time = this_ptr->bind_time - delta_time;
    if (0.0 <= this_ptr->bind_time) {
      if (this_ptr->bind_type != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->bind_sound_handle);
        this_ptr->bind_sound_handle = 0;
      }
    }
    else {
      if (this_ptr->bind_type == 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->bind_sound_handle);
        this_ptr->bind_sound_handle = 0;
      }
      this_ptr->bind_type = 0;
      this_ptr->bind_time = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_processFire_FUN_0042e8c0(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_00432220(this_ptr,delta_time);
  fVar7 = this_ptr->stagger_amount - delta_time;
  this_ptr->stagger_amount = fVar7;
  if (fVar7 < 0.0) {
    this_ptr->stagger_amount = 0.0;
  }
  if ((0.0 < this_ptr->speech_timer) &&
     (fVar7 = this_ptr->speech_timer - delta_time, this_ptr->speech_timer = fVar7,
     this_ptr_00 = g_CScriptPtr, fVar7 < 0.0)) {
    this_ptr->speech_timer = 0.0;
    core_script_cpp_CScript_setSpeaker_FUN_00530390(this_ptr_00,&this_ptr->base);
  }
  if (this_ptr->health_bar_mode == HEALTH_BAR_ALWAYS) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bd930
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,2.0);
  }
  if (this_ptr->render_active != 0) {
    return 0;
  }
  if (this_ptr->closest_distance_threshold == _DAT_005dd234) {
    iVar4 = 0;
    pCVar8 = this_ptr;
    do {
      while ((pCVar8->carry_hands[0].carry_actor != (CDemonActor *)0x0 &&
             (pCVar8->carry_hands[0].has_carry_offset == 0))) {
        core_charactr_cpp_CCharacter_computePickup_FUN_00431ab0
                  (this_ptr,iVar4,0.0,(CMatrix3x4f *)0x0);
        iVar4 = iVar4 + 1;
        pCVar8 = (CCharacter *)(pCVar8->base).create_event;
        if (1 < iVar4) goto LAB_0042d163;
      }
      iVar4 = iVar4 + 1;
      pCVar8 = (CCharacter *)(pCVar8->base).create_event;
    } while (iVar4 < 2);
  }
LAB_0042d163:
  fVar7 = (this_ptr->base).platform_position_delta.y;
  (this_ptr->base).platform_position_delta.y = 0.0;
  fVar1 = this_ptr->closest_distance_threshold;
  (this_ptr->base).location.position.y = fVar7 + (this_ptr->base).location.position.y;
  if ((fVar1 == _DAT_005dd234) || ((this_ptr->base).standing_platform != (CPlatform *)0x0)) {
    fVar7 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                      (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = fVar7;
  }
  this_ptr->is_on_ground =
       (uint)((this_ptr->base).location.position.y <
             this_ptr->closest_distance_threshold + (float)_DAT_005b826e);
  (this_ptr->position_delta).z = 0.0;
  (this_ptr->position_delta).y = (this_ptr->position_delta).z;
  (this_ptr->position_delta).x = (this_ptr->position_delta).y;
  pCVar2 = (this_ptr->base).standing_platform;
  this_ptr->turn_angle_accumulator = 0.0;
  if (((pCVar2 == (CPlatform *)0x0) && (this_ptr->walk_to_target == (CDemonActor *)0x0)) &&
     (iVar4 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004d23f0
                        (&(this_ptr->base).location.position,this_ptr->ai_detection_range_max,
                         this_ptr->ai_detection_range_min), iVar4 == 0)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    this_ptr_01 = &CStack_f0;
    puVar9 = &uStack_d8;
    puVar10 = (uint *)&stack0xffffff08;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_01,in_stack_ffffff0c);
    if (iVar4 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      return 0;
    }
  }
  if (!bVar3) {
    return 1;
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(this_ptr,in_stack_00000014);
  return 0;
}
