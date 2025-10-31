// Name: core_hotdemon.cpp_FUN_004f79b0
// Address: 004f79b0
// Address Range: [[004f79b0, 004f79c2]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f79b0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f79b0(undefined4 param_1, undefined4
   param_2) */

void core_hotdemon_cpp_FUN_004f79b0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 004f79b0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_hotdemon.cpp_FUN_004f79b0
//   XREF to: Stack[0x8] (READ)
// 004f79b4: PUSH EDX
// 004f79b5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f79b9: PUSH ECX
// 004f79ba: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 004f79bf: ADD ESP,0x8
// 004f79c2: RET
