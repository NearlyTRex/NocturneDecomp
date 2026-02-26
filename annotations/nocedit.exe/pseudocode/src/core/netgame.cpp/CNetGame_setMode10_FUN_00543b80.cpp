// Name: core_netgame.cpp_CNetGame_setMode10_FUN_00543b80
// Address: 00543b80
// Address Range: [[00543b80, 00543b8e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_00543b80(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_00543b80(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 10;
  this_ptr->connection_type = 0x29;
  return;
}
