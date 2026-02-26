// Name: core_netgame.cpp_CNetGame_shutdown_FUN_0053f830
// Address: 0053f830
// Address Range: [[0053f830, 0053f855]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0053f830(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0053f830(CNetGame *this_ptr)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(&this_ptr->socket);
  support_trisock_cpp_cleanupWinsock_FUN_005e1ee0();
  return;
}
