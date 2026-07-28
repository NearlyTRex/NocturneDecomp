// Name: core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
// Address: 004e99c0
// Address Range: [[004e99c0, 004e99e5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(CNetGame *this_ptr)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(&this_ptr->socket);
  Ordinal_116();
  return;
}
