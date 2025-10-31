// Name: core_sentinel.cpp_FUN_00568ef0
// Address: 00568ef0
// Address Range: [[00568ef0, 00568f02]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568ef0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568ef0(undefined4 param_1, undefined4
   param_2) */

void core_sentinel_cpp_FUN_00568ef0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 00568ef0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_sentinel.cpp_FUN_00568ef0
//   XREF to: Stack[0x8] (READ)
// 00568ef4: PUSH EDX
// 00568ef5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00568ef9: PUSH ECX
// 00568efa: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 00568eff: ADD ESP,0x8
// 00568f02: RET
