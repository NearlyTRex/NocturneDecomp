// Name: core_netgame.cpp_FUN_00543ab0
// Address: 00543ab0
// Address Range: [[00543ab0, 00543ac6]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543ab0()

#include "nocturne.h"

bool core_netgame_cpp_FUN_00543ab0(void)

{
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  return *in_stack_00000004 == *in_stack_00000008;
}


// Assembly code:
// 00543ab0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_netgame.cpp_FUN_00543ab0
//   XREF to: Stack[0x8] (READ)
// 00543ab4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00543ab8: MOV ECX,dword ptr [EDX]
// 00543aba: MOV EAX,dword ptr [EAX]
// 00543abc: CMP EAX,ECX
// 00543abe: SETZ AL
// 00543ac1: AND EAX,0xff
// 00543ac6: RET
