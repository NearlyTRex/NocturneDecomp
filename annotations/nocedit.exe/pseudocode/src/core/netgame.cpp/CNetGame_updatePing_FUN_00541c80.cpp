// Name: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
// Address: 00541c80
// Address Range: [[00541c80, 00541e34]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(CNetGame *this_ptr,int player_index,float max_ping)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  int iVar3;
  int iVar2;
  uint uVar3;
  float local_2c;
  float local_28;
  SNetPacketHeader local_24;
  uint local_1f;
  int local_18;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x735;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::updatePing - invalid player index");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar1 / 0x12;
  iVar2 = iVar3 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  uVar3 = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar3;
  g_CurrentGameTime = uVar3;
  if (player_index != this_ptr->local_player_index) {
    local_28 = (float)(int)(uVar3 - this_ptr->players[player_index].last_ping_sent) *
               (float)1.52587890625e-05;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)30 < local_28) {
      local_28 = 30.0;
    }
    if ((float)0.40000000000000002 <= local_28) {
      local_2c = (float)(int)(uVar3 - this_ptr->players[player_index].last_ping_response) *
                 (float)1.52587890625e-05;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)30 < local_2c) {
        local_2c = 30.0;
      }
      if ((this_ptr->players[player_index].ping_quality < 0.0) || (max_ping <= local_2c)) {
        if ((float)5 < local_2c) {
          this_ptr->players[player_index].ping_quality = -1.0;
        }
        local_24.type = PACKET_PING;
        local_24.size = 9;
        this_ptr->players[player_index].last_ping_sent = g_CurrentGameTime;
        core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,player_index,&local_24);
      }
    }
    return;
  }
  this_ptr->players[player_index].ping_quality = 0.0;
  this_ptr->players[player_index].last_ping_sent = uVar3;
  this_ptr->players[player_index].last_ping_response = uVar3;
  return;
}
