// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00542ff0, 00543144]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr)

{
  int iVar2;
  int iVar3;
  SNetPlayer *pSVar4;
  SNetPacket_PlayerState local_3c;

  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2256;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_3c.header.size = sizeof(SNetPacket_PlayerState);
  local_3c.header.type = PACKET_PLAYER_STATE;
  pSVar4 = this_ptr->players + this_ptr->local_player_index;
  strcpy(local_3c.name,pSVar4->name);
  local_3c.ready_flag = pSVar4->ready_flag;
  local_3c.hero_number = pSVar4->hero_number;
  local_3c.aim_mode = pSVar4->aim_mode;
  g_LastPingTime = iVar2 / 0x12;
  local_3c.timestamp = g_CurrentGameTime;
  core_netgame_cpp_CNetGame_send_FUN_005411c0
            (this_ptr,this_ptr->server_player_index,&local_3c.header);
  INT_00680a04 = 1;
  this_ptr->players[this_ptr->local_player_index].state_change_time = g_CurrentGameTime;
  return;
}
