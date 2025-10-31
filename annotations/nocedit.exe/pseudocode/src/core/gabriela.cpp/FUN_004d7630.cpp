// Name: core_gabriela.cpp_FUN_004d7630
// Address: 004d7630
// Address Range: [[004d7630, 004d7642]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d7630()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d7630(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d7630(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 004d7630: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_gabriela.cpp_FUN_004d7630
//   XREF to: Stack[0x8] (READ)
// 004d7634: PUSH EDX
// 004d7635: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d7639: PUSH ECX
// 004d763a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 004d763f: ADD ESP,0x8
// 004d7642: RET
