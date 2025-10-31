// Name: core_haystack.cpp_FUN_004f1cd0
// Address: 004f1cd0
// Address Range: [[004f1cd0, 004f1ce2]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1cd0()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1cd0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1cd0(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3f20(in_stack_00000004);
  return;
}


// Assembly code:
// 004f1cd0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_haystack.cpp_FUN_004f1cd0
//   XREF to: Stack[0x8] (READ)
// 004f1cd4: PUSH EDX
// 004f1cd5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1cd9: PUSH ECX
// 004f1cda: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 004f1cdf: ADD ESP,0x8
// 004f1ce2: RET
