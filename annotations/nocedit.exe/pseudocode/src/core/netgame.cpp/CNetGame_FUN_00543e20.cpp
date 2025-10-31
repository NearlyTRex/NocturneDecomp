// Name: core_netgame.cpp_CNetGame_FUN_00543e20
// Address: 00543e20
// Address Range: [[00543e20, 00543e2e]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00543e20()
// Cross-references:
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 005427ca [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_00543e20(undefined4 param_1, undefined4
   param_2) */

undefined4 * core_netgame_cpp_CNetGame_FUN_00543e20(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return in_stack_00000004;
}


// Assembly code:
// 00543e20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_CNetGame_FUN_00543e20
//   XREF to: Stack[0x4] (READ)
// 00543e24: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00543e28: MOV EAX,dword ptr [EAX]
// 00543e2a: MOV dword ptr [EDX],EAX
// 00543e2c: MOV EAX,EDX
// 00543e2e: RET
