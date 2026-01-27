// Name: core_netgame.cpp_CNetGame_FUN_0053f830
// Address: 0053f830
// Address Range: [[0053f830, 0053f855]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_0053f830()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_0053f830(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_FUN_0053f830(void)

{
  WORD WStack00000004;
  LPWSADATA in_stack_00000008;
  
  core_netgame_cpp_CNetGame_FUN_0053fd00(_WStack00000004);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20
            ((SSocketContext *)(_WStack00000004->unk + 0x58));
  support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(WStack00000004,in_stack_00000008);
  return;
}
