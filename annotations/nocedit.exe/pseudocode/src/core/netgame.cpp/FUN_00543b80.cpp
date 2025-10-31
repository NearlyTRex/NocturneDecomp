// Name: core_netgame.cpp_FUN_00543b80
// Address: 00543b80
// Address Range: [[00543b80, 00543b8e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b80()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b80(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 10;
  *in_stack_00000004 = 0x29;
  return;
}


// Assembly code:
// 00543b80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b80
//   XREF to: Stack[0x4] (READ)
// 00543b84: MOV byte ptr [EAX + 0x4],0xa
// 00543b88: MOV dword ptr [EAX],0x29
// 00543b8e: RET
