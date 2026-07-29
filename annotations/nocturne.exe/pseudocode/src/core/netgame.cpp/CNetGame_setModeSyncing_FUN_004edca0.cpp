// Name: core_netgame.cpp_CNetGame_setModeSyncing_FUN_004edca0
// Address: 004edca0
// Address Range: [[004edca0, 004edcae]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_004edca0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_004edca0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = NET_MODE_SYNCING;
  this_ptr->connection_type = 0x71;
  return;
}
