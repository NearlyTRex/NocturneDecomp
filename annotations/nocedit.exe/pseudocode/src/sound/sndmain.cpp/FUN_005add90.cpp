// Name: sound_sndmain.cpp_FUN_005add90
// Address: 005add90
// Address Range: [[005add90, 005adda8]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005add90()
// Function calls:
//   sound_sndmain.cpp_FUN_005a8550

#include "nocturne.h"

int sound_sndmain_cpp_FUN_005add90(void)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = sound_sndmain_cpp_FUN_005a8550();
  return iVar1 * *(int *)(in_stack_00000008 + 0x160);
}


// Assembly code:
// 005add90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005add90
//   XREF to: Stack[0x4] (READ)
// 005add94: PUSH EDX
// 005add95: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005add9a: ADD ESP,0x4
// 005add9d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005adda1: IMUL EAX,dword ptr [EDX + 0x160]
// 005adda8: RET
