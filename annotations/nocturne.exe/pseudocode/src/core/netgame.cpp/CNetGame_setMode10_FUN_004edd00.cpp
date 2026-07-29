// Name: core_netgame.cpp_CNetGame_setMode10_FUN_004edd00
// Address: 004edd00
// Address Range: [[004edd00, 004edd0e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_004edd00(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_004edd00(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 10;
  this_ptr->connection_type = 0x29;
  return;
}
