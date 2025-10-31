// Name: sound_sndmain.cpp_FUN_005a9c10
// Address: 005a9c10
// Address Range: [[005a9c10, 005a9c38]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9c10()
// Function calls:
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a9c10(void)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  iVar1 = sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x118) = in_stack_0000000c;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9c10: PUSH 0x1
//   Label: sound_sndmain.cpp_FUN_005a9c10
// 005a9c12: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9c16: PUSH EDX
// 005a9c17: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9c1c: ADD ESP,0x8
// 005a9c1f: TEST EAX,EAX
// 005a9c21: JNZ 0x005a9c24
//   XREF to: 005a9c24 (CONDITIONAL_JUMP)
// 005a9c23: RET
// 005a9c24: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_005a9c24
//   XREF to: Stack[0x8] (READ)
// 005a9c28: MOV dword ptr [EAX + 0x118],EDX
// 005a9c2e: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9c33: MOV EAX,0x1
// 005a9c38: RET
