// Name: core_boxactor.cpp_FUN_004224e0
// Address: 004224e0
// Address Range: [[004224e0, 004224ee]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004224e0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004224e0(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_FUN_004224e0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x318) = in_stack_00000008;
  return;
}


// Assembly code:
// 004224e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_boxactor.cpp_FUN_004224e0
//   XREF to: Stack[0x4] (READ)
// 004224e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004224e8: MOV dword ptr [EDX + 0x318],EAX
// 004224ee: RET
