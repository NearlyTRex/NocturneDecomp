// Name: core_biggs.cpp_FUN_00418c60
// Address: 00418c60
// Address Range: [[00418c60, 00418c72]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418c60()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_00418c60(undefined4 param_1, undefined4 param_2)
    */

void core_biggs_cpp_FUN_00418c60(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 00418c60: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_biggs.cpp_FUN_00418c60
//   XREF to: Stack[0x8] (READ)
// 00418c64: PUSH EDX
// 00418c65: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418c69: PUSH ECX
// 00418c6a: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 00418c6f: ADD ESP,0x8
// 00418c72: RET
