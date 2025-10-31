// Name: core_netgame.cpp_FUN_00543b70
// Address: 00543b70
// Address Range: [[00543b70, 00543b7e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b70()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b70(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 9;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543b70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b70
//   XREF to: Stack[0x4] (READ)
// 00543b74: MOV byte ptr [EAX + 0x4],0x9
// 00543b78: MOV dword ptr [EAX],0x9
// 00543b7e: RET
