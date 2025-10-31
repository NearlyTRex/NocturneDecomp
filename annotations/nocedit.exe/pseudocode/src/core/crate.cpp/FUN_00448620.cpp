// Name: core_crate.cpp_FUN_00448620
// Address: 00448620
// Address Range: [[00448620, 0044862e]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448620()

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448620(undefined4 param_1, undefined4 param_2)
    */

void core_crate_cpp_FUN_00448620(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = in_stack_00000008;
  return;
}


// Assembly code:
// 00448620: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_crate.cpp_FUN_00448620
//   XREF to: Stack[0x4] (READ)
// 00448624: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00448628: MOV dword ptr [EDX + 0x2d4],EAX
// 0044862e: RET
