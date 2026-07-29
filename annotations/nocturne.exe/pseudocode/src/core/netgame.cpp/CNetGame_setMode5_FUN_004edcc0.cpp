// Name: core_netgame.cpp_CNetGame_setMode5_FUN_004edcc0
// Address: 004edcc0
// Address Range: [[004edcc0, 004edcce]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode5_FUN_004edcc0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode5_FUN_004edcc0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 5;
  this_ptr->connection_type = 9;
  return;
}
