// Name: core_event.cpp_FUN_004aa2d0
// Address: 004aa2d0
// Address Range: [[004aa2d0, 004aa2e9]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa2d0()
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

void core_event_cpp_FUN_004aa2d0(void)

{
  char *in_stack_00000004;
  
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}


// Assembly code:
// 004aa2d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004aa2d0
//   XREF to: Stack[0x4] (READ)
// 004aa2d4: MOV DL,byte ptr [EAX]
//   Label: LAB_004aa2d4
// 004aa2d6: INC DL
// 004aa2d8: AND EDX,0xff
// 004aa2de: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa2e5: JZ 0x004aa2c9
//   XREF to: 004aa2c9 (CONDITIONAL_JUMP)
// 004aa2e7: INC EAX
// 004aa2e8: JMP 0x004aa2d4
//   XREF to: 004aa2d4 (UNCONDITIONAL_JUMP)
