// Name: core_script.cpp_FUN_005602b0
// Address: 005602b0
// Address Range: [[005602b0, 005602d1]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005602b0()
// Cross-references:
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd6ee [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_SkipCinematic_FUN_005602e0 (005602e0) at 005602fd [UNCONDITIONAL_CALL]
// Function calls:
//   core_script.cpp_FUN_00560140

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005602b0(undefined4 param_1) */

void core_script_cpp_FUN_005602b0(void)

{
  int in_stack_00000004;
  
  core_script_cpp_FUN_00560140();
  *(undefined4 *)(in_stack_00000004 + 0x4c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0;
  return;
}


// Assembly code:
// 005602b0: PUSH EBX
//   Label: core_script.cpp_FUN_005602b0
// 005602b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005602b5: MOV EDX,dword ptr [EBX + 0x4]
// 005602b8: PUSH EDX
// 005602b9: PUSH EBX
// 005602ba: CALL core_script.cpp_FUN_00560140
//   XREF to: 00560140 (UNCONDITIONAL_CALL)
// 005602bf: MOV dword ptr [EBX + 0x4c],0x0
// 005602c6: ADD ESP,0x8
// 005602c9: MOV dword ptr [EBX + 0x50],0x0
// 005602d0: POP EBX
// 005602d1: RET
