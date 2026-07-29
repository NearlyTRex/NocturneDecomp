// Name: core_netgame.cpp_CNetGame_setMode7_FUN_004edce0
// Address: 004edce0
// Address Range: [[004edce0, 004edcee]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_004edce0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_004edce0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 7;
  this_ptr->connection_type = 9;
  return;
}
