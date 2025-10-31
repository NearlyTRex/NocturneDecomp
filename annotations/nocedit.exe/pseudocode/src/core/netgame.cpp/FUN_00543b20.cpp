// Name: core_netgame.cpp_FUN_00543b20
// Address: 00543b20
// Address Range: [[00543b20, 00543b2e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b20()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b20(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 2;
  *in_stack_00000004 = 0x71;
  return;
}


// Assembly code:
// 00543b20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b20
//   XREF to: Stack[0x4] (READ)
// 00543b24: MOV byte ptr [EAX + 0x4],0x2
// 00543b28: MOV dword ptr [EAX],0x71
// 00543b2e: RET
