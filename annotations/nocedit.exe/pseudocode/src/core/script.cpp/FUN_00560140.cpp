// Name: core_script.cpp_FUN_00560140
// Address: 00560140
// Address Range: [[00560140, 00560159]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00560140()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 00429914 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c4f9 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005602b0 (005602b0) at 005602ba [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00560140(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00560140(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 4)) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x54) = 0;
  return;
}


// Assembly code:
// 00560140: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_script.cpp_FUN_00560140
//   XREF to: Stack[0x4] (READ)
// 00560144: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00560148: CMP EDX,dword ptr [EAX + 0x4]
// 0056014b: JZ 0x0056014e
//   XREF to: 0056014e (CONDITIONAL_JUMP)
// 0056014d: RET
// 0056014e: MOV dword ptr [EAX + 0x4],0x0
//   Label: LAB_0056014e
// 00560155: MOV byte ptr [EAX + 0x54],0x0
// 00560159: RET
