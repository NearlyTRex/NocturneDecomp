// Name: core_werewolf.cpp_FUN_005f21e0
// Address: 005f21e0
// Address Range: [[005f21e0, 005f21ed]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f21e0()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f21e0(undefined4 param_1) */

void core_werewolf_cpp_FUN_005f21e0(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  return;
}


// Assembly code:
// 005f21e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_werewolf.cpp_FUN_005f21e0
//   XREF to: Stack[0x4] (READ)
// 005f21e4: PUSH EDX
// 005f21e5: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 005f21ea: ADD ESP,0x4
// 005f21ed: RET
