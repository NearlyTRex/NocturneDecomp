// Name: core_mobster.cpp_FUN_005279d0
// Address: 005279d0
// Address Range: [[005279d0, 005279e2]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005279d0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_005279d0(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_005279d0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 005279d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_mobster.cpp_FUN_005279d0
//   XREF to: Stack[0x8] (READ)
// 005279d4: PUSH EDX
// 005279d5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005279d9: PUSH ECX
// 005279da: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 005279df: ADD ESP,0x8
// 005279e2: RET
