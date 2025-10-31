// Name: core_bugs.cpp_FUN_00425640
// Address: 00425640
// Address Range: [[00425640, 00425659]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425640()
// Function calls:
//   core_enemy.cpp_FUN_004a9f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425640(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_00425640(void)

{
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00425640: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_bugs.cpp_FUN_00425640
//   XREF to: Stack[0x8] (READ)
// 00425644: PUSH EAX
// 00425645: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00425649: PUSH EDX
// 0042564a: MOV dword ptr [EAX + 0x4],0x0
// 00425651: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00425656: ADD ESP,0x8
// 00425659: RET
