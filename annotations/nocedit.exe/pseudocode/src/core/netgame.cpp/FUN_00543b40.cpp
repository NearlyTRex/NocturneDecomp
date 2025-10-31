// Name: core_netgame.cpp_FUN_00543b40
// Address: 00543b40
// Address Range: [[00543b40, 00543b4e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b40()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b40(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 5;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543b40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b40
//   XREF to: Stack[0x4] (READ)
// 00543b44: MOV byte ptr [EAX + 0x4],0x5
// 00543b48: MOV dword ptr [EAX],0x9
// 00543b4e: RET
