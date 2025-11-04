// Name: core_drone.cpp_FUN_0048f360
// Address: 0048f360
// Address Range: [[0048f360, 0048f4c7]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f360()
// Globals:
//   TerminatedCString s_drone_die_wav_00622437
//   TerminatedCString s_drone_hurt_wav_00622446
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048f360(undefined4 param_1, undefined4 param_2)
    */

void core_drone_cpp_FUN_0048f360(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(undefined4 *)(in_stack_00000004 + 0xbec8) = uVar3;
    }
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),3,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),4,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),5,1);
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  else {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0
                      ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    }
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(undefined4 *)(in_stack_00000004 + 0xbec8) = uVar3;
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 0048f360: PUSH EBX
//   Label: core_drone.cpp_FUN_0048f360
// 0048f361: PUSH ESI
// 0048f362: PUSH EDI
// 0048f363: PUSH EBP
// 0048f364: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f368: MOV EDX,dword ptr [EBX + 0xbed0]
// 0048f36e: PUSH EDX
// 0048f36f: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f374: ADD ESP,0x4
// 0048f377: MOV ECX,dword ptr [EBX + 0xbecc]
// 0048f37d: PUSH ECX
// 0048f37e: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f383: ADD ESP,0x4
// 0048f386: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f38a: FLD float ptr [EAX + 0x4]
// 0048f38d: FSUBR float ptr [EBX + 0x243c]
// 0048f393: FST float ptr [EBX + 0x243c]
// 0048f399: FLDZ
// 0048f39b: FCOMPP
// 0048f39d: FNSTSW AX
// 0048f39f: SAHF
// 0048f3a0: JC 0x0048f422
//   XREF to: 0048f422 (CONDITIONAL_JUMP)
// 0048f3a6: LEA ESI,[EBX + 0x158]
// 0048f3ac: PUSH ESI
// 0048f3ad: MOV dword ptr [EBX + 0x243c],0x0
// 0048f3b7: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0048f3bc: MOV EAX,dword ptr [EAX + 0x24]
// 0048f3bf: ADD ESP,0x4
// 0048f3c2: CMP EAX,0x8
// 0048f3c5: JZ 0x0048f3d9
//   XREF to: 0048f3d9 (CONDITIONAL_JUMP)
// 0048f3c7: CMP EAX,0x7
// 0048f3ca: JZ 0x0048f3d9
//   XREF to: 0048f3d9 (CONDITIONAL_JUMP)
// 0048f3cc: PUSH 0x1
// 0048f3ce: PUSH 0x7
// 0048f3d0: PUSH ESI
// 0048f3d1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f3d6: ADD ESP,0xc
// 0048f3d9: MOV EBP,dword ptr [EBX + 0xbec8]
//   Label: LAB_0048f3d9
// 0048f3df: PUSH EBP
// 0048f3e0: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f3e5: ADD ESP,0x4
// 0048f3e8: MOV EAX,dword ptr [EBX + 0xbecc]
// 0048f3ee: PUSH EAX
// 0048f3ef: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f3f4: ADD ESP,0x4
// 0048f3f7: PUSH 0x622437
//   XREF to: 00622437 (DATA)
// 0048f3fc: MOV EAX,dword ptr [EBX + 0x154]
// 0048f402: PUSH EBX
// 0048f403: CALL dword ptr [EAX + 0x24]
// 0048f406: ADD ESP,0x8
// 0048f409: MOV dword ptr [EBX + 0xbec8],EAX
// 0048f40f: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0048f40f
//   XREF to: Stack[0x8] (READ)
// 0048f413: PUSH EDX
// 0048f414: PUSH EBX
// 0048f415: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0048f41a: ADD ESP,0x8
// 0048f41d: POP EBP
// 0048f41e: POP EDI
// 0048f41f: POP ESI
// 0048f420: POP EBX
// 0048f421: RET
// 0048f422: MOV ESI,dword ptr [EBX + 0xbecc]
//   Label: LAB_0048f422
// 0048f428: PUSH ESI
// 0048f429: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0048f42e: ADD ESP,0x4
// 0048f431: MOV EDI,dword ptr [EBX + 0xbec8]
// 0048f437: PUSH EDI
// 0048f438: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0048f43d: ADD ESP,0x4
// 0048f440: TEST EAX,EAX
// 0048f442: JZ 0x0048f4ab
//   XREF to: 0048f4ab (CONDITIONAL_JUMP)
// 0048f444: PUSH 0x2
//   Label: LAB_0048f444
// 0048f446: PUSH 0x0
// 0048f448: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0048f44d: ADD ESP,0x8
// 0048f450: MOV ESI,EAX
// 0048f452: TEST EAX,EAX
// 0048f454: JNZ 0x0048f469
//   XREF to: 0048f469 (CONDITIONAL_JUMP)
// 0048f456: PUSH 0x1
// 0048f458: PUSH 0x3
// 0048f45a: LEA EAX,[EBX + 0x158]
// 0048f460: PUSH EAX
// 0048f461: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f466: ADD ESP,0xc
// 0048f469: CMP ESI,0x1
//   Label: LAB_0048f469
// 0048f46c: JNZ 0x0048f480
//   XREF to: 0048f480 (CONDITIONAL_JUMP)
// 0048f46e: PUSH ESI
// 0048f46f: PUSH 0x4
// 0048f471: LEA EAX,[EBX + 0x158]
// 0048f477: PUSH EAX
// 0048f478: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f47d: ADD ESP,0xc
// 0048f480: CMP ESI,0x2
//   Label: LAB_0048f480
// 0048f483: JNZ 0x0048f40f
//   XREF to: 0048f40f (CONDITIONAL_JUMP)
// 0048f485: PUSH 0x1
// 0048f487: PUSH 0x5
// 0048f489: LEA EAX,[EBX + 0x158]
// 0048f48f: PUSH EAX
// 0048f490: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048f495: ADD ESP,0xc
// 0048f498: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f49c: PUSH EDX
// 0048f49d: PUSH EBX
// 0048f49e: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0048f4a3: ADD ESP,0x8
// 0048f4a6: POP EBP
// 0048f4a7: POP EDI
// 0048f4a8: POP ESI
// 0048f4a9: POP EBX
// 0048f4aa: RET
// 0048f4ab: PUSH 0x622446
//   Label: LAB_0048f4ab
//   XREF to: 00622446 (DATA)
// 0048f4b0: MOV EAX,dword ptr [EBX + 0x154]
// 0048f4b6: PUSH EBX
// 0048f4b7: CALL dword ptr [EAX + 0x24]
// 0048f4ba: ADD ESP,0x8
// 0048f4bd: MOV dword ptr [EBX + 0xbec8],EAX
// 0048f4c3: JMP 0x0048f444
//   XREF to: 0048f444 (UNCONDITIONAL_JUMP)
