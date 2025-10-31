// Name: core_haystack.cpp_FUN_004f1cf0
// Address: 004f1cf0
// Address Range: [[004f1cf0, 004f1d02]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1cf0()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1cf0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1cf0(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f1cf0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_haystack.cpp_FUN_004f1cf0
//   XREF to: Stack[0x8] (READ)
// 004f1cf4: PUSH EDX
// 004f1cf5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1cf9: PUSH ECX
// 004f1cfa: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 004f1cff: ADD ESP,0x8
// 004f1d02: RET
