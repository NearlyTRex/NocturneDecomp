// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edc28]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(CNetGame *this_ptr)

{
  int iVar1;
  SPlayerInput *pSVar2;
  int *piVar3;
  byte bVar4;
  SNetPacketHeader local_48;
  int local_43;
  int local_3f [11];
  
  bVar4 = 0;
  if (this_ptr->connection_type != CONNECTION_CLIENT) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2601;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (this_ptr->network_mode != NET_MODE_PLAYING) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2602;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (this_ptr->server_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2603;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2604;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_48.size = 0x35;
  local_48.type = PACKET_PLAYER_INPUT;
  local_43 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
  pSVar2 = &this_ptr->players[this_ptr->local_player_index].player_input;
  piVar3 = local_3f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->action_state).walk;
    pSVar2 = (SPlayerInput *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,this_ptr->server_player_index,&local_48);
  _DAT_01cea408 = _DAT_01cea3f8;
  return;
}
