// Name: sound_mp3.cpp_FUN_00534d10
// Address: 00534d10
// Address Range: [[00534d10, 00534d3a]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00534d10()
// Function calls:
//   sound_mp3.cpp_FUN_00534ba0
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40

#include "nocturne.h"

int sound_mp3_cpp_FUN_00534d10(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  sound_mp3_cpp_FUN_00534ba0();
  while( true ) {
    iVar1 = sound_mp3_cpp_MpegLoadMaybe_FUN_00534d40();
    if (iVar1 < 1) break;
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


// Assembly code:
// 00534d10: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00534d10
// 00534d11: PUSH ESI
// 00534d12: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00534d16: PUSH 0x0
// 00534d18: PUSH ESI
// 00534d19: XOR EBX,EBX
// 00534d1b: CALL sound_mp3.cpp_FUN_00534ba0
//   XREF to: 00534ba0 (UNCONDITIONAL_CALL)
// 00534d20: ADD ESP,0x8
// 00534d23: PUSH 0x0
//   Label: LAB_00534d23
// 00534d25: PUSH ESI
// 00534d26: CALL sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40
//   XREF to: 00534d40 (UNCONDITIONAL_CALL)
// 00534d2b: ADD ESP,0x8
// 00534d2e: TEST EAX,EAX
// 00534d30: JLE 0x00534d36
//   XREF to: 00534d36 (CONDITIONAL_JUMP)
// 00534d32: ADD EBX,EAX
// 00534d34: JMP 0x00534d23
//   XREF to: 00534d23 (UNCONDITIONAL_JUMP)
// 00534d36: MOV EAX,EBX
//   Label: LAB_00534d36
// 00534d38: POP ESI
// 00534d39: POP EBX
// 00534d3a: RET
