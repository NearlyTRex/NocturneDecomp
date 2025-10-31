// Name: core_colonel.cpp_FUN_00440610
// Address: 00440610
// Address Range: [[00440610, 00440622]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_00440610()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_00440610(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_00440610(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3f20(in_stack_00000004);
  return;
}


// Assembly code:
// 00440610: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_colonel.cpp_FUN_00440610
//   XREF to: Stack[0x8] (READ)
// 00440614: PUSH EDX
// 00440615: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00440619: PUSH ECX
// 0044061a: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 0044061f: ADD ESP,0x8
// 00440622: RET
