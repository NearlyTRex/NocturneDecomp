// Name: core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0
// Address: 004e99c0
// Address Range: [[004e99c0, 004e99e5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(int param_1)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(int param_1)

{
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(param_1 + 0x170);
  Ordinal_116();
  return;
}
