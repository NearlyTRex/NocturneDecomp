// Name: core_turret.cpp_CTurret_process_FUN_005e2430
// Address: 005e2430
// Address Range: [[005e2430, 005e290c]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_process_FUN_005e2430(CTurret * this_ptr)
// Globals:
//   void* switchdataD_005e241c = 005e2462
//   undefined4 s_turret-ani?.wav_00656600
//   TerminatedCString s_turret_ani_wav_00656610
//   TerminatedCString s_core_turret_cpp_00656620
//   TerminatedCString s_CTurret_process_invalid__00656633
//   TerminatedCString s_turret_loop_wav_f_00656654
//   TerminatedCString s_turret_tail_wav_00656669
//   undefined4 DAT_00656680
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_turret.cpp_FUN_005e2d50
//   core_turret.cpp_FUN_005e3560
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_sndmain.cpp_FUN_005a9720
//   sound_sndmain.cpp_FUN_005a9b40
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr)

{
  COrientation *pCVar1;
  CEventList *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  undefined4 uVar5;
  BADSPACEBASE *in_ESP;
  byte bVar6;
  float in_stack_00000008;
  float afStackY_186c [1496];
  CVector3f *in_stack_fffffefc;
  float fVar7;
  CQuaternion4f *quat_ptr;
  CVector3f *in_stack_ffffff08;
  char *in_stack_ffffff0c;
  float in_stack_ffffff14;
  char acStack_e8 [4];
  char acStack_e4 [76];
  CQuaternion4f CStack_98;
  float fStack_88;
  CQuaternion4f CStack_84;
  float afStack_74 [4];
  float fStack_64;
  float local_60 [2];
  CQuaternion4f CStack_58;
  float afStack_48 [5];
  CVector3f CStack_34;
  CQuaternion4f *pCStack_28;
  undefined8 local_1c;
  
  bVar6 = 0;
  iVar3 = this_ptr->state;
  (this_ptr->base_weapon).field7_0x2f4[0] = -1;
  (this_ptr->base_weapon).field7_0x2f4[1] = -1;
  (this_ptr->base_weapon).field7_0x2f4[2] = -1;
  (this_ptr->base_weapon).field7_0x2f4[3] = -1;
  switch(iVar3) {
  case 0:
    pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
    if (pCVar1 != (COrientation *)this_ptr->field1_0x578) {
      pCVar1->pitch = *(float *)this_ptr->field1_0x578;
      (this_ptr->base_weapon).base_actor.orient.bank = *(float *)(this_ptr->field1_0x578 + 4);
      (this_ptr->base_weapon).base_actor.orient.heading = *(float *)(this_ptr->field1_0x578 + 8);
    }
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field3_0x704);
    if (iVar3 == 0) {
      this_ptr->timer = 0.0;
      break;
    }
    this_ptr->state = 1;
    this_ptr->timer = this_ptr->charge_time;
    sound_sndmain_cpp_FUN_005a9c40();
    in_stack_ffffff0c = "?turret-ani?.wav" + 1;
    goto LAB_005e24c7;
  case 1:
    fVar7 = this_ptr->timer - in_stack_00000008;
    this_ptr->timer = fVar7;
    if (fVar7 <= 0.0) {
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
    pCVar2 = g_CEventListPtr;
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
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar2,this_ptr->field3_0x704);
    if (iVar3 == 0) {
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
    pCVar2 = g_CEventListPtr;
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
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(pCVar2,this_ptr->field3_0x704);
    if (iVar3 != 0) {
      this_ptr->timer = 0.0;
      this_ptr->state = 2;
      (this_ptr->base_weapon).field7_0x2f4[0xc] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xd] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xe] = '\0';
      (this_ptr->base_weapon).field7_0x2f4[0xf] = '\0';
      break;
    }
    fVar7 = this_ptr->timer - in_stack_00000008;
    this_ptr->timer = fVar7;
    if (0.0 < fVar7) {
      core_turret_cpp_FUN_005e3560();
      break;
    }
    this_ptr->state = 4;
    this_ptr->timer = this_ptr->power_down_time;
    sound_sndmain_cpp_FUN_005a9c40();
    in_stack_ffffff0c = "turret-ani?.wav";
