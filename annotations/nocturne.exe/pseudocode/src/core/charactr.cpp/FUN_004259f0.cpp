// Name: core_charactr.cpp_FUN_004259f0
// Address: 004259f0
// Address Range: [[004259f0, 00425c14]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_004259f0(CCharacter *param_1,float param_2)

#include "nocturne.h"

uint core_charactr_cpp_FUN_004259f0(CCharacter *param_1,float param_2)

{
  float fVar1;
  CPlatform *pCVar2;
  CScript *this_ptr;
  float fVar3;
  uint uVar4;
  int iVar5;
  CCharacter *pCVar6;
  
  fVar3 = param_1->sound_cooldown - param_2;
  param_1->sound_cooldown = fVar3;
  if (fVar3 < 0.0) {
    param_1->sound_cooldown = 0.0;
  }
  core_charactr_cpp_CCharacter_processFire_FUN_004269b0(param_1,param_2);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_00429660(param_1,param_2);
  fVar3 = param_1->stagger_amount - param_2;
  param_1->stagger_amount = fVar3;
  if (fVar3 < 0.0) {
    param_1->stagger_amount = 0.0;
  }
  if ((0.0 < param_1->speech_timer) &&
     (param_2 = param_1->speech_timer - param_2, param_1->speech_timer = param_2,
     this_ptr = 0x01E56DA0, param_2 < 0.0)) {
    param_1->speech_timer = 0.0;
    core_script_cpp_CScript_setSpeaker_FUN_00504bf0(this_ptr,&param_1->base);
  }
  if (param_1->health_bar_mode == 2) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (0x01C775EC,param_1->descriptive_name,
               (int)(param_1->hit_points / param_1->max_hit_points),2.0);
  }
  if (param_1->render_active == 0) {
    if (param_1->closest_distance_threshold == 9999.0f) {
      iVar5 = 0;
      pCVar6 = param_1;
      do {
        if (pCVar6->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
          core_charactr_cpp_CCharacter_computePickup_FUN_00429010(param_1,iVar5,0.0);
        }
        iVar5 = iVar5 + 1;
        pCVar6 = (CCharacter *)&(pCVar6->base).orient_matrix.m[0].z;
      } while (iVar5 < 2);
    }
    fVar3 = (param_1->base).platform_position_delta.y;
    (param_1->base).platform_position_delta.y = 0.0;
    fVar1 = param_1->closest_distance_threshold;
    (param_1->base).location.position.y = fVar3 + (param_1->base).location.position.y;
    if ((fVar1 == 9999.0f) || ((param_1->base).standing_platform != (CPlatform *)0x0)) {
      fVar3 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                        (&param_1->base,param_1->collision_cylinder_height,(CVector3f *)0x0);
      param_1->closest_distance_threshold = fVar3;
    }
    param_1->is_on_ground =
         (uint)((param_1->base).location.position.y <
               param_1->closest_distance_threshold + (float)0.01);
    (param_1->position_delta).z = 0.0;
    (param_1->position_delta).y = (param_1->position_delta).z;
    (param_1->position_delta).x = (param_1->position_delta).y;
    pCVar2 = (param_1->base).standing_platform;
    param_1->turn_angle_accumulator = 0.0;
    if (((pCVar2 == (CPlatform *)0x0) && (param_1->walk_to_target == (CDemonActor *)0x0)) &&
       (iVar5 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004b4630
                          (&(param_1->base).location.position,param_1->ai_detection_range_max,
                           param_1->ai_detection_range_min), iVar5 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
      return 0;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
