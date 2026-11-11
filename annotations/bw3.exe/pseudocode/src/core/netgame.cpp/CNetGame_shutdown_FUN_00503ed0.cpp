// Name: core_netgame.cpp_CNetGame_shutdown_FUN_00503ed0
// Address: 00503ed0
// Address Range: [[00503ed0, 00503ef5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_00503ed0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_00503ed0(CNetGame *this_ptr)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(&this_ptr->socket);
  support_trisock_cpp_FUN_00571f10();
  return;
}
