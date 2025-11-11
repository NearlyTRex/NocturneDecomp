// Name: sound_sndmain.cpp_FUN_005a97e0
// Address: 005a97e0
// Address Range: [[005a97e0, 005a981b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a97e0()
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a97e0(void)

{
  CSfxSlot *this_ptr;
  int iVar1;
  byte bVar2;
  int *in_stack_00000010;
  
  bVar2 = 0;
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000010 = (this_ptr->options).status;
    this_ptr = (CSfxSlot *)((int)this_ptr + (uint)bVar2 * -8 + 4);
    in_stack_00000010 = in_stack_00000010 + (uint)bVar2 * -2 + 1;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a97e0: PUSH ESI
//   Label: sound_sndmain.cpp_FUN_005a97e0
// 005a97e1: PUSH 0x1
// 005a97e3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a97e7: PUSH EDX
// 005a97e8: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a97ed: MOV ESI,EAX
// 005a97ef: ADD ESP,0x8
// 005a97f2: TEST EAX,EAX
// 005a97f4: JNZ 0x005a97f8
//   XREF to: 005a97f8 (CONDITIONAL_JUMP)
// 005a97f6: POP ESI
// 005a97f7: RET
// 005a97f8: PUSH EDI
//   Label: LAB_005a97f8
// 005a97f9: PUSH 0x0
// 005a97fb: PUSH EAX
// 005a97fc: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9801: ADD ESP,0x8
// 005a9804: MOV ECX,0x1c
// 005a9809: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a980d: MOVSD.REP ES:EDI,ESI
// 005a980f: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9814: MOV EAX,0x1
// 005a9819: POP EDI
// 005a981a: POP ESI
// 005a981b: RET
