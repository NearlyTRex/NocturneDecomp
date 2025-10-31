// Name: core_melee.cpp_FUN_0050ecd0
// Address: 0050ecd0
// Address Range: [[0050ecd0, 0050ecec]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ecd0()
// Function calls:
//   core_weapon.cpp_FUN_005ee640

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050ecd0(undefined4 param_1, undefined4
   param_2) */

void core_melee_cpp_FUN_0050ecd0(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x590) = 0;
  core_weapon_cpp_FUN_005ee640();
  return;
}


// Assembly code:
// 0050ecd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_melee.cpp_FUN_0050ecd0
//   XREF to: Stack[0x4] (READ)
// 0050ecd4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050ecd8: PUSH EDX
// 0050ecd9: PUSH EAX
// 0050ecda: MOV dword ptr [EAX + 0x590],0x0
// 0050ece4: CALL core_weapon.cpp_FUN_005ee640
//   XREF to: 005ee640 (UNCONDITIONAL_CALL)
// 0050ece9: ADD ESP,0x8
// 0050ecec: RET
