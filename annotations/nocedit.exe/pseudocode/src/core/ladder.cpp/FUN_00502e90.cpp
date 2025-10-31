// Name: core_ladder.cpp_FUN_00502e90
// Address: 00502e90
// Address Range: [[00502e90, 00502eab]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502e90()

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502e90(undefined4 param_1, undefined4
   param_2) */

void core_ladder_cpp_FUN_00502e90(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x2e0)) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2e0) = 0;
  return;
}


// Assembly code:
// 00502e90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ladder.cpp_FUN_00502e90
//   XREF to: Stack[0x4] (READ)
// 00502e94: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00502e98: CMP EDX,dword ptr [EAX + 0x2e0]
// 00502e9e: JZ 0x00502ea1
//   XREF to: 00502ea1 (CONDITIONAL_JUMP)
// 00502ea0: RET
// 00502ea1: MOV dword ptr [EAX + 0x2e0],0x0
//   Label: LAB_00502ea1
// 00502eab: RET
