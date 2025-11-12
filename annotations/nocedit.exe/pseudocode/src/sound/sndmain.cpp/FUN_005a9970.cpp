// Name: sound_sndmain.cpp_FUN_005a9970
// Address: 005a9970
// Address Range: [[005a9970, 005a99fb]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9970()
// Globals:
//   CSound* g_CSoundPtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a9970(void)

{
  CSfxSlot *this_ptr;
  undefined4 uVar1;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).field5_0x14[0x28] = '\0';
  (this_ptr->options).field5_0x14[0x29] = '\0';
  (this_ptr->options).field5_0x14[0x2a] = '\0';
  (this_ptr->options).field5_0x14[0x2b] = '\0';
  (this_ptr->options).field5_0x14[0x2c] = '\0';
  (this_ptr->options).field5_0x14[0x2d] = '\0';
  (this_ptr->options).field5_0x14[0x2e] = '\0';
  (this_ptr->options).field5_0x14[0x2f] = '\0';
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x10) = in_stack_00000008;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x14) = in_stack_0000000c;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x18) = in_stack_00000010;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x1c) = in_stack_00000014;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x20) = in_stack_00000018;
  uVar1 = 1;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x24) = in_stack_0000001c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  if ((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundPtr != (CSound *)0x0)) {
    uVar1 = (*(code *)g_CSoundPtr->vtable[1].func2)();
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return uVar1;
}


// Assembly code:
// 005a9970: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a9970
// 005a9971: PUSH 0x1
// 005a9973: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9977: PUSH EDX
// 005a9978: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a997d: MOV EBX,EAX
// 005a997f: ADD ESP,0x8
// 005a9982: TEST EAX,EAX
// 005a9984: JNZ 0x005a9988
//   XREF to: 005a9988 (CONDITIONAL_JUMP)
// 005a9986: POP EBX
// 005a9987: RET
// 005a9988: PUSH EDI
//   Label: LAB_005a9988
// 005a9989: PUSH ESI
// 005a998a: MOV dword ptr [EBX + 0x3c],0x0
// 005a9991: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a9995: MOV dword ptr [EBX + 0x40],0x0
// 005a999c: MOV dword ptr [EBX + 0x24],EAX
// 005a999f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005a99a3: MOV dword ptr [EBX + 0x28],EAX
// 005a99a6: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005a99aa: MOV dword ptr [EBX + 0x2c],EAX
// 005a99ad: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 005a99b1: PUSH 0x0
// 005a99b3: MOV dword ptr [EBX + 0x30],EAX
// 005a99b6: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a99ba: PUSH EBX
// 005a99bb: MOV dword ptr [EBX + 0x34],EAX
// 005a99be: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 005a99c2: MOV ESI,0x1
// 005a99c7: MOV dword ptr [EBX + 0x38],EAX
// 005a99ca: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a99cf: MOV ECX,dword ptr [EBX + 0x70]
// 005a99d2: ADD ESP,0x8
// 005a99d5: TEST ECX,ECX
// 005a99d7: JZ 0x005a99f1
//   XREF to: 005a99f1 (CONDITIONAL_JUMP)
// 005a99d9: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a99df: TEST EDI,EDI
// 005a99e1: JZ 0x005a99f1
//   XREF to: 005a99f1 (CONDITIONAL_JUMP)
// 005a99e3: PUSH 0x4
// 005a99e5: PUSH EBX
// 005a99e6: MOV ESI,dword ptr [EDI]
// 005a99e8: PUSH EDI
// 005a99e9: CALL dword ptr [ESI + 0x40]
// 005a99ec: ADD ESP,0xc
// 005a99ef: MOV ESI,EAX
// 005a99f1: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a99f1
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a99f6: MOV EAX,ESI
// 005a99f8: POP ESI
// 005a99f9: POP EDI
// 005a99fa: POP EBX
// 005a99fb: RET
