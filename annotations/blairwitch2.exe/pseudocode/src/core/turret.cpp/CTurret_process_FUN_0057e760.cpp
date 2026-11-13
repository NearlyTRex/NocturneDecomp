// Name: core_turret.cpp_CTurret_process_FUN_0057e760
// Address: 0057e760
// Address Range: [[0057e760, 0057e791] [0057e80a, 0057e8b5] [0057eba4, 0057ec60]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_process_FUN_0057e760(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_process_FUN_0057e760(CTurret *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  float fVar2;
  ETurretState EVar3;
  CEventList *pCVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float afStackY_187c [1497];
  char *sound_name;
  float fStack_108;
  char acStack_104 [100];
  uint uStack_a0;
  uint auStack_9c [7];
  uint auStack_80 [4];
  uint auStack_70 [4];
  uint uStack_60;
  uint uStack_50;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  double dStack_28;
  UOrientationVector *pUStack_20;
  UOrientationVector *pUStack_1c;
  float fStack_18;
  
  bVar7 = 0;
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
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar6 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_CHARGING;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_00551050(uVar6);
    sound_name = "?turret-ani?.wav" + 1;
    goto LAB_0057e7f7;
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
    pCVar4 = 0x01C38BC0;
    (this_ptr->base).muzzle_flash_color.g = 0;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (pCVar4,this_ptr->activate_event);
    if (iVar5 == 0) {
      this_ptr->state = TURRET_STATE_PATROL;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_FUN_0057f0b0(this_ptr);
      this_ptr->timer = 0.0;
    }
    break;
  case TURRET_STATE_PATROL:
    (this_ptr->base).muzzle_flash_color.r = 0;
    pCVar4 = 0x01C38BC0;
    (this_ptr->base).muzzle_flash_color.g = 0xff;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
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
      core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00(this_ptr,delta_time);
      break;
    }
    uVar6 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_POWERING_DOWN;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_00551050(uVar6);
    sound_name = "turret-ani?.wav";
LAB_0057e7f7:
    uVar6 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[1] = uVar6;
    break;
  case TURRET_STATE_POWERING_DOWN:
    pUStack_20 = &this_ptr->home_orient;
    this_ptr->timer = this_ptr->timer - delta_time;
    pUStack_1c = &(this_ptr->base).base.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_FUN_00594380();
      auStack_80[0] = uStack_a0;
      auStack_9c[(uint)bVar7 * -2 + 8] = auStack_9c[(uint)bVar7 * -2];
      auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
           auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1] =
           (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_00594380();
      auStack_70[0] = auStack_9c[3];
      auStack_9c[(uint)bVar7 * -2 + 0xc] = auStack_9c[(uint)bVar7 * -2 + 4];
      auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
      (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1] =
           (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0(auStack_9c + 7,auStack_9c + 0xb);
      uStack_50 = uStack_60;
      auStack_9c[(uint)bVar7 * -2 + 0x14] = auStack_9c[(uint)bVar7 * -2 + 0x10];
      auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15] =
           auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
      (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15)[(uint)bVar7 * -2 + 1] =
           (auStack_9c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_005940b0();
      pUVar1 = pUStack_1c;
      fStack_34 = fStack_40;
      auStack_9c[(uint)bVar7 * -2 + 0x1b] = auStack_9c[(uint)bVar7 * -2 + 0x18];
      auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
           auStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
      if ((UOrientationVector *)(auStack_9c + 0x1a) != pUVar1) {
        (pUVar1->vec).x = fStack_34;
        (pUVar1->vec).y = fStack_30;
        (pUVar1->vec).z = fStack_2c;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = TURRET_STATE_IDLE;
      this_ptr->timer = 0.0;
      if (pUStack_1c != pUStack_20) {
        (pUStack_1c->vec).x = (pUStack_20->vec).x;
        (this_ptr->base).base.orient.vec.y = (this_ptr->home_orient).vec.y;
        (this_ptr->base).base.orient.vec.z = (this_ptr->home_orient).vec.z;
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\turret.cpp";
    _DAT_01d046a4 = 0x15a;
    core_main_c_FUN_004e4500();
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
    fStack_108 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.1111112);
    fStack_18 = fStack_108;
    iVar5 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(this_ptr->sfx_handles[0],fStack_108);
    if (iVar5 == 0) {
      _sprintf(acStack_104,"turret-loop.wav * %f");
      uVar6 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,acStack_104);
      this_ptr->sfx_handles[0] = uVar6;
      return;
    }
  }
  else {
    dStack_28 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(this_ptr->sfx_handles[0],2);
    if (0.0 <= dStack_28) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
