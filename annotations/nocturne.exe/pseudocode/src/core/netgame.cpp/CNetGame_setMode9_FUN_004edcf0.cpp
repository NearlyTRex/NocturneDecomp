// Name: core_netgame.cpp_CNetGame_setMode9_FUN_004edcf0
// Address: 004edcf0
// Address Range: [[004edcf0, 004edcfe]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_004edcf0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_004edcf0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 9;
  this_ptr->connection_type = 9;
  return;
}
