// Name: core_enemy.cpp_FUN_004a9ef0
// Address: 004a9ef0
// Address Range: [[004a9ef0, 004a9f08]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9ef0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055f388 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_enemy.cpp_FUN_004a9ef0(undefined4 param_1, undefined4 param_2)
    */

void core_enemy_cpp_FUN_004a9ef0(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0xbe40) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xbeb4) = in_stack_00000008;
  return;
}


// Assembly code:
// 004a9ef0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_enemy.cpp_FUN_004a9ef0
//   XREF to: Stack[0x4] (READ)
// 004a9ef4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a9ef8: MOV dword ptr [EAX + 0xbe40],0x0
// 004a9f02: MOV dword ptr [EAX + 0xbeb4],EDX
// 004a9f08: RET
