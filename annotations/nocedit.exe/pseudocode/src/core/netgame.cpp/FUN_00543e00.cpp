// Name: core_netgame.cpp_FUN_00543e00
// Address: 00543e00
// Address Range: [[00543e00, 00543e14]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543e00()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543e00(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  *(undefined2 *)(in_stack_00000004 + 1) = *(undefined2 *)(in_stack_00000008 + 1);
  return;
}


// Assembly code:
// 00543e00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543e00
//   XREF to: Stack[0x4] (READ)
// 00543e04: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00543e08: MOV EDX,dword ptr [ECX]
// 00543e0a: MOV dword ptr [EAX],EDX
// 00543e0c: MOV DX,word ptr [ECX + 0x4]
// 00543e10: MOV word ptr [EAX + 0x4],DX
// 00543e14: RET
