// Name: core_icepick.cpp_FUN_004f95a0
// Address: 004f95a0
// Address Range: [[004f95a0, 004f95ad]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f95a0()
// Function calls:
//   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f95a0(undefined4 param_1) */

void core_icepick_cpp_FUN_004f95a0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f95a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_icepick.cpp_FUN_004f95a0
//   XREF to: Stack[0x4] (READ)
// 004f95a4: PUSH EDX
// 004f95a5: CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004f95aa: ADD ESP,0x4
// 004f95ad: RET
