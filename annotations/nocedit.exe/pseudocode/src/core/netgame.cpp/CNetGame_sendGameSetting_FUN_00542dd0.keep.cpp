// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// MANUAL RECONSTRUCTION
// Address Range: [[00542dd0, 00542fe3] [0060c4ea, 0060c501]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

{
  int iVar4;
  int iVar5;
  SNetPacket_GameSettings packet;

  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2216;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2222;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  packet.header.type = PACKET_GAME_SETTINGS;
  packet.header.size = sizeof(SNetPacket_GameSettings);
  __arrinit(packet.players,2,&g_SPlayerTypeInfo);
  packet.random_seed = this_ptr->random_seed;
  packet.settings_version = INT_02f7c8c4;
  strcpy(packet.mission_name, this_ptr->mission_name);
  packet.player_count = this_ptr->player_count;
  iVar5 = 0;
  if (0 < this_ptr->player_count) {
    do {
      strcpy(packet.players[iVar5].name, this_ptr->players[iVar5].name);
      packet.players[iVar5].addr = this_ptr->players[iVar5].addr;
      packet.players[iVar5].ready_flag = this_ptr->players[iVar5].ready_flag;
      packet.players[iVar5].hero_number = this_ptr->players[iVar5].hero_number;
      packet.players[iVar5].aim_mode = this_ptr->players[iVar5].aim_mode;
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,player_index,&packet.header);
  iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar4 = iVar5 / 0x12 - g_LastPingTime;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar4;
  g_LastPingTime = iVar5 / 0x12;
  this_ptr->players[player_index].last_update_time = g_CurrentGameTime;
  return;
}
