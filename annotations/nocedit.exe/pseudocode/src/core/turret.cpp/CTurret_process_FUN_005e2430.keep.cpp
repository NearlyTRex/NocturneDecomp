// Name: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
// MANUAL RECONSTRUCTION
// Address Range: [[00599617, 00599662] [005e2430, 005e290c] [0060e3f4, 0060e415]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)

{
  ETurretState EVar1;
  CEventList *this_ptr_00;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar5;
  uint uVar6;
  char local_f4 [100];
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_40;
  CVector3f local_30;
  double local_30_playback_pos;
  CVector3f *local_1c;
  CVector3f *local_18;
  CEventList *pCVar3;
  float fVar2;
  char *sound_name;
  UOrientationVector *pUVar1;
  float local_14;
  
  EVar1 = this_ptr->state;
  (this_ptr->base).muzzle_flash_color.r = -1;
  switch(EVar1) {
  case TURRET_STATE_IDLE:
    pUVar1 = &(this_ptr->base).base.orient;
    if (pUVar1 != &this_ptr->home_orient) {
      pUVar1->vec = (this_ptr->home_orient).vec;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar2 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_CHARGING;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar2);
    sound_name = "turret-ani?.wav";
    goto LAB_005e24c7;
  case TURRET_STATE_CHARGING:
    fVar3 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar3;
    if (fVar3 <= 0.0) {
      this_ptr->timer = 0.0;
      this_ptr->state = TURRET_STATE_ACTIVE;
      (this_ptr->base).fire_cooldown_timer = 0.0;
    }
    break;
  case TURRET_STATE_ACTIVE:
    (this_ptr->base).muzzle_flash_color.r = 0xff;
    pCVar3 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_color.g = 0;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (pCVar3,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->state = TURRET_STATE_PATROL;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_CTurret_updateTargeting_FUN_005e2d50(this_ptr,delta_time);
      this_ptr->timer = 0.0;
    }
    break;
  case TURRET_STATE_PATROL:
    (this_ptr->base).muzzle_flash_color.r = 0;
    this_ptr_00 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_color.g = 0xff;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (this_ptr_00,this_ptr->activate_event);
    if (iVar5 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = TURRET_STATE_ACTIVE;
      (this_ptr->base).fire_cooldown_timer = 0.0;
      break;
    }
    fVar3 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar3;
    if (0.0 < fVar3) {
      core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(this_ptr,delta_time);
      break;
    }
    uVar2 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_POWERING_DOWN;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar2);
    sound_name = "turret-ani?.wav";
LAB_005e24c7:
    uVar2 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[1] = uVar2;
    break;
  case TURRET_STATE_POWERING_DOWN:
    local_1c = (CVector3f *)&this_ptr->home_orient;
    this_ptr->timer = this_ptr->timer - delta_time;
    local_18 = (CVector3f *)&(this_ptr->base).base.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_18,&local_40);
      local_90 = local_40;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_1c,&local_70);
      local_50 = local_70;
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (&local_90,&local_50,
                 (delta_time / (this_ptr->timer + delta_time)) * (float)2,&local_60);
      local_80 = local_60;
      pCVar5 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                         (&local_30,&local_80);
      if (pCVar5 != local_18) {
        *local_18 = *pCVar5;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = TURRET_STATE_IDLE;
      this_ptr->timer = 0.0;
      if (local_18 != local_1c) {
        *local_18 = *local_1c;
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 346;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::process - invalid state");
  }
  if (-1 < (this_ptr->base).muzzle_flash_color.r) {
    (*(((this_ptr->base).base.vtable._uw)->_uw).fireProjectile)(&this_ptr->base);
  }
  fVar2 = (this_ptr->base).fire_cooldown_timer;
  iVar5 = this_ptr->fire_sound_frames;
  this_ptr->fire_sound_timer = this_ptr->fire_sound_timer - delta_time;
  (this_ptr->base).fire_cooldown_timer = fVar2 - delta_time;
  if ((0 < iVar5) || (0.0 < this_ptr->fire_sound_timer)) {
    this_ptr->fire_sound_frames = this_ptr->fire_sound_frames + -1;
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.9,1.1111112);
    local_14 = fVar3;
    iVar4 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_handles[0],fVar3);
    if (iVar4 == 0) {
      _sprintf(local_f4,"turret-loop.wav * %f",(double)fVar3);
      uVar6 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,local_f4);
      this_ptr->sfx_handles[0] = uVar6;
      return;
    }
  }
  else {
    local_30_playback_pos =
         sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(this_ptr->sfx_handles[0],2);
    if (0.0 <= local_30_playback_pos) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
