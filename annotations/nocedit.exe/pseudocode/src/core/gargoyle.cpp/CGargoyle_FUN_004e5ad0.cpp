// Name: core_gargoyle.cpp_CGargoyle_FUN_004e5ad0
// Address: 004e5ad0
// Address Range: [[004e5ad0, 004e5ae2]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e5ad0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e5ad0(CGargoyle* param_1,
   undefined4 param_2) */

void core_gargoyle_cpp_CGargoyle_FUN_004e5ad0(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return;
}


// Assembly code:
// 004e5ad0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_gargoyle.cpp_CGargoyle_FUN_004e5ad0
//   XREF to: Stack[0x8] (READ)
// 004e5ad4: PUSH EDX
// 004e5ad5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5ad9: PUSH ECX
// 004e5ada: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 004e5adf: ADD ESP,0x8
// 004e5ae2: RET
