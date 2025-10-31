// Name: core_baron.cpp_FUN_00414090
// Address: 00414090
// Address Range: [[00414090, 0041409e]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_00414090()

#include "nocturne.h"

void core_baron_cpp_FUN_00414090(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0xb7e0) = in_stack_00000008;
  return;
}


// Assembly code:
// 00414090: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_baron.cpp_FUN_00414090
//   XREF to: Stack[0x4] (READ)
// 00414094: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00414098: MOV dword ptr [EDX + 0xb7e0],EAX
// 0041409e: RET
