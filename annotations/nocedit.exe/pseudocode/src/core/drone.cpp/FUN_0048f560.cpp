// Name: core_drone.cpp_FUN_0048f560
// Address: 0048f560
// Address Range: [[0048f560, 0048f56d]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f560()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048f560(undefined4 param_1) */

void core_drone_cpp_FUN_0048f560(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  return;
}


// Assembly code:
// 0048f560: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_drone.cpp_FUN_0048f560
//   XREF to: Stack[0x4] (READ)
// 0048f564: PUSH EDX
// 0048f565: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 0048f56a: ADD ESP,0x4
// 0048f56d: RET
