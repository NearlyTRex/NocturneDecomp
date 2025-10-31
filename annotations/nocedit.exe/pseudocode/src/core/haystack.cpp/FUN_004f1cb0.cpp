// Name: core_haystack.cpp_FUN_004f1cb0
// Address: 004f1cb0
// Address Range: [[004f1cb0, 004f1cc2]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1cb0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1cb0(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1cb0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f1cb0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_haystack.cpp_FUN_004f1cb0
//   XREF to: Stack[0x8] (READ)
// 004f1cb4: PUSH EDX
// 004f1cb5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1cb9: PUSH ECX
// 004f1cba: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 004f1cbf: ADD ESP,0x8
// 004f1cc2: RET
