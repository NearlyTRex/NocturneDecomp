// Name: core_script.cpp_FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005593e9]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005593d0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055a926 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005593f0 (005593f0) at 00559480 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00560160 (00560160) at 0056019b [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005593d0(undefined4 param_1) */

void core_script_cpp_FUN_005593d0(void)

{
  char *in_stack_00000004;
  
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}


// Assembly code:
// 005593d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_script.cpp_FUN_005593d0
//   XREF to: Stack[0x4] (READ)
// 005593d4: MOV DL,byte ptr [EAX]
//   Label: LAB_005593d4
// 005593d6: INC DL
// 005593d8: AND EDX,0xff
// 005593de: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005593e5: JZ 0x005593ae
//   XREF to: 005593ae (CONDITIONAL_JUMP)
// 005593e7: INC EAX
// 005593e8: JMP 0x005593d4
//   XREF to: 005593d4 (UNCONDITIONAL_JUMP)
