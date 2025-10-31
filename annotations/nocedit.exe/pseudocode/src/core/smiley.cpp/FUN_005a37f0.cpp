// Name: core_smiley.cpp_FUN_005a37f0
// Address: 005a37f0
// Address Range: [[005a37f0, 005a3802]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a37f0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a37f0(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a37f0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 005a37f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_smiley.cpp_FUN_005a37f0
//   XREF to: Stack[0x8] (READ)
// 005a37f4: PUSH EDX
// 005a37f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a37f9: PUSH ECX
// 005a37fa: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 005a37ff: ADD ESP,0x8
// 005a3802: RET
