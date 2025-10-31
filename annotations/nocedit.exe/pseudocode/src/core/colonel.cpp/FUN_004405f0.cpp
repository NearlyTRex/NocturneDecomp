// Name: core_colonel.cpp_FUN_004405f0
// Address: 004405f0
// Address Range: [[004405f0, 00440602]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_004405f0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_004405f0(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_004405f0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}


// Assembly code:
// 004405f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_colonel.cpp_FUN_004405f0
//   XREF to: Stack[0x8] (READ)
// 004405f4: PUSH EDX
// 004405f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004405f9: PUSH ECX
// 004405fa: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 004405ff: ADD ESP,0x8
// 00440602: RET
