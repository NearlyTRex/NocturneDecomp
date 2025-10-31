// Name: core_boneguy.cpp_FUN_0041da00
// Address: 0041da00
// Address Range: [[0041da00, 0041da0d]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041da00()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041da00(undefined4 param_1) */

void core_boneguy_cpp_FUN_0041da00(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  return;
}


// Assembly code:
// 0041da00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_boneguy.cpp_FUN_0041da00
//   XREF to: Stack[0x4] (READ)
// 0041da04: PUSH EDX
// 0041da05: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 0041da0a: ADD ESP,0x4
// 0041da0d: RET
