// Name: core_moloch.cpp_FUN_005299b0
// Address: 005299b0
// Address Range: [[005299b0, 005299c2]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_005299b0()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_moloch.cpp_FUN_005299b0(undefined4 param_1, undefined4 param_2)
    */

void core_moloch_cpp_FUN_005299b0(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3fa0(in_stack_00000004);
  return;
}


// Assembly code:
// 005299b0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_moloch.cpp_FUN_005299b0
//   XREF to: Stack[0x8] (READ)
// 005299b4: PUSH EDX
// 005299b5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005299b9: PUSH ECX
// 005299ba: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 005299bf: ADD ESP,0x8
// 005299c2: RET
