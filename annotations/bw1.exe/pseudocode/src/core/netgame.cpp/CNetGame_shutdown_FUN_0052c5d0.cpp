// Name: core_netgame.cpp_CNetGame_shutdown_FUN_0052c5d0
// Address: 0052c5d0
// Address Range: [[0052c5d0, 0052c5f5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0052c5d0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0052c5d0(CNetGame *this_ptr)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(&this_ptr->socket);
  support_trisock_cpp_FUN_0059ef20();
  return;
}
