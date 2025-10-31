// Name: core_colonel.cpp_FUN_004404a0
// Address: 004404a0
// Address Range: [[004404a0, 004404ad]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_004404a0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a2c0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_004404a0(undefined4 param_1) */

void core_colonel_cpp_FUN_004404a0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004404a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_colonel.cpp_FUN_004404a0
//   XREF to: Stack[0x4] (READ)
// 004404a4: PUSH EDX
// 004404a5: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004404aa: ADD ESP,0x4
// 004404ad: RET
