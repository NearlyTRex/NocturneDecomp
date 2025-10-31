// Name: core_haystack.cpp_CHaystack_load_FUN_004f1b50
// Address: 004f1b50
// Address Range: [[004f1b50, 004f1b5d]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_CHaystack_load_FUN_004f1b50()
// Function calls:
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_CHaystack_load(CHaystack* param_1) */

void core_haystack_cpp_CHaystack_load_FUN_004f1b50(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  return;
}


// Assembly code:
// 004f1b50: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_haystack.cpp_CHaystack_load_FUN_004f1b50
//   XREF to: Stack[0x4] (READ)
// 004f1b54: PUSH EDX
// 004f1b55: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 004f1b5a: ADD ESP,0x4
// 004f1b5d: RET
