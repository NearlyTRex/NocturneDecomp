// Name: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
// Address Range: [[005e2430, 005e290c]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CEventList *pCVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint auStackY_186c [1497];
  CQuaternion4f *quat_in;
  char *sound_name;
  uint in_stack_ffffff08;
  char local_f4 [100];
  CQuaternion4f local_90;
  CVector3f local_80;
  CQuaternion4f local_70;
  CQuaternion4f local_60;
  CQuaternion4f local_50;
  CQuaternion4f local_40;
  byte local_30 [20];
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar9 = 0;
  iVar4 = this_ptr->state;
  (this_ptr->base).muzzle_flash_offset.x = -NAN;
  switch(iVar4) {
  case 0:
    pUVar1 = &(this_ptr->base).base.orient;
    if (pUVar1 != &this_ptr->home_orient) {
      (pUVar1->vec).x = (this_ptr->home_orient).vec.x;
      (this_ptr->base).base.orient.vec.y = (this_ptr->home_orient).vec.y;
      (this_ptr->base).base.orient.vec.z = (this_ptr->home_orient).vec.z;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->activate_event);
    if (iVar4 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar6 = this_ptr->sfx_handles[1];
    this_ptr->state = 1;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar6);
    sound_name = "turret-ani?.wav";
    goto LAB_005e24c7;
  case 1:
    fVar3 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar3;
    if (fVar3 <= 0.0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base).fire_cooldown_timer = 0.0;
    }
    break;
  case 2:
    (this_ptr->base).muzzle_flash_offset.x = 3.57331e-43;
    pCVar2 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_offset.y = 0.0;
    (this_ptr->base).muzzle_flash_offset.z = 0.0;
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (pCVar2,this_ptr->activate_event);
    if (iVar4 == 0) {
      this_ptr->state = 3;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_CTurret_FUN_005e2d50(this_ptr);
      this_ptr->timer = 0.0;
    }
    break;
  case 3:
    (this_ptr->base).muzzle_flash_offset.x = 0.0;
    pCVar2 = g_CEventListPtr;
    (this_ptr->base).muzzle_flash_offset.y = 3.57331e-43;
    (this_ptr->base).muzzle_flash_offset.z = 0.0;
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (pCVar2,this_ptr->activate_event);
    if (iVar4 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base).fire_cooldown_timer = 0.0;
      break;
    }
    fVar3 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar3;
    if (0.0 < fVar3) {
      core_turret_cpp_CTurret_FUN_005e3560(this_ptr);
      break;
    }
    uVar6 = this_ptr->sfx_handles[1];
    this_ptr->state = 4;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar6);
    sound_name = "turret-ani?.wav";
LAB_005e24c7:
    uVar6 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[1] = uVar6;
    break;
  case 4:
    local_1c = (CVector3f *)&this_ptr->home_orient;
    this_ptr->timer = this_ptr->timer - delta_time;
    local_18 = (CVector3f *)&(this_ptr->base).base.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_18,&local_40);
      local_90.w = local_40.w;
      puVar7 = (uint *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_90 + (uint)bVar9 * -8 + 4) =
           *(uint *)(local_30 + (uint)bVar9 * -8 + -0xc);
      *puVar7 = *(uint *)(local_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8);
      puVar7[(uint)bVar9 * -2 + 1] =
           *(uint *)
            ((int)(local_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4
            );
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_1c,&local_70);
      local_50.w = local_70.w;
      puVar8 = (uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar7 = (uint *)((int)&local_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar9 * -8 + 4);
      *puVar8 = *puVar7;
      puVar8[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (&local_90,&local_50,
                 (delta_time / (this_ptr->timer + delta_time)) * (float)2,&local_60);
      pCVar5 = &local_80;
      quat_in = (CQuaternion4f *)local_30;
      local_80.x = local_60.w;
      puVar8 = (uint *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar7 = (uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4);
      *puVar8 = *puVar7;
      puVar8[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
      pCVar5 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(quat_in,pCVar5);
      if (pCVar5 != local_18) {
        local_18->x = pCVar5->x;
        local_18->y = pCVar5->y;
        local_18->z = pCVar5->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = 0;
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
    g_CurrentLineNumber = 0x15a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::process - invalid state");
  }
  if (-1 < (int)(this_ptr->base).muzzle_flash_offset.x) {
    (*(((this_ptr->base).base.vtable._uc)->_uc).releaseFromGrab)((CCharacter *)this_ptr);
  }
  fVar3 = (this_ptr->base).fire_cooldown_timer;
  iVar4 = this_ptr->fire_sound_frames;
  this_ptr->fire_sound_timer = this_ptr->fire_sound_timer - delta_time;
  (this_ptr->base).fire_cooldown_timer = fVar3 - delta_time;
  if ((0 < iVar4) || (0.0 < this_ptr->fire_sound_timer)) {
    this_ptr->fire_sound_frames = this_ptr->fire_sound_frames + -1;
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
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
    local_30._12_8_ = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_ffffff08);
    if (0.0 <= (double)local_30._12_8_) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
      (*((this_ptr->base).base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
