// Name: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
// Address Range: [[005e2430, 005e290c]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_process_FUN_005e2430(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr)

{
  COrientation *pCVar1;
  char *pcVar2;
  uint uVar3;
  CEventList *pCVar4;
  float fVar5;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  byte bVar9;
  float in_stack_00000008;
  float afStackY_186c [1495];
  CVector3f *in_stack_fffffef8;
  float in_stack_fffffefc;
  CQuaternion4f *quat_ptr;
  char *in_stack_ffffff08;
  float fStack_f0;
  char acStack_ec [80];
  CQuaternion4f CStack_9c;
  float fStack_8c;
  CQuaternion4f CStack_88;
  float afStack_78 [4];
  float fStack_68;
  float afStack_64 [2];
  CQuaternion4f CStack_5c;
  float afStack_4c [5];
  CVector3f CStack_38;
  CQuaternion4f *pCStack_2c;
  ulonglong uStack_20;
  COrientation *local_18;
  
  bVar9 = 0;
  iVar6 = this_ptr->state;
  (this_ptr->base_weapon).field7_0x2f4[0] = -1;
  (this_ptr->base_weapon).field7_0x2f4[1] = -1;
  (this_ptr->base_weapon).field7_0x2f4[2] = -1;
  (this_ptr->base_weapon).field7_0x2f4[3] = -1;
  switch(iVar6) {
  case 0:
    pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
    if (pCVar1 != (COrientation *)this_ptr->field1_0x578) {
      pCVar1->pitch = *(float *)this_ptr->field1_0x578;
      (this_ptr->base_weapon).base_actor.orient.bank = *(float *)(this_ptr->field1_0x578 + 4);
      (this_ptr->base_weapon).base_actor.orient.heading = *(float *)(this_ptr->field1_0x578 + 8);
    }
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field3_0x704);
    if (iVar6 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    uVar3 = *(uint *)(this_ptr->field12_0x85c + 0x5c);
    this_ptr->state = 1;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar3);
    in_stack_ffffff08 = "turret-ani?.wav";
    goto LAB_005e24c7;
  case 1:
    fVar5 = this_ptr->timer - in_stack_00000008;
    this_ptr->timer = fVar5;
    if (fVar5 <= 0.0) {
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
    pCVar4 = g_CEventListPtr;
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
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar4,this_ptr->field3_0x704);
    if (iVar6 == 0) {
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
    pCVar4 = g_CEventListPtr;
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
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar4,this_ptr->field3_0x704);
    if (iVar6 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base_weapon).field7_0x2f4[0xc] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xd] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xe] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xf] = '\0';
      break;
    }
    fVar5 = this_ptr->timer - in_stack_00000008;
    this_ptr->timer = fVar5;
    if (0.0 < fVar5) {
      core_turret_cpp_FUN_005e3560();
      break;
    }
    uVar3 = *(uint *)(this_ptr->field12_0x85c + 0x5c);
    this_ptr->state = 4;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar3);
    in_stack_ffffff08 = "turret-ani?.wav";
LAB_005e24c7:
    uVar8 = (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                      ((CDemonActor *)this_ptr,in_stack_ffffff08);
    *(uint *)(this_ptr->field12_0x85c + 0x5c) = uVar8;
    break;
  case 4:
    pcVar2 = this_ptr->field1_0x578;
    uStack_20 = (double)CONCAT44 /* combine 2-byte values */(pcVar2,(uint)uStack_20);
    this_ptr->timer = this_ptr->timer - in_stack_00000008;
    local_18 = &(this_ptr->base_weapon).base_actor.orient;
    if (0.0 < this_ptr->timer) {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CQuaternion4f *)local_18,(CVector3f *)in_stack_ffffff08);
      CStack_9c.z = CStack_5c.z;
      (&fStack_8c)[(uint)bVar9 * -2] = afStack_4c[(uint)bVar9 * -2];
      afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -4] =
           afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (afStack_78 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + -4)[(uint)bVar9 * -2 + 1] =
           (afStack_4c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(pCStack_2c,in_stack_fffffef8);
      CStack_5c.w = CStack_88.z;
      afStack_4c[(uint)bVar9 * -2 + -3] = afStack_78[(uint)bVar9 * -2];
      afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -2] =
           afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (afStack_4c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + -2)[(uint)bVar9 * -2 + 1] =
           (afStack_78 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (&CStack_9c,&CStack_5c,
                 (CQuaternion4f *)
                 ((in_stack_00000008 / (this_ptr->timer + in_stack_00000008)) *
                 (float)2),in_stack_fffffefc);
      quat_ptr = &CStack_88;
      pCVar7 = &CStack_38;
      CStack_88.w = fStack_68;
      afStack_78[(uint)bVar9 * -2 + -3] = afStack_64[(uint)bVar9 * -2];
      afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -2] =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      (afStack_78 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + -2)[(uint)bVar9 * -2 + 1] =
           (afStack_64 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      pCVar7 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar7,quat_ptr);
      if (pCVar7 != uStack_20._4_4_) {
        (uStack_20._4_4_)->x = pCVar7->x;
        (uStack_20._4_4_)->y = pCVar7->y;
        (uStack_20._4_4_)->z = pCVar7->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
      if (local_18 != (COrientation *)pcVar2) {
        local_18->pitch = *(float *)pcVar2;
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
    (*(this_ptr->base_weapon).base_actor.vtable[1].processFootstep)
              ((CDemonActor *)this_ptr,(float)in_stack_ffffff08);
  }
  fVar5 = *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc);
  iVar6 = *(int *)(this_ptr->field12_0x85c + 0x54);
  *(float *)(this_ptr->field12_0x85c + 0x10) =
       *(float *)(this_ptr->field12_0x85c + 0x10) - in_stack_00000008;
  *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc) = fVar5 - in_stack_00000008;
  if ((0 < iVar6) || (0.0 < *(float *)(this_ptr->field12_0x85c + 0x10))) {
    *(int *)(this_ptr->field12_0x85c + 0x54) = *(int *)(this_ptr->field12_0x85c + 0x54) + -1;
    fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
    iVar6 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                      (*(uint *)(this_ptr->field12_0x85c + 0x58),fVar5);
    if (iVar6 == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"turret-loop.wav * %f",(double)fStack_f0);
      uVar8 = (*((this_ptr->base_weapon).base_actor.vtable)->playAmbientSound)
                        ((CDemonActor *)this_ptr,&stack0xffffff0c);
      *(uint *)(this_ptr->field12_0x85c + 0x58) = uVar8;
      return;
    }
  }
  else {
    uStack_20 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,(uint)in_stack_ffffff08);
    if (0.0 <= uStack_20) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field12_0x85c + 0x58));
      (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}
