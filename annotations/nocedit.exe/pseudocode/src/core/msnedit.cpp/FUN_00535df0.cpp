// Name: core_msnedit.cpp_FUN_00535df0
// Address: 00535df0
// Address Range: [[00535df0, 00535e02]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00535df0()
// Globals:
//   TerminatedCString s_ON_0063b2f0
//   TerminatedCString s_OFF_0063b2f3

#include "nocturne.h"

char * core_msnedit_cpp_FUN_00535df0(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    return "ON";
  }
  return "OFF";
}


// Assembly code:
// 00535df0: CMP dword ptr [ESP + 0x4],0x0
//   Label: core_msnedit.cpp_FUN_00535df0
//   XREF to: Stack[0x4] (READ)
// 00535df5: JZ 0x00535dfd
//   XREF to: 00535dfd (CONDITIONAL_JUMP)
// 00535df7: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 00535dfc: RET
// 00535dfd: MOV EAX,0x63b2f3
//   Label: LAB_00535dfd
//   XREF to: 0063b2f3 (DATA)
// 00535e02: RET
