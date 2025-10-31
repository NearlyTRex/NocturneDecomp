// Name: core_event.cpp_FUN_004aa2f0
// Address: 004aa2f0
// Address Range: [[004aa2f0, 004aa311]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa2f0()
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

void core_event_cpp_FUN_004aa2f0(void)

{
  int in_stack_00000004;
  int *in_stack_00000008;
  
  while ((g_CharacterClassificationTable
          [(byte)(*(char *)(in_stack_00000004 + *in_stack_00000008) + 1)] & 2U) != 0) {
    *in_stack_00000008 = *in_stack_00000008 + 1;
  }
  return;
}


// Assembly code:
// 004aa2f0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004aa2f0
//   XREF to: Stack[0x4] (READ)
// 004aa2f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004aa2f8: MOV EDX,dword ptr [EAX]
//   Label: LAB_004aa2f8
// 004aa2fa: MOV DL,byte ptr [ECX + EDX*0x1]
// 004aa2fd: INC DL
// 004aa2ff: AND EDX,0xff
// 004aa305: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa30c: JZ 0x004aa2c9
//   XREF to: 004aa2c9 (CONDITIONAL_JUMP)
// 004aa30e: INC dword ptr [EAX]
// 004aa310: JMP 0x004aa2f8
//   XREF to: 004aa2f8 (UNCONDITIONAL_JUMP)
