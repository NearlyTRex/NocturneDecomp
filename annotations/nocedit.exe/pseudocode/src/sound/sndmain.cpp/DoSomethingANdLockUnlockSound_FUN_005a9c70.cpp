// Name: sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70
// Address: 005a9c70
// Address Range: [[005a9c70, 005a9cbb]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab6ab [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdd07 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_DoSomethingANdLockUnlockSound(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4) */

undefined4 sound_sndmain_cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70(void)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10c) = in_stack_0000000c;
  *(undefined4 *)(iVar1 + 0x110) = in_stack_00000010;
  *(float *)(iVar1 + 0x114) = (float)in_stack_00000014;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9c70: SUB ESP,0x4
//   Label: sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70
// 005a9c73: PUSH 0x1
// 005a9c75: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9c79: PUSH EDX
// 005a9c7a: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9c7f: ADD ESP,0x8
// 005a9c82: TEST EAX,EAX
// 005a9c84: JNZ 0x005a9c8a
//   XREF to: 005a9c8a (CONDITIONAL_JUMP)
// 005a9c86: ADD ESP,0x4
// 005a9c89: RET
// 005a9c8a: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_005a9c8a
//   XREF to: Stack[0x8] (READ)
// 005a9c8e: MOV dword ptr [EAX + 0x10c],EDX
// 005a9c94: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005a9c98: MOV dword ptr [EAX + 0x110],EDX
// 005a9c9e: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005a9ca2: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x4] (DATA)
// 005a9ca5: FILD dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005a9ca8: FSTP float ptr [EAX + 0x114]
// 005a9cae: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9cb3: MOV EAX,0x1
// 005a9cb8: ADD ESP,0x4
// 005a9cbb: RET
