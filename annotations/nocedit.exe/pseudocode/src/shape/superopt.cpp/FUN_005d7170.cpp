// Name: shape_superopt.cpp_FUN_005d7170
// Address: 005d7170
// Address Range: [[005d7170, 005d7182]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d7170()
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7c9f [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d7170(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d7170(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x2c) = in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x30) = in_stack_0000000c;
  return;
}


// Assembly code:
// 005d7170: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d7170
//   XREF to: Stack[0x4] (READ)
// 005d7174: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d7178: MOV dword ptr [EDX + 0x2c],EAX
// 005d717b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005d717f: MOV dword ptr [EDX + 0x30],EAX
// 005d7182: RET
