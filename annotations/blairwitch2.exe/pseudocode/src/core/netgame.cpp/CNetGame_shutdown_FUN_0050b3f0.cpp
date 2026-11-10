// Name: core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0
// Address: 0050b3f0
// Address Range: [[0050b3f0, 0050b415]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0050b3f0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0050b3f0(CNetGame *this_ptr)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
  support_trisock_cpp_CSocket_closeSocket_FUN_00579360((CSocket *)&this_ptr->field_0x180);
  WSACleanup();
  return;
}
