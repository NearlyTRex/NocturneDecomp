// Name: core_colonel.cpp_FUN_004405e0
// Address: 004405e0
// Address Range: [[004405e0, 004405ee]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_004405e0()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_004405e0(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_004405e0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  return;
}


// Assembly code:
// 004405e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_colonel.cpp_FUN_004405e0
//   XREF to: Stack[0x4] (READ)
// 004405e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004405e8: MOV dword ptr [EDX + 0x1fbd4],EAX
// 004405ee: RET
