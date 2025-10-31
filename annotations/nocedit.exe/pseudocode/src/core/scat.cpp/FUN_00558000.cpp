// Name: core_scat.cpp_FUN_00558000
// Address: 00558000
// Address Range: [[00558000, 0055800e]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558000()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558000(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00558000(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  return;
}


// Assembly code:
// 00558000: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_scat.cpp_FUN_00558000
//   XREF to: Stack[0x4] (READ)
// 00558004: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00558008: MOV dword ptr [EDX + 0x1fbd4],EAX
// 0055800e: RET
