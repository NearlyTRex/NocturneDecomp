// Name: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
// Address Range: [[005e2430, 005e290c]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_process_FUN_005e2430(CTurret * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  uint uVar2;
  CEventList *pCVar3;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  iVar5 = this_ptr->state;
  (this_ptr->base_weapon).field7_0x2f4[0] = -1;
  (this_ptr->base_weapon).field7_0x2f4[1] = -1;
  (this_ptr->base_weapon).field7_0x2f4[2] = -1;
  (this_ptr->base_weapon).field7_0x2f4[3] = -1;
  switch(iVar5) {
  case 0:
    pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
    if (pCVar1 != (COrientation *)this_ptr->field1_0x578) {
      pCVar1->pitch = *(float *)this_ptr->field1_0x578;
      (this_ptr->base_weapon).base_actor.orient.bank = *(float *)(this_ptr->field1_0x578 + 4);
      (this_ptr->base_weapon).base_actor.orient.heading = *(float *)(this_ptr->field1_0x578 + 8);
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field3_0x704);
    if (iVar5 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar2 = *(uint *)(this_ptr->field12_0x85c + 0x5c);
    this_ptr->state = 1;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar2);
    sound_name = "turret-ani?.wav";
    goto LAB_005e24c7;
  case 1:
    fVar4 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar4;
    if (fVar4 <= 0.0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base_weapon).field7_0x2f4[0xc] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xd] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xe] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xf] = '\0';
    }
    break;
  case 2:
    (this_ptr->base_weapon).field7_0x2f4[0] = -1;
    pCVar3 = g_CEventListPtr;
    (this_ptr->base_weapon).field7_0x2f4[1] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[2] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[3] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[4] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[5] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[6] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[7] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[8] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[9] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[10] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[0xb] = '\0';
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar3,this_ptr->field3_0x704);
    if (iVar5 == 0) {
      this_ptr->state = 3;
      this_ptr->timer = this_ptr->patrol_time;
    }
    else {
      core_turret_cpp_FUN_005e2d50();
      this_ptr->timer = 0.0;
    }
    break;
  case 3:
    (this_ptr->base_weapon).field7_0x2f4[0] = '\0';
    pCVar3 = g_CEventListPtr;
    (this_ptr->base_weapon).field7_0x2f4[1] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[2] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[3] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[4] = -1;
    (this_ptr->base_weapon).field7_0x2f4[5] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[6] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[7] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[8] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[9] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[10] = '\0';
    (this_ptr->base_weapon).field7_0x2f4[0xb] = '\0';
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar3,this_ptr->field3_0x704);
    if (iVar5 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base_weapon).field7_0x2f4[0xc] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xd] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xe] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xf] = '\0';
      break;
    }
    fVar4 = this_ptr->timer - delta_time;
    this_ptr->timer = fVar4;
    if (0.0 < fVar4) {
      core_turret_cpp_FUN_005e3560();
      break;
    }
    uVar2 = *(uint *)(this_ptr->field12_0x85c + 0x5c);
    this_ptr->state = 4;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar2);
    sound_name = "turret-ani?.wav";
LAB_005e24c7:
    uVar7 = (*((this_ptr->base_weapon).base_actor.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,sound_name);
    *(uint *)(this_ptr->field12_0x85c + 0x5c) = uVar7;
    break;
  case 4:
    local_1c = (CVector3f *)this_ptr->field1_0x578;
    this_ptr->timer = this_ptr->timer - delta_time;
    local_18 = (CVector3f *)&(this_ptr->base_weapon).base_actor.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_18,&local_40);
      local_90.w = local_40.w;
      puVar8 = (uint *)((int)&local_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_90 + (uint)bVar10 * -8 + 4) =
           *(uint *)(local_30 + (uint)bVar10 * -8 + -0xc);
      *puVar8 = *(uint *)(local_30 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
      puVar8[(uint)bVar10 * -2 + 1] =
           *(uint *)
            ((int)(local_30 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
            ((uint)bVar10 * -2 + 1) * 4);
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(local_1c,&local_70);
      local_50.w = local_70.w;
      puVar9 = (uint *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_50 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (&local_90,&local_50,
                 (delta_time / (this_ptr->timer + delta_time)) * (float)2,&local_60);
      pCVar6 = &local_80;
      quat_in = (CQuaternion4f *)local_30;
      local_80.x = local_60.w;
      puVar9 = (uint *)((int)&local_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      puVar8 = (uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&local_80 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4);
      *puVar9 = *puVar8;
      puVar9[(uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
      pCVar6 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(quat_in,pCVar6);
      if (pCVar6 != local_18) {
        local_18->x = pCVar6->x;
        local_18->y = pCVar6->y;
        local_18->z = pCVar6->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
      if (local_18 != local_1c) {
        ((COrientation *)local_18)->pitch = *(float *)local_1c;
        (this_ptr->base_weapon).base_actor.orient.bank = *(float *)(this_ptr->field1_0x578 + 4);
        (this_ptr->base_weapon).base_actor.orient.heading = *(float *)(this_ptr->field1_0x578 + 8);
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\turret.cpp";
    g_CurrentLineNumber = 0x15a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTurret::process - invalid state");
  }
  if (-1 < *(int *)(this_ptr->base_weapon).field7_0x2f4) {
    (*(((this_ptr->base_weapon).base_actor.vtable._uc)->_uc).cfunc7)();
  }
  fVar4 = *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc);
  iVar5 = *(int *)(this_ptr->field12_0x85c + 0x54);
  *(float *)(this_ptr->field12_0x85c + 0x10) =
       *(float *)(this_ptr->field12_0x85c + 0x10) - delta_time;
  *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc) = fVar4 - delta_time;
  if ((0 < iVar5) || (0.0 < *(float *)(this_ptr->field12_0x85c + 0x10))) {
    *(int *)(this_ptr->field12_0x85c + 0x54) = *(int *)(this_ptr->field12_0x85c + 0x54) + -1;
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
    local_14 = fVar4;
    iVar5 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                      (*(uint *)(this_ptr->field12_0x85c + 0x58),fVar4);
    if (iVar5 == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_f4,"turret-loop.wav * %f",(double)fVar4);
      uVar7 = (*((this_ptr->base_weapon).base_actor.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,local_f4);
      *(uint *)(this_ptr->field12_0x85c + 0x58) = uVar7;
      return;
    }
  }
  else {
    local_30._12_8_ = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_ffffff08);
    if (0.0 <= (double)local_30._12_8_) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field12_0x85c + 0x58));
      (*((this_ptr->base_weapon).base_actor.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
