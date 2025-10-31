// Name: core_netgame.cpp_FUN_00543b30
// Address: 00543b30
// Address Range: [[00543b30, 00543b3e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b30()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b30(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 3;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543b30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b30
//   XREF to: Stack[0x4] (READ)
// 00543b34: MOV byte ptr [EAX + 0x4],0x3
// 00543b38: MOV dword ptr [EAX],0x9
// 00543b3e: RET
