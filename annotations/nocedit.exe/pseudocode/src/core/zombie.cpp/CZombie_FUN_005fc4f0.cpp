// Name: core_zombie.cpp_CZombie_FUN_005fc4f0
// Address: 005fc4f0
// Address Range: [[005fc4f0, 005fc706]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc4f0()
// Globals:
//   undefined4 s_lookForHead_006589dd
//   TerminatedCString s_f_zombie_die_wav_006589e9
//   TerminatedCString s_zom_d0_wav_006589fb
//   TerminatedCString s_f_zombie_hit_wav_00658a07
//   TerminatedCString s_zom_s0_wav_00658a19
// Function calls:
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_zombie.cpp_CZombie_FUN_005fbde0
//   core_zombie.cpp_CZombie_FUN_005fc220
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fc4f0(CZombie* param_1, undefined4
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fc4f0(void)

{
  int iVar1;
  CMotionList *this_ptr;
  undefined4 uVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_zombie_cpp_CZombie_FUN_005fc220();
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x10c))();
  *(float *)(in_stack_00000004 + 0x243c) =
       *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf90) * 4) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
  }
  *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0x3f99999a;
  if (0.0 < *(float *)(in_stack_00000004 + 0x243c)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158));
    if (*(float *)(in_stack_00000004 + 0xbf94) <= 0.0) {
      *(undefined4 *)(in_stack_00000004 + 0xbf94) = 0x40000000;
      iVar1 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
      if (iVar1 == 0) {
        if (*(int *)(in_stack_00000004 + 0xbf48) != 0) {
          uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
          *(undefined4 *)(in_stack_00000004 + 0xbf9c) = uVar2;
          core_enemy_cpp_FUN_004a9f10();
          return;
        }
        uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(undefined4 *)(in_stack_00000004 + 0xbf9c) = uVar2;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0
                      ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      core_zombie_cpp_CZombie_FUN_005fbde0();
      if ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf90) * 4) == 0) &&
         ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf80) * 4) != 0 ||
          (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf78) * 4) != 0))))
      {
        this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
        core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158));
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0xa0))();
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 005fc4f0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fc4f0
// 005fc4f1: PUSH EDI
// 005fc4f2: PUSH EBP
// 005fc4f3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005fc4f7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005fc4fb: PUSH EDI
// 005fc4fc: PUSH EBX
// 005fc4fd: CALL core_zombie.cpp_CZombie_FUN_005fc220
//   XREF to: 005fc220 (UNCONDITIONAL_CALL)
// 005fc502: ADD ESP,0x8
// 005fc505: MOV EAX,dword ptr [EBX + 0x154]
// 005fc50b: PUSH EBX
// 005fc50c: CALL dword ptr [EAX + 0x10c]
// 005fc512: FLD float ptr [EDI + 0x4]
// 005fc515: FSUBR float ptr [EBX + 0x243c]
// 005fc51b: MOV EAX,dword ptr [EBX + 0xbf90]
// 005fc521: FSTP float ptr [EBX + 0x243c]
// 005fc527: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005fc52e: ADD ESP,0x4
// 005fc531: TEST EDX,EDX
// 005fc533: JZ 0x005fc607
//   XREF to: 005fc607 (CONDITIONAL_JUMP)
// 005fc539: FLD float ptr [EBX + 0x243c]
//   Label: LAB_005fc539
// 005fc53f: FLDZ
// 005fc541: LEA EDX,[EBX + 0x158]
// 005fc547: MOV dword ptr [EBX + 0xbe38],0x3f99999a
// 005fc551: FCOMPP
// 005fc553: FNSTSW AX
// 005fc555: SAHF
// 005fc556: JC 0x005fc671
//   XREF to: 005fc671 (CONDITIONAL_JUMP)
// 005fc55c: PUSH EDX
// 005fc55d: MOV dword ptr [EBX + 0x243c],0x0
// 005fc567: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005fc56c: MOV EAX,dword ptr [EAX + 0x24]
// 005fc56f: ADD ESP,0x4
// 005fc572: CMP EAX,0x8
// 005fc575: JZ 0x005fc5f9
//   XREF to: 005fc5f9 (CONDITIONAL_JUMP)
// 005fc57b: CMP EAX,0x7
// 005fc57e: JZ 0x005fc5f9
//   XREF to: 005fc5f9 (CONDITIONAL_JUMP)
// 005fc580: PUSH ESI
// 005fc581: PUSH EBX
// 005fc582: CALL core_zombie.cpp_CZombie_FUN_005fbde0
//   XREF to: 005fbde0 (UNCONDITIONAL_CALL)
// 005fc587: MOV EAX,dword ptr [EBX + 0xbf90]
// 005fc58d: MOV ESI,0x6
// 005fc592: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005fc599: ADD ESP,0x4
// 005fc59c: TEST EBP,EBP
// 005fc59e: JZ 0x005fc612
//   XREF to: 005fc612 (CONDITIONAL_JUMP)
// 005fc5a0: PUSH 0x1
//   Label: LAB_005fc5a0
// 005fc5a2: PUSH ESI
// 005fc5a3: LEA EAX,[EBX + 0x158]
// 005fc5a9: PUSH EAX
// 005fc5aa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fc5af: ADD ESP,0xc
// 005fc5b2: MOV ESI,dword ptr [EBX + 0xbf9c]
// 005fc5b8: PUSH ESI
// 005fc5b9: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005fc5be: MOV EBP,dword ptr [EBX + 0xbf48]
// 005fc5c4: ADD ESP,0x4
// 005fc5c7: TEST EBP,EBP
// 005fc5c9: JZ 0x005fc667
//   XREF to: 005fc667 (CONDITIONAL_JUMP)
// 005fc5cf: PUSH 0x6589e9
//   XREF to: 006589e9 (DATA)
// 005fc5d4: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_005fc5d4
// 005fc5da: PUSH EBX
// 005fc5db: CALL dword ptr [EAX + 0x24]
// 005fc5de: ADD ESP,0x8
// 005fc5e1: PUSH 0x41c80000
// 005fc5e6: PUSH 0x32
// 005fc5e8: MOV EAX,dword ptr [EBX + 0x154]
// 005fc5ee: PUSH EBX
// 005fc5ef: CALL dword ptr [EAX + 0xa0]
// 005fc5f5: ADD ESP,0xc
// 005fc5f8: POP ESI
// 005fc5f9: PUSH EDI
//   Label: LAB_005fc5f9
// 005fc5fa: PUSH EBX
// 005fc5fb: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005fc600: ADD ESP,0x8
// 005fc603: POP EBP
// 005fc604: POP EDI
// 005fc605: POP EBX
// 005fc606: RET
// 005fc607: MOV dword ptr [EBX + 0x243c],EDX
//   Label: LAB_005fc607
// 005fc60d: JMP 0x005fc539
//   XREF to: 005fc539 (UNCONDITIONAL_JUMP)
// 005fc612: MOV EAX,dword ptr [EBX + 0xbf80]
//   Label: LAB_005fc612
// 005fc618: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc620: JNZ 0x005fc636
//   XREF to: 005fc636 (CONDITIONAL_JUMP)
// 005fc622: MOV EAX,dword ptr [EBX + 0xbf78]
// 005fc628: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc630: JZ 0x005fc5a0
//   XREF to: 005fc5a0 (CONDITIONAL_JUMP)
// 005fc636: PUSH 0x0
//   Label: LAB_005fc636
// 005fc638: PUSH 0x6589dd
//   XREF to: 006589dd (DATA)
// 005fc63d: LEA EAX,[EBX + 0x158]
// 005fc643: PUSH EAX
// 005fc644: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005fc649: ADD ESP,0x4
// 005fc64c: PUSH EAX
// 005fc64d: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005fc652: ADD ESP,0xc
// 005fc655: TEST EAX,EAX
// 005fc657: JL 0x005fc5a0
//   XREF to: 005fc5a0 (CONDITIONAL_JUMP)
// 005fc65d: MOV ESI,0x9
// 005fc662: JMP 0x005fc5a0
//   XREF to: 005fc5a0 (UNCONDITIONAL_JUMP)
// 005fc667: PUSH 0x6589fb
//   Label: LAB_005fc667
//   XREF to: 006589fb (DATA)
// 005fc66c: JMP 0x005fc5d4
//   XREF to: 005fc5d4 (UNCONDITIONAL_JUMP)
// 005fc671: PUSH 0x1
//   Label: LAB_005fc671
// 005fc673: PUSH 0x4
// 005fc675: PUSH EDX
// 005fc676: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fc67b: FLD float ptr [EBX + 0xbf94]
// 005fc681: FLDZ
// 005fc683: ADD ESP,0xc
// 005fc686: FCOMPP
// 005fc688: FNSTSW AX
// 005fc68a: SAHF
// 005fc68b: JC 0x005fc5f9
//   XREF to: 005fc5f9 (CONDITIONAL_JUMP)
// 005fc691: MOV ECX,dword ptr [EBX + 0xbf9c]
// 005fc697: PUSH ECX
// 005fc698: MOV dword ptr [EBX + 0xbf94],0x40000000
// 005fc6a2: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005fc6a7: ADD ESP,0x4
// 005fc6aa: TEST EAX,EAX
// 005fc6ac: JNZ 0x005fc5f9
//   XREF to: 005fc5f9 (CONDITIONAL_JUMP)
// 005fc6b2: CMP dword ptr [EBX + 0xbf48],0x0
// 005fc6b9: JZ 0x005fc6e1
//   XREF to: 005fc6e1 (CONDITIONAL_JUMP)
// 005fc6bb: PUSH 0x658a07
//   XREF to: 00658a07 (DATA)
// 005fc6c0: MOV EAX,dword ptr [EBX + 0x154]
// 005fc6c6: PUSH EBX
// 005fc6c7: CALL dword ptr [EAX + 0x24]
// 005fc6ca: ADD ESP,0x8
// 005fc6cd: MOV dword ptr [EBX + 0xbf9c],EAX
// 005fc6d3: PUSH EDI
// 005fc6d4: PUSH EBX
// 005fc6d5: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005fc6da: ADD ESP,0x8
// 005fc6dd: POP EBP
// 005fc6de: POP EDI
// 005fc6df: POP EBX
// 005fc6e0: RET
// 005fc6e1: PUSH 0x658a19
//   Label: LAB_005fc6e1
//   XREF to: 00658a19 (DATA)
// 005fc6e6: MOV EAX,dword ptr [EBX + 0x154]
// 005fc6ec: PUSH EBX
// 005fc6ed: CALL dword ptr [EAX + 0x24]
// 005fc6f0: ADD ESP,0x8
// 005fc6f3: MOV dword ptr [EBX + 0xbf9c],EAX
// 005fc6f9: PUSH EDI
// 005fc6fa: PUSH EBX
// 005fc6fb: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005fc700: ADD ESP,0x8
// 005fc703: POP EBP
// 005fc704: POP EDI
// 005fc705: POP EBX
// 005fc706: RET
