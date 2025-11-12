// Name: sound_sndmain.cpp_FUN_005a9a70
// Address: 005a9a70
// Address Range: [[005a9a70, 005a9ad1]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9a70()
// Globals:
//   CSound* g_CSoundPtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a9a70(void)

{
  CSfxSlot *this_ptr;
  undefined4 uVar1;
  undefined4 in_stack_00000008;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).field5_0x14[0x2c] = '\x02';
  (this_ptr->options).field5_0x14[0x2d] = '\0';
  (this_ptr->options).field5_0x14[0x2e] = '\0';
  (this_ptr->options).field5_0x14[0x2f] = '\0';
  uVar1 = 1;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x28) = in_stack_00000008;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  if ((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundPtr != (CSound *)0x0)) {
    uVar1 = (*(code *)g_CSoundPtr->vtable[1].func2)();
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return uVar1;
}


// Assembly code:
// 005a9a70: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a9a70
// 005a9a71: PUSH 0x1
// 005a9a73: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9a77: PUSH EDX
// 005a9a78: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9a7d: MOV EBX,EAX
// 005a9a7f: ADD ESP,0x8
// 005a9a82: TEST EAX,EAX
// 005a9a84: JNZ 0x005a9a88
//   XREF to: 005a9a88 (CONDITIONAL_JUMP)
// 005a9a86: POP EBX
// 005a9a87: RET
// 005a9a88: PUSH EDI
//   Label: LAB_005a9a88
// 005a9a89: PUSH ESI
// 005a9a8a: PUSH 0x0
// 005a9a8c: MOV dword ptr [EAX + 0x40],0x2
// 005a9a93: PUSH EBX
// 005a9a94: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005a9a98: MOV ESI,0x1
// 005a9a9d: MOV dword ptr [EBX + 0x3c],EAX
// 005a9aa0: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9aa5: MOV ECX,dword ptr [EBX + 0x70]
// 005a9aa8: ADD ESP,0x8
// 005a9aab: TEST ECX,ECX
// 005a9aad: JZ 0x005a9ac7
//   XREF to: 005a9ac7 (CONDITIONAL_JUMP)
// 005a9aaf: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9ab5: TEST EDI,EDI
// 005a9ab7: JZ 0x005a9ac7
//   XREF to: 005a9ac7 (CONDITIONAL_JUMP)
// 005a9ab9: PUSH 0x4
// 005a9abb: PUSH EBX
// 005a9abc: MOV ESI,dword ptr [EDI]
// 005a9abe: PUSH EDI
// 005a9abf: CALL dword ptr [ESI + 0x40]
// 005a9ac2: ADD ESP,0xc
// 005a9ac5: MOV ESI,EAX
// 005a9ac7: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9ac7
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9acc: MOV EAX,ESI
// 005a9ace: POP ESI
// 005a9acf: POP EDI
// 005a9ad0: POP EBX
// 005a9ad1: RET
