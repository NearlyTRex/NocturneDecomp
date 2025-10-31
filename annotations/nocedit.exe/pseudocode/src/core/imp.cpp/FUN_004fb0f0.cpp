// Name: core_imp.cpp_FUN_004fb0f0
// Address: 004fb0f0
// Address Range: [[004fb0f0, 004fb102]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fb0f0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fb0f0(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fb0f0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 004fb0f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_imp.cpp_FUN_004fb0f0
//   XREF to: Stack[0x8] (READ)
// 004fb0f4: PUSH EDX
// 004fb0f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fb0f9: PUSH ECX
// 004fb0fa: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 004fb0ff: ADD ESP,0x8
// 004fb102: RET
