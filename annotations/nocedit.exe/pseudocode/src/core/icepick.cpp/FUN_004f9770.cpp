// Name: core_icepick.cpp_FUN_004f9770
// Address: 004f9770
// Address Range: [[004f9770, 004f977e]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f9770()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f9770(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f9770(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  return;
}


// Assembly code:
// 004f9770: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_icepick.cpp_FUN_004f9770
//   XREF to: Stack[0x4] (READ)
// 004f9774: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004f9778: MOV dword ptr [EDX + 0x1fbd4],EAX
// 004f977e: RET
