// Name: core_beast.cpp_FUN_00418380
// Address: 00418380
// Address Range: [[00418380, 00418399]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_00418380()
// Function calls:
//   core_enemy.cpp_FUN_004a9f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_00418380(undefined4 param_1, undefined4 param_2)
    */

void core_beast_cpp_FUN_00418380(void)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00418380: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_beast.cpp_FUN_00418380
//   XREF to: Stack[0x8] (READ)
// 00418384: PUSH EAX
// 00418385: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418389: PUSH EDX
// 0041838a: MOV dword ptr [EAX + 0x4],0x0
// 00418391: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00418396: ADD ESP,0x8
// 00418399: RET
