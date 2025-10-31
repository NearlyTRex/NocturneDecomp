// Name: core_battery.cpp_FUN_00417f40
// Address: 00417f40
// Address Range: [[00417f40, 00417f4e]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417f40()

#include "nocturne.h"

/* Signature: undefined1 actors_other_battery.cpp_FUN_00417f40(undefined4 param_1, undefined4
   param_2) */

void core_battery_cpp_FUN_00417f40(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x2d4) = in_stack_00000008;
  return;
}


// Assembly code:
// 00417f40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_battery.cpp_FUN_00417f40
//   XREF to: Stack[0x4] (READ)
// 00417f44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00417f48: MOV dword ptr [EDX + 0x2d4],EAX
// 00417f4e: RET
