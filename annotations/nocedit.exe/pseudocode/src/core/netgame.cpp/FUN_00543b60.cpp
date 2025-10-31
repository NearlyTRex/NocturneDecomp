// Name: core_netgame.cpp_FUN_00543b60
// Address: 00543b60
// Address Range: [[00543b60, 00543b6e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b60()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b60(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 7;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543b60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b60
//   XREF to: Stack[0x4] (READ)
// 00543b64: MOV byte ptr [EAX + 0x4],0x7
// 00543b68: MOV dword ptr [EAX],0x9
// 00543b6e: RET
