// Name: shape_superopt.cpp_FUN_005d71c0
// Address: 005d71c0
// Address Range: [[005d71c0, 005d71cb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d71c0()
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7cb1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d71c0(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005d71c0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x34) = in_stack_00000008;
  return;
}


// Assembly code:
// 005d71c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_FUN_005d71c0
//   XREF to: Stack[0x4] (READ)
// 005d71c4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d71c8: MOV dword ptr [EDX + 0x34],EAX
// 005d71cb: RET