LAB_005e24c7:
    uVar5 = (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                      ((CDemonActor *)this_ptr,in_stack_ffffff0c);
    *(undefined4 *)(this_ptr->field12_0x85c + 0x5c) = uVar5;
    break;
  case 4:
    local_1c._0_4_ = this_ptr->field1_0x578;
    this_ptr->timer = this_ptr->timer - in_stack_00000008;
    local_1c._4_4_ = (CVector3f *)&(this_ptr->base_weapon).base_actor.orient;
    if (0.0 < this_ptr->timer) {
      fVar7 = 8.646739e-39;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CQuaternion4f *)local_1c._4_4_,in_stack_ffffff08);
      CStack_98.y = CStack_58.z;
      *(float *)((int)&CStack_98 + (uint)bVar6 * -8 + 0xc) = afStack_48[(uint)bVar6 * -2];
      (&fStack_88)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (&fStack_88 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
           (afStack_48 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20(pCStack_28,in_stack_fffffefc);
      CStack_58.w = CStack_84.z;
      afStack_48[(uint)bVar6 * -2 + -3] = afStack_74[(uint)bVar6 * -2];
      afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (afStack_48 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
           (afStack_74 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (&CStack_98,&CStack_58,
                 (CQuaternion4f *)
                 ((in_stack_00000008 / (this_ptr->timer + in_stack_00000008)) * (float)_DAT_00656680
                 ),fVar7);
      quat_ptr = &CStack_84;
      pCVar4 = &CStack_34;
      CStack_84.w = fStack_64;
      afStack_74[(uint)bVar6 * -2 + -3] = local_60[(uint)bVar6 * -2];
      afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] =
           local_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (afStack_74 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
           (local_60 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      pCVar4 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar4,quat_ptr);
      if (pCVar4 != local_1c._4_4_) {
        (local_1c._4_4_)->x = pCVar4->x;
        (local_1c._4_4_)->y = pCVar4->y;
        (local_1c._4_4_)->z = pCVar4->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    else {
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
      if (local_1c._4_4_ != (CVector3f *)(char *)local_1c) {
        ((COrientation *)local_1c._4_4_)->pitch = *(float *)(char *)local_1c;
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
              ((CDemonActor *)this_ptr,(float)in_stack_ffffff0c);
  }
  fVar7 = *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc);
  iVar3 = *(int *)(this_ptr->field12_0x85c + 0x54);
  *(float *)(this_ptr->field12_0x85c + 0x10) =
       *(float *)(this_ptr->field12_0x85c + 0x10) - in_stack_00000008;
  *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc) = fVar7 - in_stack_00000008;
  if ((0 < iVar3) || (0.0 < *(float *)(this_ptr->field12_0x85c + 0x10))) {
    *(int *)(this_ptr->field12_0x85c + 0x54) = *(int *)(this_ptr->field12_0x85c + 0x54) + -1;
    core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
    iVar3 = sound_sndmain_cpp_FUN_005a9b40();
    if (iVar3 == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_e8,"turret-loop.wav * %f",(double)in_stack_ffffff14);
      uVar5 = (*((this_ptr->base_weapon).base_actor.vtable)->playAmbientSound)
                        ((CDemonActor *)this_ptr,acStack_e4);
      *(undefined4 *)(this_ptr->field12_0x85c + 0x58) = uVar5;
      return;
    }
  }
  else {
    local_1c = (double)sound_sndmain_cpp_FUN_005a9720();
    if (0.0 <= local_1c) {
      sound_sndmain_cpp_FUN_005a9c40();
      (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                ((CDemonActor *)this_ptr,"turret-tail.wav");
      return;
    }
  }
  return;
}


// Assembly code:
// 005e2430: PUSH EBX
//   Label: core_turret.cpp_CTurret_process_FUN_005e2430
// 005e2431: PUSH ESI
// 005e2432: PUSH EDI
// 005e2433: PUSH EBP
// 005e2434: MOV EBP,ESP
// 005e2436: SUB ESP,0xe8
// 005e243c: AND ESP,0xfffffff8
// 005e243f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e2442: MOV EAX,dword ptr [EBX + 0x700]
// 005e2448: MOV dword ptr [EBX + 0x2f4],0xffffffff
// 005e2452: CMP EAX,0x4
// 005e2455: JA 0x005e2850
//   XREF to: 005e2850 (CONDITIONAL_JUMP)
// 005e245b: JMP dword ptr [EAX*0x4 + 0x5e241c]
//   Label: switchD
//   XREF to: 005e2462 (COMPUTED_JUMP)
//   XREF to: 005e2591 (COMPUTED_JUMP)
//   XREF to: 005e25d0 (COMPUTED_JUMP)
//   XREF to: 005e263d (COMPUTED_JUMP)
//   XREF to: 005e26f0 (COMPUTED_JUMP)
//   XREF to: 005e241c (DATA)
// 005e2462: LEA EAX,[EBX + 0x30]
//   Label: caseD_0
// 005e2465: LEA EDX,[EBX + 0x578]
// 005e246b: CMP EAX,EDX
// 005e246d: JZ 0x005e247f
//   XREF to: 005e247f (CONDITIONAL_JUMP)
// 005e246f: MOV ECX,dword ptr [EDX]
// 005e2471: MOV dword ptr [EAX],ECX
// 005e2473: MOV ECX,dword ptr [EDX + 0x4]
// 005e2476: MOV dword ptr [EAX + 0x4],ECX
// 005e2479: MOV ECX,dword ptr [EDX + 0x8]
// 005e247c: MOV dword ptr [EAX + 0x8],ECX
// 005e247f: LEA EAX,[EBX + 0x704]
//   Label: LAB_005e247f
// 005e2485: PUSH EAX
// 005e2486: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e248c: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005e248d: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005e2492: ADD ESP,0x8
// 005e2495: TEST EAX,EAX
// 005e2497: JZ 0x005e2586
//   XREF to: 005e2586 (CONDITIONAL_JUMP)
// 005e249d: FLD float ptr [EBX + 0x768]
// 005e24a3: MOV ECX,dword ptr [EBX + 0x8b8]
// 005e24a9: MOV dword ptr [EBX + 0x700],0x1
// 005e24b3: PUSH ECX
// 005e24b4: FSTP float ptr [EBX + 0x77c]
// 005e24ba: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005e24bf: ADD ESP,0x4
// 005e24c2: PUSH 0x656600
//   XREF to: 00656600 (DATA)
// 005e24c7: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_005e24c7
// 005e24cd: PUSH EBX
// 005e24ce: CALL dword ptr [EAX + 0x24]
// 005e24d1: ADD ESP,0x8
// 005e24d4: MOV dword ptr [EBX + 0x8b8],EAX
// 005e24da: CMP dword ptr [EBX + 0x2f4],0x0
//   Label: LAB_005e24da
// 005e24e1: JL 0x005e24f3
//   XREF to: 005e24f3 (CONDITIONAL_JUMP)
// 005e24e3: PUSH EBX
// 005e24e4: MOV EAX,dword ptr [EBX + 0x154]
// 005e24ea: CALL dword ptr [EAX + 0x104]
// 005e24f0: ADD ESP,0x4
// 005e24f3: FLD float ptr [EBX + 0x300]
//   Label: LAB_005e24f3
// 005e24f9: FLD float ptr [EBX + 0x86c]
// 005e24ff: MOV EDI,dword ptr [EBX + 0x8b0]
// 005e2505: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e2508: FXCH
// 005e250a: FSUB ST0,ST1
// 005e250c: FXCH ST2
// 005e250e: FSUBRP
// 005e2510: FXCH
// 005e2512: FSTP float ptr [EBX + 0x86c]
// 005e2518: FSTP float ptr [EBX + 0x300]
// 005e251e: TEST EDI,EDI
// 005e2520: JG 0x005e2535
//   XREF to: 005e2535 (CONDITIONAL_JUMP)
// 005e2522: FLD float ptr [EBX + 0x86c]
// 005e2528: FLDZ
// 005e252a: FCOMPP
// 005e252c: FNSTSW AX
// 005e252e: SAHF
// 005e252f: JNC 0x005e28b2
//   XREF to: 005e28b2 (CONDITIONAL_JUMP)
// 005e2535: MOV ECX,dword ptr [EBX + 0x8b0]
//   Label: LAB_005e2535
// 005e253b: PUSH 0x3f8e38e4
// 005e2540: DEC ECX
// 005e2541: PUSH 0x3f666666
// 005e2546: MOV dword ptr [EBX + 0x8b0],ECX
// 005e254c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005e2551: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e2558: FLD float ptr [ESP + 0xec]
//   XREF to: Stack[-0x14] (READ)
// 005e255f: ADD ESP,0x8
// 005e2562: MOV ESI,dword ptr [EBX + 0x8b4]
// 005e2568: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005e256b: PUSH dword ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005e256e: PUSH ESI
// 005e256f: CALL sound_sndmain.cpp_FUN_005a9b40
//   XREF to: 005a9b40 (UNCONDITIONAL_CALL)
// 005e2574: ADD ESP,0x8
// 005e2577: TEST EAX,EAX
// 005e2579: JZ 0x005e2878
//   XREF to: 005e2878 (CONDITIONAL_JUMP)
// 005e257f: MOV ESP,EBP
//   Label: LAB_005e257f
// 005e2581: POP EBP
// 005e2582: POP EDI
// 005e2583: POP ESI
// 005e2584: POP EBX
// 005e2585: RET
// 005e2586: MOV dword ptr [EBX + 0x77c],EAX
//   Label: LAB_005e2586
// 005e258c: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e2591: FLD float ptr [EBX + 0x77c]
//   Label: caseD_1
// 005e2597: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e259a: FST float ptr [EBX + 0x77c]
// 005e25a0: FLDZ
// 005e25a2: FCOMPP
// 005e25a4: FNSTSW AX
// 005e25a6: SAHF
// 005e25a7: JC 0x005e24da
//   XREF to: 005e24da (CONDITIONAL_JUMP)
// 005e25ad: MOV dword ptr [EBX + 0x77c],0x0
// 005e25b7: MOV dword ptr [EBX + 0x700],0x2
// 005e25c1: MOV dword ptr [EBX + 0x300],0x0
// 005e25cb: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e25d0: LEA EAX,[EBX + 0x704]
//   Label: caseD_2
// 005e25d6: MOV dword ptr [EBX + 0x2f4],0xff
// 005e25e0: PUSH EAX
// 005e25e1: MOV EAX,[0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e25e6: MOV dword ptr [EBX + 0x2f8],0x0
// 005e25f0: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 005e25f1: MOV dword ptr [EBX + 0x2fc],0x0
// 005e25fb: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005e2600: ADD ESP,0x8
// 005e2603: TEST EAX,EAX
// 005e2605: JNZ 0x005e2622
//   XREF to: 005e2622 (CONDITIONAL_JUMP)
// 005e2607: MOV dword ptr [EBX + 0x700],0x3
// 005e2611: MOV EAX,dword ptr [EBX + 0x76c]
// 005e2617: MOV dword ptr [EBX + 0x77c],EAX
// 005e261d: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e2622: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005e2622
//   XREF to: Stack[0x8] (READ)
// 005e2625: PUSH EBX
// 005e2626: CALL core_turret.cpp_FUN_005e2d50
//   XREF to: 005e2d50 (UNCONDITIONAL_CALL)
// 005e262b: ADD ESP,0x8
// 005e262e: MOV dword ptr [EBX + 0x77c],0x0
// 005e2638: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e263d: LEA EAX,[EBX + 0x704]
//   Label: caseD_3
// 005e2643: MOV dword ptr [EBX + 0x2f4],0x0
// 005e264d: PUSH EAX
// 005e264e: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e2654: MOV dword ptr [EBX + 0x2f8],0xff
// 005e265e: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 005e265f: MOV dword ptr [EBX + 0x2fc],0x0
// 005e2669: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005e266e: ADD ESP,0x8
// 005e2671: TEST EAX,EAX
// 005e2673: JZ 0x005e2698
//   XREF to: 005e2698 (CONDITIONAL_JUMP)
// 005e2675: MOV dword ptr [EBX + 0x77c],0x0
// 005e267f: MOV dword ptr [EBX + 0x700],0x2
// 005e2689: MOV dword ptr [EBX + 0x300],0x0
// 005e2693: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e2698: FLD float ptr [EBX + 0x77c]
//   Label: LAB_005e2698
// 005e269e: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e26a1: FST float ptr [EBX + 0x77c]
// 005e26a7: FLDZ
// 005e26a9: FCOMPP
// 005e26ab: FNSTSW AX
// 005e26ad: SAHF
// 005e26ae: JC 0x005e26df
//   XREF to: 005e26df (CONDITIONAL_JUMP)
// 005e26b0: FLD float ptr [EBX + 0x770]
// 005e26b6: MOV EDI,dword ptr [EBX + 0x8b8]
// 005e26bc: MOV dword ptr [EBX + 0x700],0x4
// 005e26c6: PUSH EDI
// 005e26c7: FSTP float ptr [EBX + 0x77c]
// 005e26cd: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005e26d2: ADD ESP,0x4
// 005e26d5: PUSH 0x656610
//   XREF to: 00656610 (DATA)
// 005e26da: JMP 0x005e24c7
//   XREF to: 005e24c7 (UNCONDITIONAL_JUMP)
// 005e26df: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005e26df
//   XREF to: Stack[0x8] (READ)
// 005e26e2: PUSH EBX
// 005e26e3: CALL core_turret.cpp_FUN_005e3560
//   XREF to: 005e3560 (UNCONDITIONAL_CALL)
// 005e26e8: ADD ESP,0x8
// 005e26eb: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e26f0: FLD float ptr [EBX + 0x77c]
//   Label: caseD_4
// 005e26f6: LEA EAX,[EBX + 0x578]
// 005e26fc: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e26ff: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e2706: FSTP float ptr [EBX + 0x77c]
// 005e270c: LEA EAX,[EBX + 0x30]
// 005e270f: FLD float ptr [EBX + 0x77c]
// 005e2715: FLDZ
// 005e2717: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e271e: FCOMPP
// 005e2720: FNSTSW AX
// 005e2722: SAHF
// 005e2723: JC 0x005e277f
//   XREF to: 005e277f (CONDITIONAL_JUMP)
// 005e2725: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005e272c: MOV dword ptr [EBX + 0x700],0x0
// 005e2736: MOV ECX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005e273d: MOV dword ptr [EBX + 0x77c],0x0
// 005e2747: CMP EAX,ECX
// 005e2749: JZ 0x005e24da
//   XREF to: 005e24da (CONDITIONAL_JUMP)
// 005e274f: MOV EAX,ECX
// 005e2751: FLD float ptr [EAX]
// 005e2753: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005e275a: FSTP float ptr [EAX]
// 005e275c: MOV EAX,ECX
// 005e275e: FLD float ptr [EAX + 0x4]
// 005e2761: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005e2768: FSTP float ptr [EAX + 0x4]
// 005e276b: MOV EAX,ECX
// 005e276d: FLD float ptr [EAX + 0x8]
// 005e2770: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005e2777: FSTP float ptr [EAX + 0x8]
// 005e277a: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e277f: MOV ESI,dword ptr [ESP + 0xe0]
//   Label: LAB_005e277f
//   XREF to: Stack[-0x18] (READ)
// 005e2786: PUSH ESI
// 005e2787: LEA ESI,[ESP + 0xbc]
//   XREF to: Stack[-0x40] (DATA)
// 005e278e: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x90] (DATA)
// 005e2792: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 005e2797: LEA ESI,[ESP + 0xbc]
//   XREF to: Stack[-0x40] (DATA)
// 005e279e: ADD ESP,0x4
// 005e27a1: MOVSD ES:EDI,ESI
// 005e27a2: MOVSD ES:EDI,ESI
// 005e27a3: MOVSD ES:EDI,ESI
// 005e27a4: MOVSD ES:EDI,ESI
// 005e27a5: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005e27ac: PUSH EDI
// 005e27ad: LEA ESI,[ESP + 0x8c]
//   XREF to: Stack[-0x70] (DATA)
// 005e27b4: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 005e27b9: LEA EDI,[ESP + 0xac]
//   XREF to: Stack[-0x50] (DATA)
// 005e27c0: LEA ESI,[ESP + 0x8c]
//   XREF to: Stack[-0x70] (DATA)
// 005e27c7: ADD ESP,0x4
// 005e27ca: MOVSD ES:EDI,ESI
// 005e27cb: MOVSD ES:EDI,ESI
// 005e27cc: MOVSD ES:EDI,ESI
// 005e27cd: MOVSD ES:EDI,ESI
// 005e27ce: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e27d1: FLD float ptr [EBX + 0x77c]
// 005e27d7: FADD ST0,ST1
// 005e27d9: FDIVP
// 005e27db: FMUL double ptr [0x00656680]
//   XREF to: 00656680 (READ)
// 005e27e1: SUB ESP,0x4
// 005e27e4: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x50] (DATA)
// 005e27eb: FSTP float ptr [ESP]
//   XREF to: Stack[-0xfc] (DATA)
// 005e27ee: PUSH EAX
// 005e27ef: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x90] (DATA)
// 005e27f3: PUSH EAX
// 005e27f4: LEA ESI,[ESP + 0xa4]
//   XREF to: Stack[-0x60] (DATA)
// 005e27fb: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005e2800: ADD ESP,0xc
// 005e2803: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x80] (DATA)
// 005e2807: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x80] (DATA)
// 005e280b: PUSH EAX
// 005e280c: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x30] (DATA)
// 005e2813: LEA ESI,[ESP + 0x9c]
//   XREF to: Stack[-0x60] (DATA)
// 005e281a: PUSH EAX
// 005e281b: MOVSD ES:EDI,ESI
// 005e281c: MOVSD ES:EDI,ESI
// 005e281d: MOVSD ES:EDI,ESI
// 005e281e: MOVSD ES:EDI,ESI
// 005e281f: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 005e2824: ADD ESP,0x8
// 005e2827: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005e282e: CMP EAX,EDX
// 005e2830: JZ 0x005e2842
//   XREF to: 005e2842 (CONDITIONAL_JUMP)
// 005e2832: MOV ECX,dword ptr [EAX]
// 005e2834: MOV dword ptr [EDX],ECX
// 005e2836: MOV ECX,dword ptr [EAX + 0x4]
// 005e2839: MOV dword ptr [EDX + 0x4],ECX
// 005e283c: MOV ECX,dword ptr [EAX + 0x8]
// 005e283f: MOV dword ptr [EDX + 0x8],ECX
// 005e2842: PUSH EBX
//   Label: LAB_005e2842
// 005e2843: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005e2848: ADD ESP,0x4
// 005e284b: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e2850: MOV EDX,0x656620
//   Label: default
//   XREF to: 00656620 (DATA)
// 005e2855: MOV ECX,0x15a
// 005e285a: PUSH 0x656633
//   XREF to: 00656633 (DATA)
// 005e285f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005e2865: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005e286b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e2870: ADD ESP,0x4
// 005e2873: JMP 0x005e24da
//   XREF to: 005e24da (UNCONDITIONAL_JUMP)
// 005e2878: FLD float ptr [ESP]
//   Label: LAB_005e2878
//   XREF to: Stack[-0xf8] (DATA)
// 005e287b: SUB ESP,0x8
// 005e287e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 005e2881: PUSH 0x656654
//   XREF to: 00656654 (DATA)
// 005e2886: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xf4] (DATA)
// 005e288a: PUSH EAX
// 005e288b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e2890: ADD ESP,0x10
// 005e2893: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xf4] (DATA)
// 005e2897: PUSH EAX
// 005e2898: MOV EDX,dword ptr [EBX + 0x154]
// 005e289e: PUSH EBX
// 005e289f: CALL dword ptr [EDX + 0x28]
// 005e28a2: ADD ESP,0x8
// 005e28a5: MOV dword ptr [EBX + 0x8b4],EAX
// 005e28ab: MOV ESP,EBP
// 005e28ad: POP EBP
// 005e28ae: POP EDI
// 005e28af: POP ESI
// 005e28b0: POP EBX
// 005e28b1: RET
// 005e28b2: PUSH 0x2
//   Label: LAB_005e28b2
// 005e28b4: MOV EAX,dword ptr [EBX + 0x8b4]
// 005e28ba: PUSH EAX
// 005e28bb: CALL sound_sndmain.cpp_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 005e28c0: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005e28c7: MOV dword ptr [ESP + 0xe0],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005e28ce: FLD double ptr [ESP + 0xdc]
//   XREF to: Stack[-0x24] (READ)
// 005e28d5: FLDZ
// 005e28d7: ADD ESP,0x8
// 005e28da: FCOMPP
// 005e28dc: FNSTSW AX
// 005e28de: SAHF
// 005e28df: JA 0x005e257f
//   XREF to: 005e257f (CONDITIONAL_JUMP)
// 005e28e5: MOV EDX,dword ptr [EBX + 0x8b4]
// 005e28eb: PUSH EDX
// 005e28ec: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005e28f1: ADD ESP,0x4
// 005e28f4: PUSH 0x656669
//   XREF to: 00656669 (DATA)
// 005e28f9: MOV EAX,dword ptr [EBX + 0x154]
// 005e28ff: PUSH EBX
// 005e2900: CALL dword ptr [EAX + 0x24]
// 005e2903: ADD ESP,0x8
// 005e2906: MOV ESP,EBP
// 005e2908: POP EBP
// 005e2909: POP EDI
// 005e290a: POP ESI
// 005e290b: POP EBX
// 005e290c: RET
