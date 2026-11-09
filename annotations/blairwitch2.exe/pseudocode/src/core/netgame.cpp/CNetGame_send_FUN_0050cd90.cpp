// Name: core_netgame.cpp_CNetGame_send_FUN_0050cd90
// Address: 0050cd90
// Address Range: [[0050cd90, 0050cdea]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_0050cd90(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_send_FUN_0050cd90(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

{
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x5c5;
    core_main_c_FUN_004e4500("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0
            (this_ptr,(SNetworkAddr *)(&this_ptr->field_0x3c + player_index * 0x80),packet);
  return;
}
