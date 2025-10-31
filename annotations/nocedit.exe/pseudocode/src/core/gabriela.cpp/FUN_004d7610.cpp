// Name: core_gabriela.cpp_FUN_004d7610
// Address: 004d7610
// Address Range: [[004d7610, 004d7622]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d7610()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d7610(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d7610(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3f20(in_stack_00000004);
  return;
}


// Assembly code:
// 004d7610: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_gabriela.cpp_FUN_004d7610
//   XREF to: Stack[0x8] (READ)
// 004d7614: PUSH EDX
// 004d7615: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d7619: PUSH ECX
// 004d761a: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 004d761f: ADD ESP,0x8
// 004d7622: RET
