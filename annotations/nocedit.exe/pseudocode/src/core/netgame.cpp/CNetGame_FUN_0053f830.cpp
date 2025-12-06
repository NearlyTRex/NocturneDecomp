// Name: core_netgame.cpp_CNetGame_FUN_0053f830
// Address: 0053f830
// Address Range: [[0053f830, 0053f855]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_0053f830()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_0053f830(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_FUN_0053f830(void)

{
  CNetGame *in_stack_00000004;
  int in_stack_00000008;
  WORD in_stack_0000000c;
  LPWSADATA in_stack_00000010;
  
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20
            ((SSocketContext *)(in_stack_00000008 + 0x170));
  support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(in_stack_0000000c,in_stack_00000010);
  return;
}
