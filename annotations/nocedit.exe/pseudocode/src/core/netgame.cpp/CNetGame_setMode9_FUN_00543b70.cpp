// Name: core_netgame.cpp_CNetGame_setMode9_FUN_00543b70
// Address: 00543b70
// Address Range: [[00543b70, 00543b7e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_00543b70(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_00543b70(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 9;
  this_ptr->connection_type = 9;
  return;
}
