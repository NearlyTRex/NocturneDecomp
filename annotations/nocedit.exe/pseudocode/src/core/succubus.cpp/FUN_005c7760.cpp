// Name: core_succubus.cpp_FUN_005c7760
// Address: 005c7760
// Address Range: [[005c7760, 005c7779]]
// Convention: unknown
// Signature: undefined core_succubus.cpp_FUN_005c7760()
// Function calls:
//   core_enemy.cpp_FUN_004a9f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_succubus.cpp_FUN_005c7760(undefined4 param_1, undefined4
   param_2) */

void core_succubus_cpp_FUN_005c7760(void)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 005c7760: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_succubus.cpp_FUN_005c7760
//   XREF to: Stack[0x8] (READ)
// 005c7764: PUSH EAX
// 005c7765: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c7769: PUSH EDX
// 005c776a: MOV dword ptr [EAX + 0x4],0x0
// 005c7771: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005c7776: ADD ESP,0x8
// 005c7779: RET
