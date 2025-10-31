// Name: core_netgame.cpp_FUN_00543b00
// Address: 00543b00
// Address Range: [[00543b00, 00543b11]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543b00()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543b00(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  
  *in_stack_00000004 = in_stack_00000008;
  *(undefined1 *)(in_stack_00000004 + 1) = in_stack_0000000c;
  return;
}


// Assembly code:
// 00543b00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543b00
//   XREF to: Stack[0x4] (READ)
// 00543b04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00543b08: MOV dword ptr [EAX],EDX
// 00543b0a: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00543b0e: MOV byte ptr [EAX + 0x4],DL
// 00543b11: RET
