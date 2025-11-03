// Name: core_event.cpp_FUN_004b1970
// Address: 004b1970
// Address Range: [[004b1970, 004b197a]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1970()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055da1b [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004b1970(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x15aea4);
}


// Assembly code:
// 004b1970: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004b1970
//   XREF to: Stack[0x4] (READ)
// 004b1974: MOV EAX,dword ptr [EAX + 0x15aea4]
// 004b197a: RET
