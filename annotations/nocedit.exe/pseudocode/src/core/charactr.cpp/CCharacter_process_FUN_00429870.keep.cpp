// Name: core_charactr.cpp_CCharacter_process_FUN_00429870
// Address: 00429870
// MANUAL RECONSTRUCTION
// Address Range: [[00429870, 00429a94]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_process_FUN_00429870(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_process_FUN_00429870(CCharacter *this_ptr,float delta_time)

{
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar3;
  CScript *this_ptr_00;
  float fVar1;
  CPlatform *pCVar2;
  
  fVar2 = this_ptr->sound_cooldown - delta_time;
  this_ptr->sound_cooldown = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->sound_cooldown = 0.0;
  }
  core_charactr_cpp_CCharacter_processFire_FUN_0042a830(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_0042d4d0(this_ptr,delta_time);
  fVar2 = this_ptr->stagger_amount - delta_time;
  this_ptr->stagger_amount = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->stagger_amount = 0.0;
  }
  if ((0.0 < this_ptr->speech_timer) &&
     (fVar2 = this_ptr->speech_timer - delta_time, this_ptr->speech_timer = fVar2,
     this_ptr_00 = g_CScriptPtr, fVar2 < 0.0)) {
    this_ptr->speech_timer = 0.0;
    core_script_cpp_CScript_setSpeaker_FUN_00560140(this_ptr_00,&this_ptr->base);
  }
  if (this_ptr->health_bar_mode == 2) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0
              (g_CGamePtr,this_ptr->descriptive_name,
               (int)(this_ptr->hit_points / this_ptr->max_hit_points),2.0);
  }
  if (this_ptr->render_active == 0) {
    if (this_ptr->closest_distance_threshold == 9999.0f) {
      for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
        if (this_ptr->carry_hands[iVar3].carry_actor != (CDemonActor *)0x0) {
          core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr,iVar3,0.0);
        }
      }
    }
    fVar2 = (this_ptr->base).platform_position_delta.y;
    (this_ptr->base).platform_position_delta.y = 0.0;
    fVar1 = this_ptr->closest_distance_threshold;
    (this_ptr->base).location.position.y = fVar2 + (this_ptr->base).location.position.y;
    if ((fVar1 == 9999.0f) || ((this_ptr->base).standing_platform != (CPlatform *)0x0)) {
      fVar3 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                        (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
      this_ptr->closest_distance_threshold = fVar3;
    }
    this_ptr->is_on_ground =
         (uint)((this_ptr->base).location.position.y <
               this_ptr->closest_distance_threshold + (float)0.01);
    (this_ptr->position_delta).x = 0.0;
    (this_ptr->position_delta).y = 0.0;
    (this_ptr->position_delta).z = 0.0;
    pCVar2 = (this_ptr->base).standing_platform;
    this_ptr->turn_angle_accumulator = 0.0;
    if (((pCVar2 == (CPlatform *)0x0) && (this_ptr->walk_to_target == (CDemonActor *)0x0)) &&
       (iVar3 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0
                          (&(this_ptr->base).location.position,this_ptr->ai_detection_range_max,
                           this_ptr->ai_detection_range_min), iVar3 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      return 0;
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}
