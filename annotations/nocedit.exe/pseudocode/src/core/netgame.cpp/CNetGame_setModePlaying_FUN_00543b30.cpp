// Name: core_netgame.cpp_CNetGame_setModePlaying_FUN_00543b30
// Address: 00543b30
// Address Range: [[00543b30, 00543b3e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_00543b30(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_00543b30(CNetGame *this_ptr)

{
  *(byte *)&this_ptr->network_mode = NET_MODE_PLAYING;
  this_ptr->connection_type = 9;
  return;
}
