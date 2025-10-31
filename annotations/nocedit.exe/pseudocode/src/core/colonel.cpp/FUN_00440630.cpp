// Name: core_colonel.cpp_FUN_00440630
// Address: 00440630
// Address Range: [[00440630, 00440642]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_00440630()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_00440630(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_00440630(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 00440630: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_colonel.cpp_FUN_00440630
//   XREF to: Stack[0x8] (READ)
// 00440634: PUSH EDX
// 00440635: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00440639: PUSH ECX
// 0044063a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 0044063f: ADD ESP,0x8
// 00440642: RET
