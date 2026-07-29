// Name: core_netgame.cpp_CNetGame_setModePlaying_FUN_004edcb0
// Address: 004edcb0
// Address Range: [[004edcb0, 004edcbe]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_004edcb0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_004edcb0(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = NET_MODE_PLAYING;
  this_ptr->connection_type = 9;
  return;
}
