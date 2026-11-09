// Name: core_netgame.cpp_CNetGame_send_FUN_00505870
// Address: 00505870
// Address Range: [[00505870, 005058ca]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_send_FUN_00505870(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_send_FUN_00505870(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)

{
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x5c5;
    core_main_c_FUN_004e4330("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0
            (this_ptr,(SNetworkAddr *)(&this_ptr->field_0x3c + player_index * 0x80),packet);
  return;
}
