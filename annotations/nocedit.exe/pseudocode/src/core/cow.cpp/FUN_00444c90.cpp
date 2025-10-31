// Name: core_cow.cpp_FUN_00444c90
// Address: 00444c90
// Address Range: [[00444c90, 00444c9d]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444c90()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444c90(undefined4 param_1) */

void core_cow_cpp_FUN_00444c90(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  return;
}


// Assembly code:
// 00444c90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_cow.cpp_FUN_00444c90
//   XREF to: Stack[0x4] (READ)
// 00444c94: PUSH EDX
// 00444c95: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 00444c9a: ADD ESP,0x4
// 00444c9d: RET
