// Name: core_charactr.cpp_FUN_0042f920
// Address: 0042f920
// Address Range: [[0042f920, 0042f92b]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042f920()

#include "nocturne.h"

void core_charactr_cpp_FUN_0042f920(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x20) = in_stack_00000008;
  return;
}


// Assembly code:
// 0042f920: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_FUN_0042f920
//   XREF to: Stack[0x4] (READ)
// 0042f924: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042f928: MOV dword ptr [EDX + 0x20],EAX
// 0042f92b: RET
