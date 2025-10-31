// Name: core_bodypart.cpp_FUN_00419fc0
// Address: 00419fc0
// Address Range: [[00419fc0, 00419fce]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419fc0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419fc0(undefined4 param_1, undefined4
   param_2) */

void core_bodypart_cpp_FUN_00419fc0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0xf28) = in_stack_00000008;
  return;
}


// Assembly code:
// 00419fc0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_FUN_00419fc0
//   XREF to: Stack[0x4] (READ)
// 00419fc4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00419fc8: MOV dword ptr [EDX + 0xf28],EAX
// 00419fce: RET
