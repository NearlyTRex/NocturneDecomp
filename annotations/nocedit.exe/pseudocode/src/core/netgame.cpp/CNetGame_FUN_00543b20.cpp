// Name: core_netgame.cpp_CNetGame_FUN_00543b20
// Address: 00543b20
// Address Range: [[00543b20, 00543b2e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543b20(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543b20(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 2;
  this_ptr->connection_type = 0x71;
  return;
}
