// Name: core_netgame.cpp_FUN_00543e30
// Address: 00543e30
// Address Range: [[00543e30, 00543e3e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543e30()
// Cross-references:
//   core_netgame.cpp_FUN_00543bb0 (00543bb0) at 00543be5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 * core_netgame_cpp_FUN_00543e30(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 00543e30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543e30
//   XREF to: Stack[0x4] (READ)
// 00543e34: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00543e38: MOV EAX,dword ptr [EAX]
// 00543e3a: MOV dword ptr [EDX],EAX
// 00543e3c: MOV EAX,EDX
// 00543e3e: RET
