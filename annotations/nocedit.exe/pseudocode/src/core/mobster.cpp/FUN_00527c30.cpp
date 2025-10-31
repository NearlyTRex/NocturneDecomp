// Name: core_mobster.cpp_FUN_00527c30
// Address: 00527c30
// Address Range: [[00527c30, 00527c3d]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00527c30()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00527c30(undefined4 param_1) */

void core_mobster_cpp_FUN_00527c30(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  return;
}


// Assembly code:
// 00527c30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_mobster.cpp_FUN_00527c30
//   XREF to: Stack[0x4] (READ)
// 00527c34: PUSH EDX
// 00527c35: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 00527c3a: ADD ESP,0x4
// 00527c3d: RET
