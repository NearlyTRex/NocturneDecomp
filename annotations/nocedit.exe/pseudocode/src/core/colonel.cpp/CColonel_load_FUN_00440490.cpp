// Name: core_colonel.cpp_CColonel_load_FUN_00440490
// Address: 00440490
// Address Range: [[00440490, 0044049d]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_CColonel_load_FUN_00440490()
// Function calls:
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_CColonel_load(CColonel* param_1) */

void core_colonel_cpp_CColonel_load_FUN_00440490(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  return;
}


// Assembly code:
// 00440490: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_colonel.cpp_CColonel_load_FUN_00440490
//   XREF to: Stack[0x4] (READ)
// 00440494: PUSH EDX
// 00440495: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 0044049a: ADD ESP,0x4
// 0044049d: RET
