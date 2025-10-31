// Name: core_netgame.cpp_FUN_00543b50
// Address: 00543b50
// Address Range: [[00543b50, 00543b5e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b50()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b50(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 6;
  *in_stack_00000004 = 0x109;
  return;
}


// Assembly code:
// 00543b50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b50
//   XREF to: Stack[0x4] (READ)
// 00543b54: MOV byte ptr [EAX + 0x4],0x6
// 00543b58: MOV dword ptr [EAX],0x109
// 00543b5e: RET
