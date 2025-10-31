// Name: core_scat.cpp_FUN_00559140
// Address: 00559140
// Address Range: [[00559140, 00559152]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00559140()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00559140(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00559140(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 00559140: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_scat.cpp_FUN_00559140
//   XREF to: Stack[0x8] (READ)
// 00559144: PUSH EDX
// 00559145: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00559149: PUSH ECX
// 0055914a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 0055914f: ADD ESP,0x8
// 00559152: RET
