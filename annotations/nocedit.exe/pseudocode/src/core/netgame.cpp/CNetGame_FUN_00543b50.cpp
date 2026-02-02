// Name: core_netgame.cpp_CNetGame_FUN_00543b50
// Address: 00543b50
// Address Range: [[00543b50, 00543b5e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543b50(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543b50(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 6;
  this_ptr->connection_type = 0x109;
  return;
}
