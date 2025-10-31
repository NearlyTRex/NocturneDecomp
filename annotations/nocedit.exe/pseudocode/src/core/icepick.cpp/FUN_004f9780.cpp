// Name: core_icepick.cpp_FUN_004f9780
// Address: 004f9780
// Address Range: [[004f9780, 004f9792]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f9780()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f9780(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f9780(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f9780: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_icepick.cpp_FUN_004f9780
//   XREF to: Stack[0x8] (READ)
// 004f9784: PUSH EDX
// 004f9785: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f9789: PUSH ECX
// 004f978a: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 004f978f: ADD ESP,0x8
// 004f9792: RET
