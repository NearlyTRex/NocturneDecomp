// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0
// Address: 00507fd0
// Address Range: [[00507fd0, 005080f8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame *this_ptr)

{
  int iVar1;
  SPlayerInput *pSVar2;
  int *piVar3;
  byte bVar4;
  SNetPacketHeader local_50;
  int local_4b;
  int local_47 [13];
  
  bVar4 = 0;
  if (this_ptr->connection_type != CONNECTION_CLIENT) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa29;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (this_ptr->network_mode != NET_MODE_PLAYING) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2a;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (this_ptr->server_player_index < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2b;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (this_ptr->local_player_index < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2c;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_50.size = 0x3d;
  local_50.type = PACKET_PLAYER_INPUT;
  local_4b = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
  pSVar2 = &this_ptr->players[this_ptr->local_player_index].player_input;
  piVar3 = local_47;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->action_state).walk;
    pSVar2 = (SPlayerInput *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,this_ptr->server_player_index,&local_50);
  _DAT_01da6488 = _DAT_01da6478;
  return;
}
