// Name: core_ghoul.cpp_FUN_004e87e0
// Address: 004e87e0
// Address Range: [[004e87e0, 004e896d] [004e89a9, 004e8ba1]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e87e0()
// Globals:
//   TerminatedCString s_go_berzerk_0062de82
//   TerminatedCString s_ghoul_die_wav_1_6_0062de8e
//   TerminatedCString s_guul_flinch_d_0062dea5
//   TerminatedCString s_ghoul_mad_wav_0062deb3
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_FUN_0042b8e0
//   core_enemy.cpp_FUN_004a9f10
//   core_ghoul.cpp_FUN_004e8520
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e87e0(undefined4 param_1, undefined4 param_2)
    */

void core_ghoul_cpp_FUN_004e87e0(void)

{
  CLocation *pCVar1;
  char *pcVar2;
  CVector3i *pCVar3;
  CCharacter *pCVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  CMotionList *this_ptr;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  bool bVar8;
  float10 fVar9;
  double dVar10;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  CCharacter *local_78;
  int iStack_74;
  float local_14;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if ((in_stack_00000004[1].base_actor.field14_0xf8 != 0) &&
     (iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller), *(int *)(iVar5 + 0x24) == 0
     )) {
    in_stack_00000004[1].base_actor.is_transparent = 0x41f00000;
    in_stack_00000004[1].base_actor.field14_0xf8 = 0;
    pCVar3 = &in_stack_00000004[1].base_actor.scale;
    in_stack_00000004[1].base_actor.field16_0x100 = 1;
    pCVar1 = &(in_stack_00000004->base_actor).location;
    in_stack_00000004[1].base_actor.field17_0x104 = 0x3f800000;
    if ((CLocation *)pCVar3 != pCVar1) {
      pCVar3->x = (int)(pCVar1->position).x;
      in_stack_00000004[1].base_actor.scale.y =
           (int)(in_stack_00000004->base_actor).location.position.y;
      in_stack_00000004[1].base_actor.scale.z =
           (int)(in_stack_00000004->base_actor).location.position.z;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"go berzerk\n");
  }
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    in_stack_00000004[1].base_actor.field13_0xec.z = 4.0;
  }
  core_ghoul_cpp_FUN_004e8520();
  iVar5 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
  if ((iVar5 != 0) &&
     (pCVar4 = (CCharacter *)(**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(),
     pCVar4 == in_stack_00000004)) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154) +
                0x104))();
  }
  fVar7 = in_stack_00000004[1].base_actor.field12_0xe0.y;
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  if ((in_stack_00000004->model).part_visibility_flags[(int)fVar7] == 0) {
    in_stack_00000004->hit_points = 0.0;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    iVar5 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x10);
    in_stack_00000004->hit_points = 0.0;
    if (iVar5 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(in_stack_00000004);
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
    iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(in_stack_00000004->model).motion_controller);
    if ((*(int *)(iVar5 + 0x24) != 10) && (*(int *)(iVar5 + 0x24) != 9)) {
      if ((in_stack_00000004->model).part_visibility_flags
          [(int)in_stack_00000004[1].base_actor.field12_0xe0.y] == 0) {
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x3c] = '\0';
        (pCVar4->base_actor).create_event[0x3d] = '\0';
        (pCVar4->base_actor).create_event[0x3e] = '\0';
        (pCVar4->base_actor).create_event[0x3f] = '\0';
      }
      else {
        pcVar2 = in_stack_00000004[1].base_actor.create_event + 0x3c;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
      }
      iVar5 = 6;
      if (*(int *)(in_stack_00000004->cloth_data + 0x35c) < 1) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar6 != 0) {
          iVar5 = 7;
        }
      }
      else {
        iVar6 = 0;
        pCVar4 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004->cloth_data + 0x35c)) {
          do {
            bVar8 = *(float *)(pCVar4->cloth_data + 0x360) ==
                    in_stack_00000004[1].base_actor.field12_0xe0.x;
            if ((bVar8) || (bVar8)) {
              iVar5 = 8;
              break;
            }
            iVar6 = iVar6 + 1;
            pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient.heading;
          } while (iVar6 < *(int *)(in_stack_00000004->cloth_data + 0x35c));
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,iVar5,1);
      iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
      if (iVar5 == 0) {
        fVar7 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                                 (&in_stack_00000004->base_actor,"ghoul-die-!-?.wav @1.6");
        in_stack_00000004[1].base_actor.field13_0xec.y = fVar7;
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar9 = (float10)local_14 * (float10)DOUBLE_0062deca;
      pCVar4 = in_stack_00000004 + 1;
      (pCVar4->base_actor).create_event[0x2c] = '\0';
      (pCVar4->base_actor).create_event[0x2d] = '\0';
      (pCVar4->base_actor).create_event[0x2e] = '\n';
      (pCVar4->base_actor).create_event[0x2f] = '\0';
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44(extraout_EDX,(in_stack_00000004->base_actor).vtable));
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28) = (int)ROUND(fVar9);
      (**(code **)(SUB84(dVar10,0) + 0xa0))(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20));
    }
  }
  else {
    iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(in_stack_00000004->model).motion_controller);
    iVar5 = *(int *)(iVar5 + 0x24);
    if (((iVar5 == 0) || (iVar5 == 0xb || (iVar5 == 0xc || iVar5 == 2))) ||
       (iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar5 != 0)) {
      iVar6 = 1;
      iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,(iVar5 == 0) + 3,iVar6);
    }
    else {
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_78,"guul flinch%d",iVar5);
      this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                           (&(in_stack_00000004->model).motion_controller);
      iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
      pCVar4 = in_stack_00000004 + 1;
      (pCVar4->base_actor).create_event[0x34] = '\0';
      (pCVar4->base_actor).create_event[0x35] = '\0';
      (pCVar4->base_actor).create_event[0x36] = -0x80;
      (pCVar4->base_actor).create_event[0x37] = '?';
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38) = iVar5;
    }
    iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar5 == 0) {
      fVar7 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                               (&in_stack_00000004->base_actor,"ghoul-mad-!-?.wav");
      in_stack_00000004[1].base_actor.field13_0xec.x = fVar7;
      iStack_74 = in_stack_00000008;
      local_78 = in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 004e87e0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e87e0
// 004e87e1: PUSH ESI
// 004e87e2: PUSH EDI
// 004e87e3: PUSH EBP
// 004e87e4: MOV EBP,ESP
// 004e87e6: SUB ESP,0x68
// 004e87e9: MOV EBX,dword ptr [EBP + 0x14]
// 004e87ec: MOV EDI,dword ptr [EBP + 0x18]
// 004e87ef: MOV EDX,dword ptr [EBX + 0xbf0c]
// 004e87f5: PUSH EDX
// 004e87f6: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004e87fb: MOV ECX,dword ptr [EBX + 0xbf1c]
// 004e8801: ADD ESP,0x4
// 004e8804: TEST ECX,ECX
// 004e8806: JNZ 0x004e89ba
//   XREF to: 004e89ba (CONDITIONAL_JUMP)
// 004e880c: CMP dword ptr [EDI + 0x30],0x6c
//   Label: LAB_004e880c
// 004e8810: JNZ 0x004e881c
//   XREF to: 004e881c (CONDITIONAL_JUMP)
// 004e8812: MOV dword ptr [EBX + 0xbf18],0x40800000
// 004e881c: PUSH EDI
//   Label: LAB_004e881c
// 004e881d: PUSH EBX
// 004e881e: CALL core_ghoul.cpp_FUN_004e8520
//   XREF to: 004e8520 (UNCONDITIONAL_CALL)
// 004e8823: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004e8829: ADD ESP,0x8
// 004e882c: TEST EDX,EDX
// 004e882e: JZ 0x004e885c
//   XREF to: 004e885c (CONDITIONAL_JUMP)
// 004e8830: MOV EAX,EDX
// 004e8832: PUSH EAX
// 004e8833: MOV EDX,dword ptr [EDX + 0x154]
// 004e8839: CALL dword ptr [EDX + 0x108]
// 004e883f: ADD ESP,0x4
// 004e8842: CMP EAX,EBX
// 004e8844: JNZ 0x004e885c
//   XREF to: 004e885c (CONDITIONAL_JUMP)
// 004e8846: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e884c: PUSH EAX
// 004e884d: MOV EDX,dword ptr [EAX + 0x154]
// 004e8853: CALL dword ptr [EDX + 0x104]
// 004e8859: ADD ESP,0x4
// 004e885c: FLD float ptr [EDI + 0x4]
//   Label: LAB_004e885c
// 004e885f: FSUBR float ptr [EBX + 0x243c]
// 004e8865: MOV EAX,dword ptr [EBX + 0xbf08]
// 004e886b: FSTP float ptr [EBX + 0x243c]
// 004e8871: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e8878: TEST ECX,ECX
// 004e887a: JZ 0x004e8a2e
//   XREF to: 004e8a2e (CONDITIONAL_JUMP)
// 004e8880: FLD float ptr [EBX + 0x243c]
//   Label: LAB_004e8880
// 004e8886: FLDZ
// 004e8888: LEA EDX,[EBX + 0x158]
// 004e888e: FCOMPP
// 004e8890: FNSTSW AX
// 004e8892: SAHF
// 004e8893: JC 0x004e8a9a
//   XREF to: 004e8a9a (CONDITIONAL_JUMP)
// 004e8899: MOV EAX,dword ptr [EBX + 0xbeac]
// 004e889f: MOV dword ptr [EBX + 0x243c],0x0
// 004e88a9: TEST EAX,EAX
// 004e88ab: JNZ 0x004e8a39
//   XREF to: 004e8a39 (CONDITIONAL_JUMP)
// 004e88b1: PUSH EDX
// 004e88b2: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e88b7: MOV EAX,dword ptr [EAX + 0x24]
// 004e88ba: ADD ESP,0x4
// 004e88bd: CMP EAX,0xa
// 004e88c0: JZ 0x004e89a9
//   XREF to: 004e89a9 (CONDITIONAL_JUMP)
// 004e88c6: CMP EAX,0x9
// 004e88c9: JZ 0x004e89a9
//   XREF to: 004e89a9 (CONDITIONAL_JUMP)
// 004e88cf: MOV EAX,dword ptr [EBX + 0xbf08]
// 004e88d5: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e88dc: TEST EDX,EDX
// 004e88de: JZ 0x004e8a53
//   XREF to: 004e8a53 (CONDITIONAL_JUMP)
// 004e88e4: DEC dword ptr [EBX + 0xbed8]
// 004e88ea: MOV EAX,dword ptr [EBX + 0x2df4]
//   Label: LAB_004e88ea
// 004e88f0: MOV ESI,0x6
// 004e88f5: TEST EAX,EAX
// 004e88f7: JLE 0x004e8a7b
//   XREF to: 004e8a7b (CONDITIONAL_JUMP)
// 004e88fd: MOV EDX,dword ptr [EBX + 0x2df4]
// 004e8903: XOR EAX,EAX
// 004e8905: TEST EDX,EDX
// 004e8907: JLE 0x004e8922
//   XREF to: 004e8922 (CONDITIONAL_JUMP)
// 004e8909: MOV EDX,EBX
// 004e890b: MOV ECX,dword ptr [EDX + 0x2df8]
//   Label: LAB_004e890b
// 004e8911: CMP ECX,dword ptr [EBX + 0xbf04]
// 004e8917: JNZ 0x004e8a5e
//   XREF to: 004e8a5e (CONDITIONAL_JUMP)
// 004e891d: MOV ESI,0x8
//   Label: LAB_004e891d
// 004e8922: PUSH 0x1
//   Label: LAB_004e8922
// 004e8924: PUSH ESI
// 004e8925: LEA EAX,[EBX + 0x158]
// 004e892b: PUSH EAX
// 004e892c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e8931: ADD ESP,0xc
// 004e8934: MOV ESI,dword ptr [EBX + 0xbf14]
// 004e893a: PUSH ESI
// 004e893b: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e8940: ADD ESP,0x4
// 004e8943: TEST EAX,EAX
// 004e8945: JNZ 0x004e895f
//   XREF to: 004e895f (CONDITIONAL_JUMP)
// 004e8947: PUSH 0x62de8e
//   XREF to: 0062de8e (DATA)
// 004e894c: MOV EAX,dword ptr [EBX + 0x154]
// 004e8952: PUSH EBX
// 004e8953: CALL dword ptr [EAX + 0x24]
// 004e8956: ADD ESP,0x8
// 004e8959: MOV dword ptr [EBX + 0xbf14],EAX
// 004e895f: PUSH 0x41200000
//   Label: LAB_004e895f
// 004e8964: PUSH 0x40800000
// 004e8969: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e89a9: PUSH EDI
//   Label: LAB_004e89a9
// 004e89aa: PUSH EBX
// 004e89ab: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e89b0: ADD ESP,0x8
// 004e89b3: MOV ESP,EBP
// 004e89b5: POP EBP
// 004e89b6: POP EDI
// 004e89b7: POP ESI
// 004e89b8: POP EBX
// 004e89b9: RET
// 004e89ba: LEA EAX,[EBX + 0x158]
//   Label: LAB_004e89ba
// 004e89c0: PUSH EAX
// 004e89c1: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e89c6: MOV EAX,dword ptr [EAX + 0x24]
// 004e89c9: ADD ESP,0x4
// 004e89cc: TEST EAX,EAX
// 004e89ce: JNZ 0x004e880c
//   XREF to: 004e880c (CONDITIONAL_JUMP)
// 004e89d4: MOV dword ptr [EBX + 0xbf20],0x41f00000
// 004e89de: MOV dword ptr [EBX + 0xbf1c],EAX
// 004e89e4: LEA EAX,[EBX + 0xbf2c]
// 004e89ea: MOV dword ptr [EBX + 0xbf24],0x1
// 004e89f4: LEA EDX,[EBX + 0x20]
// 004e89f7: MOV dword ptr [EBX + 0xbf28],0x3f800000
// 004e8a01: CMP EAX,EDX
// 004e8a03: JZ 0x004e8a15
//   XREF to: 004e8a15 (CONDITIONAL_JUMP)
// 004e8a05: MOV ECX,dword ptr [EDX]
// 004e8a07: MOV dword ptr [EAX],ECX
// 004e8a09: MOV ECX,dword ptr [EDX + 0x4]
// 004e8a0c: MOV dword ptr [EAX + 0x4],ECX
// 004e8a0f: MOV ECX,dword ptr [EDX + 0x8]
// 004e8a12: MOV dword ptr [EAX + 0x8],ECX
// 004e8a15: PUSH 0x62de82
//   Label: LAB_004e8a15
//   XREF to: 0062de82 (DATA)
// 004e8a1a: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e8a20: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004e8a21: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e8a26: ADD ESP,0x8
// 004e8a29: JMP 0x004e880c
//   XREF to: 004e880c (UNCONDITIONAL_JUMP)
// 004e8a2e: MOV dword ptr [EBX + 0x243c],ECX
//   Label: LAB_004e8a2e
// 004e8a34: JMP 0x004e8880
//   XREF to: 004e8880 (UNCONDITIONAL_JUMP)
// 004e8a39: PUSH EBX
//   Label: LAB_004e8a39
// 004e8a3a: CALL core_charactr.cpp_CCharacter_FUN_0042b8e0
//   XREF to: 0042b8e0 (UNCONDITIONAL_CALL)
// 004e8a3f: ADD ESP,0x4
// 004e8a42: PUSH EDI
// 004e8a43: PUSH EBX
// 004e8a44: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e8a49: ADD ESP,0x8
// 004e8a4c: MOV ESP,EBP
// 004e8a4e: POP EBP
// 004e8a4f: POP EDI
// 004e8a50: POP ESI
// 004e8a51: POP EBX
// 004e8a52: RET
// 004e8a53: MOV dword ptr [EBX + 0xbed8],EDX
//   Label: LAB_004e8a53
// 004e8a59: JMP 0x004e88ea
//   XREF to: 004e88ea (UNCONDITIONAL_JUMP)
// 004e8a5e: JZ 0x004e891d
//   Label: LAB_004e8a5e
//   XREF to: 004e891d (CONDITIONAL_JUMP)
// 004e8a64: INC EAX
// 004e8a65: MOV ECX,dword ptr [EBX + 0x2df4]
// 004e8a6b: ADD EDX,0x38
// 004e8a6e: CMP EAX,ECX
// 004e8a70: JL 0x004e890b
//   XREF to: 004e890b (CONDITIONAL_JUMP)
// 004e8a76: JMP 0x004e8922
//   XREF to: 004e8922 (UNCONDITIONAL_JUMP)
// 004e8a7b: PUSH 0x3f000000
//   Label: LAB_004e8a7b
// 004e8a80: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e8a85: ADD ESP,0x4
// 004e8a88: TEST EAX,EAX
// 004e8a8a: JZ 0x004e8922
//   XREF to: 004e8922 (CONDITIONAL_JUMP)
// 004e8a90: MOV ESI,0x7
// 004e8a95: JMP 0x004e8922
//   XREF to: 004e8922 (UNCONDITIONAL_JUMP)
// 004e8a9a: PUSH EDX
//   Label: LAB_004e8a9a
// 004e8a9b: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e8aa0: MOV ECX,dword ptr [EAX + 0x24]
// 004e8aa3: ADD ESP,0x4
// 004e8aa6: MOV EDX,ECX
// 004e8aa8: XOR EAX,EAX
// 004e8aaa: CMP ECX,0x2
// 004e8aad: JNZ 0x004e8ab4
//   XREF to: 004e8ab4 (CONDITIONAL_JUMP)
// 004e8aaf: MOV EAX,0x1
// 004e8ab4: CMP EDX,0xc
//   Label: LAB_004e8ab4
// 004e8ab7: JNZ 0x004e8abe
//   XREF to: 004e8abe (CONDITIONAL_JUMP)
// 004e8ab9: MOV EAX,0x1
// 004e8abe: CMP EDX,0xb
//   Label: LAB_004e8abe
// 004e8ac1: JNZ 0x004e8ac8
//   XREF to: 004e8ac8 (CONDITIONAL_JUMP)
// 004e8ac3: MOV EAX,0x1
// 004e8ac8: TEST EDX,EDX
//   Label: LAB_004e8ac8
// 004e8aca: JNZ 0x004e8b38
//   XREF to: 004e8b38 (CONDITIONAL_JUMP)
// 004e8acc: PUSH 0x1
//   Label: LAB_004e8acc
// 004e8ace: PUSH 0x3f000000
// 004e8ad3: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e8ad8: ADD ESP,0x4
// 004e8adb: TEST EAX,EAX
// 004e8add: SETZ AL
// 004e8ae0: AND EAX,0xff
// 004e8ae5: ADD EAX,0x3
// 004e8ae8: PUSH EAX
// 004e8ae9: LEA EAX,[EBX + 0x158]
// 004e8aef: PUSH EAX
// 004e8af0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e8af5: ADD ESP,0xc
// 004e8af8: MOV ESI,dword ptr [EBX + 0xbf10]
//   Label: LAB_004e8af8
// 004e8afe: PUSH ESI
// 004e8aff: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e8b04: ADD ESP,0x4
// 004e8b07: TEST EAX,EAX
// 004e8b09: JNZ 0x004e89a9
//   XREF to: 004e89a9 (CONDITIONAL_JUMP)
// 004e8b0f: PUSH 0x62deb3
//   XREF to: 0062deb3 (DATA)
// 004e8b14: MOV EAX,dword ptr [EBX + 0x154]
// 004e8b1a: PUSH EBX
// 004e8b1b: CALL dword ptr [EAX + 0x24]
// 004e8b1e: ADD ESP,0x8
// 004e8b21: MOV dword ptr [EBX + 0xbf10],EAX
// 004e8b27: PUSH EDI
// 004e8b28: PUSH EBX
// 004e8b29: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 004e8b2e: ADD ESP,0x8
// 004e8b31: MOV ESP,EBP
// 004e8b33: POP EBP
// 004e8b34: POP EDI
// 004e8b35: POP ESI
// 004e8b36: POP EBX
// 004e8b37: RET
// 004e8b38: TEST EAX,EAX
//   Label: LAB_004e8b38
// 004e8b3a: JNZ 0x004e8acc
//   XREF to: 004e8acc (CONDITIONAL_JUMP)
// 004e8b3c: PUSH 0x3e800000
// 004e8b41: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e8b46: ADD ESP,0x4
// 004e8b49: TEST EAX,EAX
// 004e8b4b: JNZ 0x004e8acc
//   XREF to: 004e8acc (CONDITIONAL_JUMP)
// 004e8b51: PUSH 0x2
// 004e8b53: PUSH 0x1
// 004e8b55: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004e8b5a: ADD ESP,0x8
// 004e8b5d: PUSH EAX
// 004e8b5e: PUSH 0x62dea5
//   XREF to: 0062dea5 (DATA)
// 004e8b63: LEA EAX,[EBP + -0x68]
// 004e8b66: PUSH EAX
// 004e8b67: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e8b6c: ADD ESP,0xc
// 004e8b6f: PUSH 0x1
// 004e8b71: LEA EAX,[EBP + -0x68]
// 004e8b74: PUSH EAX
// 004e8b75: LEA EAX,[EBX + 0x158]
// 004e8b7b: PUSH EAX
// 004e8b7c: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004e8b81: ADD ESP,0x4
// 004e8b84: PUSH EAX
// 004e8b85: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004e8b8a: MOV dword ptr [EBX + 0xbed0],0x3f800000
// 004e8b94: ADD ESP,0xc
// 004e8b97: MOV dword ptr [EBX + 0xbed4],EAX
// 004e8b9d: JMP 0x004e8af8
//   XREF to: 004e8af8 (UNCONDITIONAL_JUMP)
