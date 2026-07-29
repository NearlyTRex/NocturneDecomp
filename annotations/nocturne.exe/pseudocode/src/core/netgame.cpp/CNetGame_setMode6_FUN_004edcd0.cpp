// Name: core_netgame.cpp_CNetGame_setMode6_FUN_004edcd0
// Address: 004edcd0
// Address Range: [[004edcd0, 004edcde]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setMode6_FUN_004edcd0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setMode6_FUN_004edcd0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = 6;
  this_ptr->connection_type = 0x109;
  return;
}
