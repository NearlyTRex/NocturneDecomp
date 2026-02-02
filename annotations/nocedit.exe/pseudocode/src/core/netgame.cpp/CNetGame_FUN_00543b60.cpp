// Name: core_netgame.cpp_CNetGame_FUN_00543b60
// Address: 00543b60
// Address Range: [[00543b60, 00543b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543b60(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543b60(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 7;
  this_ptr->connection_type = 9;
  return;
}
