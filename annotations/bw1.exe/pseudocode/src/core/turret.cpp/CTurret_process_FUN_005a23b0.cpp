// Name: core_turret.cpp_CTurret_process_FUN_005a23b0
// Address: 005a23b0
// Address Range: [[005a23b0, 005a28b0]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_process_FUN_005a23b0(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005a23b0(CTurret *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  float fVar2;
  ETurretState EVar3;
  CEventList *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_187c [1497];
  char *sound_name;
  float fStack_108;
  char acStack_104 [100];
  CQuaternion4f CStack_a0;
  CQuaternion4f CStack_90;
  CQuaternion4f CStack_80;
  CQuaternion4f CStack_70;
  CQuaternion4f CStack_60;
  CQuaternion4f CStack_50;
  CVector3f CStack_40;
  CVector3f CStack_34;
  double dStack_28;
  CVector3f *pCStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  
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
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventListPtr,this_ptr->activate_event);
    if (iVar6 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar7 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_CHARGING;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_00573a80(uVar7);
    sound_name = "turret-ani?.wav";
    goto LAB_005a2447;
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
    pCVar4 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_color.g = 0;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (pCVar4,this_ptr->activate_event);
    if (iVar6 == 0) {
      this_ptr->state = TURRET_STATE_PATROL;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_CTurret_updateTargeting_FUN_005a2d00(this_ptr,delta_time);
      this_ptr->timer = 0.0;
    }
    break;
  case TURRET_STATE_PATROL:
    (this_ptr->base).muzzle_flash_color.r = 0;
    pCVar4 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_color.g = 0xff;
    (this_ptr->base).muzzle_flash_color.b = 0;
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (pCVar4,this_ptr->activate_event);
    if (iVar6 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = TURRET_STATE_ACTIVE;
      (this_ptr->base).fire_cooldown_timer = 0.0;
      break;
    }
    fVar2 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar2;
    if (0.0 < fVar2) {
      core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(this_ptr,delta_time);
      break;
    }
    uVar7 = this_ptr->sfx_handles[1];
    this_ptr->state = TURRET_STATE_POWERING_DOWN;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_00573a80(uVar7);
    sound_name = "turret-ani?.wav";
LAB_005a2447:
    uVar7 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[1] = uVar7;
    break;
  case TURRET_STATE_POWERING_DOWN:
    pCStack_20 = (CVector3f *)&this_ptr->home_orient;
    this_ptr->timer = this_ptr->timer - delta_time;
    pCStack_1c = (CVector3f *)&(this_ptr->base).base.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(pCStack_1c,&CStack_a0);
      CStack_80.w = CStack_a0.w;
      puVar9 = (uint *)((int)&CStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&CStack_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&CStack_80 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_a0 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(pCStack_20,&CStack_90);
      CStack_70.w = CStack_90.w;
      puVar9 = (uint *)((int)&CStack_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&CStack_70 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_90 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (&CStack_80,&CStack_70,
                 (delta_time / (this_ptr->timer + delta_time)) * (float)2,&CStack_60
                );
      CStack_50.w = CStack_60.w;
      puVar9 = (uint *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&CStack_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_60 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_quaternionToEulerAngles_FUN_005b7c00(&CStack_50,&CStack_40);
      pCVar5 = pCStack_1c;
      CStack_34.x = CStack_40.x;
      *(uint *)((int)&CStack_34 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_34 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if (&CStack_34 != pCVar5) {
        pCVar5->x = CStack_34.x;
        pCVar5->y = CStack_34.y;
        pCVar5->z = CStack_34.z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = TURRET_STATE_IDLE;
      this_ptr->timer = 0.0;
      if (pCStack_1c != pCStack_20) {
        pCStack_1c->x = pCStack_20->x;
        (this_ptr->base).base.orient.vec.y = (this_ptr->home_orient).vec.y;
        (this_ptr->base).base.orient.vec.z = (this_ptr->home_orient).vec.z;
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 346;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CTurret::process - invalid state");
  }
  if (-1 < (this_ptr->base).muzzle_flash_color.r) {
    (*(((this_ptr->base).base.vtable._uc)->_uc).releaseFromGrab)((CCharacter *)this_ptr);
  }
  fVar2 = (this_ptr->base).fire_cooldown_timer;
  iVar6 = this_ptr->fire_sound_frames;
  this_ptr->fire_sound_timer = this_ptr->fire_sound_timer - delta_time;
  (this_ptr->base).fire_cooldown_timer = fVar2 - delta_time;
  if ((0 < iVar6) || (0.0 < this_ptr->fire_sound_timer)) {
    this_ptr->fire_sound_frames = this_ptr->fire_sound_frames + -1;
    fStack_108 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1111112);
    fStack_18 = fStack_108;
    iVar6 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00573980(this_ptr->sfx_handles[0],fStack_108);
    if (iVar6 == 0) {
      _sprintf(acStack_104,"turret-loop.wav * %f");
      uVar7 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,acStack_104);
      this_ptr->sfx_handles[0] = uVar7;
      return;
    }
  }
  else {
    dStack_28 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00573660(this_ptr->sfx_handles[0],2);
    if (0.0 <= dStack_28) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
