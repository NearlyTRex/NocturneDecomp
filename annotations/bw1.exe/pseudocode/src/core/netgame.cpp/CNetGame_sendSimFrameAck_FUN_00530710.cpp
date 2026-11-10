// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710
// Address: 00530710
// Address Range: [[00530710, 00530848]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00530710(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00530710(CNetGame *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_4c;
  byte local_48;
  uint local_47;
  uint local_43 [12];
  
  bVar4 = 0;
  if (this_ptr->connection_type != CONNECTION_CLIENT) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa29;
    core_main_c_FUN_005030e0("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (this_ptr->network_mode != NET_MODE_PLAYING) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2a;
    core_main_c_FUN_005030e0("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (this_ptr->server_player_index < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2b;
    core_main_c_FUN_005030e0("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (this_ptr->local_player_index < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2c;
    core_main_c_FUN_005030e0("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_4c = 0x39;
  local_48 = 0x10;
  local_47 = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x48;
  puVar2 = (uint *)&this_ptr->players[this_ptr->local_player_index].field_0x4c;
  puVar3 = local_43;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_0052df50
            (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&local_4c);
  _DAT_01d51db0 = _DAT_01d51da0;
  return;
}
