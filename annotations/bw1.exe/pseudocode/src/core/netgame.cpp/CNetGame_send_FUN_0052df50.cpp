// Name: core_netgame.cpp_CNetGame_send_FUN_0052df50
// Address: 0052df50
// Address Range: [[0052df50, 0052dfb3]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_0052df50(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_send_FUN_0052df50(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

{
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x5c5;
    core_main_c_FUN_005030e0("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0
            (this_ptr,(SNetworkAddr *)&this_ptr->players[player_index].field_0x1c,packet);
  return;
}
