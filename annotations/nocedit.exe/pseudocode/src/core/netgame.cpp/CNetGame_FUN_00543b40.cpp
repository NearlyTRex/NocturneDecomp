// Name: core_netgame.cpp_CNetGame_FUN_00543b40
// Address: 00543b40
// Address Range: [[00543b40, 00543b4e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543b40(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543b40(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 5;
  this_ptr->connection_type = 9;
  return;
}
