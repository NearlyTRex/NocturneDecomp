// Name: core_netgame.cpp_CNetGame_FUN_00543ba0
// Address: 00543ba0
// Address Range: [[00543ba0, 00543bae]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543ba0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543ba0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 0xd;
  this_ptr->connection_type = 9;
  return;
}
