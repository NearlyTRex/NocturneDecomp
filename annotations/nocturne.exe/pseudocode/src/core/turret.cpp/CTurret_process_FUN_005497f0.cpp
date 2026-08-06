// Name: core_turret.cpp_CTurret_process_FUN_005497f0
// Address: 005497f0
// Address Range: [[005497f0, 00549ccc]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_process_FUN_005497f0(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005497f0(CTurret *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  float fVar2;
  ETurretState EVar3;
  CEventList *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_186c [1497];
  char *sound_name;
  CQuaternion4f *quat_in;
  float local_f8;
  char local_f4 [100];
  CQuaternion4f local_90;
  CQuaternion4f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_40;
  CVector3f local_30;
  double local_24;
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar10 = 0;
  EVar3 = this_ptr->state;
  (this_ptr->base).muzzle_flash_color.r = -1;
  switch(EVar3) {
  case TURRET_STATE_IDLE:
    pUVar1 = &(this_ptr->base).base.orient;
    if (pUVar1 != &this_ptr->home_orient) {
      (pUVar1->vec).x = (this_ptr->home_orient).vec.x;
      (this_ptr->base).base.orient.vec.y = (this_ptr->home_orient).vec.y;
      (this_ptr->base).base.orient.vec.z = (this_ptr->home_orient).vec.z;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar7 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_CHARGING;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_00527230(uVar7);
    sound_name = "turret-ani?.wav";
    goto LAB_00549887;
  case TURRET_STATE_CHARGING:
    fVar2 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->timer = 0.0;
      this_ptr->state = TURRET_STATE_ACTIVE;
      (this_ptr->base).fire_cooldown_timer = 0.0;
    }
    break;
  case TURRET_STATE_ACTIVE:
    (this_ptr->base).muzzle_flash_color.r = 0xff;
    pCVar4 = 0x01C03A10;
    (this_ptr->base).muzzle_flash_color.g = 0;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (pCVar4,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->state = TURRET_STATE_PATROL;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(this_ptr,delta_time);
      this_ptr->timer = 0.0;
    }
    break;
  case TURRET_STATE_PATROL:
    (this_ptr->base).muzzle_flash_color.r = 0;
    pCVar4 = 0x01C03A10;
    (this_ptr->base).muzzle_flash_color.g = 0xff;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (pCVar4,this_ptr->activate_event);
    if (iVar5 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = TURRET_STATE_ACTIVE;
      (this_ptr->base).fire_cooldown_timer = 0.0;
      break;
    }
    fVar2 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar2;
    if (0.0 < fVar2) {
      core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(this_ptr,delta_time);
      break;
    }
    uVar7 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_POWERING_DOWN;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_00527230(uVar7);
    sound_name = "turret-ani?.wav";
LAB_00549887:
    uVar7 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[1] = uVar7;
    break;
  case TURRET_STATE_POWERING_DOWN:
    local_1c = (CVector3f *)&this_ptr->home_orient;
    this_ptr->timer = this_ptr->timer - delta_time;
    local_18 = (CVector3f *)&(this_ptr->base).base.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_0055d610(local_18,&local_40);
      local_90.w = local_40.w;
      puVar9 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&local_40 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_40 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_eulerToQuaternion_FUN_0055d610(local_1c,&local_70);
      local_50.w = local_70.w;
      puVar9 = (uint *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_50 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (&local_90,&local_50,
                 (delta_time / (this_ptr->timer + delta_time)) * (float)2,&local_60);
      quat_in = &local_80;
      pCVar6 = &local_30;
      local_80.w = local_60.w;
      puVar9 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(pCVar6,quat_in);
      if (pCVar6 != local_18) {
        local_18->x = pCVar6->x;
        local_18->y = pCVar6->y;
        local_18->z = pCVar6->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = TURRET_STATE_IDLE;
      this_ptr->timer = 0.0;
      if (local_18 != local_1c) {
        local_18->x = local_1c->x;
        (this_ptr->base).base.orient.vec.y = (this_ptr->home_orient).vec.y;
        (this_ptr->base).base.orient.vec.z = (this_ptr->home_orient).vec.z;
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 346;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CTurret::process - invalid state");
  }
  if (-1 < (this_ptr->base).muzzle_flash_color.r) {
    (*(((this_ptr->base).base.vtable._uc)->_uc).releaseFromGrab)((CCharacter *)this_ptr);
  }
  fVar2 = (this_ptr->base).fire_cooldown_timer;
  iVar5 = this_ptr->fire_sound_frames;
  this_ptr->fire_sound_timer = this_ptr->fire_sound_timer - delta_time;
  (this_ptr->base).fire_cooldown_timer = fVar2 - delta_time;
  if ((0 < iVar5) || (0.0 < this_ptr->fire_sound_timer)) {
    this_ptr->fire_sound_frames = this_ptr->fire_sound_frames + -1;
    local_f8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.9,1.1111112);
    local_14 = local_f8;
    iVar5 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(this_ptr->sfx_handles[0],local_f8);
    if (iVar5 == 0) {
      _sprintf(local_f4,"turret-loop.wav * %f",(double)local_f8);
      uVar7 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,local_f4);
      this_ptr->sfx_handles[0] = uVar7;
      return;
    }
  }
  else {
    local_24 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(this_ptr->sfx_handles[0],2);
    if (0.0 <= local_24) {
      sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
