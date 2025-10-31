// Name: core_netgame.cpp_FUN_00543b90
// Address: 00543b90
// Address Range: [[00543b90, 00543b9e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b90()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b90(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 0xc;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543b90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b90
//   XREF to: Stack[0x4] (READ)
// 00543b94: MOV byte ptr [EAX + 0x4],0xc
// 00543b98: MOV dword ptr [EAX],0x9
// 00543b9e: RET
