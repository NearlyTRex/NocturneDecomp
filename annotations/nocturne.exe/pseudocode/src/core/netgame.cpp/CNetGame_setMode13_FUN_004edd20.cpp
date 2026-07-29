// Name: core_netgame.cpp_CNetGame_setMode13_FUN_004edd20
// Address: 004edd20
// Address Range: [[004edd20, 004edd2e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode13_FUN_004edd20(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode13_FUN_004edd20(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 0xd;
  this_ptr->connection_type = 9;
  return;
}
