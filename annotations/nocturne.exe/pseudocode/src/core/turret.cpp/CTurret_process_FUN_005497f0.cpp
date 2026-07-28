// Name: core_turret.cpp_CTurret_process_FUN_005497f0
// Address: 005497f0
// Address Range: [[005497f0, 00549ccc]]
// Convention: unknown
// Signature: void core_turret_cpp_CTurret_process_FUN_005497f0(CTurret *param_1,float param_2)

#include "nocturne.h"

void core_turret_cpp_CTurret_process_FUN_005497f0(CTurret *param_1,float param_2)

{
  UOrientationVector *pUVar1;
  float fVar2;
  ETurretState EVar3;
  CEventList *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_186c [1497];
  char *sound_name;
  CQuaternion4f *quat_in;
  float local_f8;
  char local_f4 [100];
  uint local_90;
  float afStack_8c [3];
  CQuaternion4f local_80;
  uint local_70;
  float afStack_6c [7];
  float local_50 [4];
  uint local_40;
  CVector3f local_30;
  double local_24;
  UOrientationVector *local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar9 = 0;
  EVar3 = param_1->state;
  (param_1->base).muzzle_flash_color.r = -1;
  switch(EVar3) {
  case TURRET_STATE_IDLE:
    pUVar1 = &(param_1->base).base.orient;
    if (pUVar1 != &param_1->home_orient) {
      (pUVar1->vec).x = (param_1->home_orient).vec.x;
      (param_1->base).base.orient.vec.y = (param_1->home_orient).vec.y;
      (param_1->base).base.orient.vec.z = (param_1->home_orient).vec.z;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->activate_event);
    if (iVar5 == 0) {
      param_1->timer = 0.0;
      break;
    }
    uVar7 = param_1->sfx_handles[1];
    param_1->state = TURRET_STATE_CHARGING;
    param_1->timer = param_1->charge_time;
    sound_sndmain_cpp_killSfx_FUN_00527230(uVar7);
    sound_name = "turret-ani?.wav";
    goto LAB_00549887;
  case TURRET_STATE_CHARGING:
    fVar2 = param_1->timer - param_2;
    param_1->timer = fVar2;
    if (fVar2 <= 0.0) {
      param_1->timer = 0.0;
      param_1->state = TURRET_STATE_ACTIVE;
      (param_1->base).fire_cooldown_timer = 0.0;
    }
    break;
  case TURRET_STATE_ACTIVE:
    (param_1->base).muzzle_flash_color.r = 0xff;
    pCVar4 = 0x01C03A10;
    (param_1->base).muzzle_flash_color.g = 0;
    (param_1->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(pCVar4,param_1->activate_event)
    ;
    if (iVar5 == 0) {
      param_1->state = TURRET_STATE_PATROL;
      param_1->timer = param_1->patrol_time;
    }
    else {
      core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(param_1,param_2);
      param_1->timer = 0.0;
    }
    break;
  case TURRET_STATE_PATROL:
    (param_1->base).muzzle_flash_color.r = 0;
    pCVar4 = 0x01C03A10;
    (param_1->base).muzzle_flash_color.g = 0xff;
    (param_1->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(pCVar4,param_1->activate_event)
    ;
    if (iVar5 != 0) {
      param_1->timer = 0.0;
      param_1->state = TURRET_STATE_ACTIVE;
      (param_1->base).fire_cooldown_timer = 0.0;
      break;
    }
    fVar2 = param_1->timer - param_2;
    param_1->timer = fVar2;
    if (0.0 < fVar2) {
      core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(param_1,param_2);
      break;
    }
    uVar7 = param_1->sfx_handles[1];
    param_1->state = TURRET_STATE_POWERING_DOWN;
    param_1->timer = param_1->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_00527230(uVar7);
    sound_name = "turret-ani?.wav";
LAB_00549887:
    uVar7 = (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,sound_name);
    param_1->sfx_handles[1] = uVar7;
    break;
  case TURRET_STATE_POWERING_DOWN:
    local_1c = &param_1->home_orient;
    param_1->timer = param_1->timer - param_2;
    local_18 = (CVector3f *)&(param_1->base).base.orient;
    if (0.0 < param_1->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_0055d610();
      local_90 = local_40;
      afStack_8c[(uint)bVar9 * -2] = afStack_6c[(uint)bVar9 * -2 + 0xc];
      afStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      (afStack_8c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_eulerToQuaternion_FUN_0055d610();
      local_50[0] = (float)local_70;
      afStack_6c[(uint)bVar9 * -2 + 8] = afStack_6c[(uint)bVar9 * -2];
      afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
           afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1] =
           (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0(&local_90,afStack_6c + 7);
      quat_in = &local_80;
      pCVar6 = &local_30;
      local_80.w = afStack_6c[3];
      pfVar8 = (float *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(float *)((int)&local_80 + (uint)bVar9 * -8 + 4) = afStack_6c[(uint)bVar9 * -2 + 4];
      *pfVar8 = afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      pfVar8[(uint)bVar9 * -2 + 1] =
           (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(pCVar6,quat_in);
      if (pCVar6 != local_18) {
        local_18->x = pCVar6->x;
        local_18->y = pCVar6->y;
        local_18->z = pCVar6->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    }
    else {
      param_1->state = TURRET_STATE_IDLE;
      param_1->timer = 0.0;
      if (local_18 != (CVector3f *)local_1c) {
        local_18->x = (local_1c->vec).x;
        (param_1->base).base.orient.vec.y = (param_1->home_orient).vec.y;
        (param_1->base).base.orient.vec.z = (param_1->home_orient).vec.z;
      }
    }
    break;
  default:
    PTR_01cc4800 = "..\\core\\turret.cpp";
    INT_01cc4804 = 0x15a;
    core_main_c_FUN_004c8440();
  }
  if (-1 < (param_1->base).muzzle_flash_color.r) {
    (*((param_1->base).base.vtable._ub)->archive)((CDemonActor *)param_1);
  }
  fVar2 = (param_1->base).fire_cooldown_timer;
  iVar5 = param_1->fire_sound_frames;
  param_1->fire_sound_timer = param_1->fire_sound_timer - param_2;
  (param_1->base).fire_cooldown_timer = fVar2 - param_2;
  if ((0 < iVar5) || (0.0 < param_1->fire_sound_timer)) {
    param_1->fire_sound_frames = param_1->fire_sound_frames + -1;
    local_f8 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666);
    local_14 = local_f8;
    iVar5 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(param_1->sfx_handles[0],local_f8);
    if (iVar5 == 0) {
      _sprintf(local_f4,"turret-loop.wav * %f",(double)local_f8);
      uVar7 = (*((param_1->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)param_1,local_f4);
      param_1->sfx_handles[0] = uVar7;
      return;
    }
  }
  else {
    local_24 = (double)sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10
                                 (param_1->sfx_handles[0]);
    if (0.0 <= local_24) {
      sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[0]);
      (*((param_1->base).base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"turret-tail.wav");
      return;
    }
  }
  return;
}
