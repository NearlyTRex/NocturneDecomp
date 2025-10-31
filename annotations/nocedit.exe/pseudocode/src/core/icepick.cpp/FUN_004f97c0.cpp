// Name: core_icepick.cpp_FUN_004f97c0
// Address: 004f97c0
// Address Range: [[004f97c0, 004f97d2]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f97c0()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f97c0(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f97c0(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f97c0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_icepick.cpp_FUN_004f97c0
//   XREF to: Stack[0x8] (READ)
// 004f97c4: PUSH EDX
// 004f97c5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f97c9: PUSH ECX
// 004f97ca: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 004f97cf: ADD ESP,0x8
// 004f97d2: RET
