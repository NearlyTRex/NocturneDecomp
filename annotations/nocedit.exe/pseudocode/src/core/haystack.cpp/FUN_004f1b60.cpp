// Name: core_haystack.cpp_FUN_004f1b60
// Address: 004f1b60
// Address Range: [[004f1b60, 004f1b6d]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1b60()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a2c0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1b60(undefined4 param_1) */

void core_haystack_cpp_FUN_004f1b60(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f1b60: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_haystack.cpp_FUN_004f1b60
//   XREF to: Stack[0x4] (READ)
// 004f1b64: PUSH EDX
// 004f1b65: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004f1b6a: ADD ESP,0x4
// 004f1b6d: RET
