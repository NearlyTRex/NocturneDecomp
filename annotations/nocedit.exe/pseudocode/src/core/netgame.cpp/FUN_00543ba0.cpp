// Name: core_netgame.cpp_FUN_00543ba0
// Address: 00543ba0
// Address Range: [[00543ba0, 00543bae]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543ba0()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543ba0(void)

{
  undefined4 *in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 1) = 0xd;
  *in_stack_00000004 = 9;
  return;
}


// Assembly code:
// 00543ba0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543ba0
//   XREF to: Stack[0x4] (READ)
// 00543ba4: MOV byte ptr [EAX + 0x4],0xd
// 00543ba8: MOV dword ptr [EAX],0x9
// 00543bae: RET
