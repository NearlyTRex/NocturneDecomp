// Name: core_haystack.cpp_FUN_004f1ca0
// Address: 004f1ca0
// Address Range: [[004f1ca0, 004f1cae]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1ca0()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1ca0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1ca0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  return;
}


// Assembly code:
// 004f1ca0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_haystack.cpp_FUN_004f1ca0
//   XREF to: Stack[0x4] (READ)
// 004f1ca4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004f1ca8: MOV dword ptr [EDX + 0x1fbd4],EAX
// 004f1cae: RET
