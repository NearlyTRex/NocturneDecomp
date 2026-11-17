// Name: core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10
// Address: 0052ea10
// Address Range: [[0052ea10, 0052ebc4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame *this_ptr,int player_index,float max_ping)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_2c;
  float local_28;
  SNetPacketHeader local_24;
  uint local_1f;
  int local_18;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
    g_INT_01d1d404 = 0x735;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::updatePing - invalid player index");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_INT_01d51d9c;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  uVar3 = g_UINT_01d51da0 + iVar2;
  g_INT_01d51d9c = iVar1;
  g_UINT_01d51da0 = uVar3;
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
      local_18 = uVar3 - this_ptr->players[player_index].last_ping_response;
      local_2c = (float)local_18 * (float)1.52587890625e-05;
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
        local_1f = g_UINT_01d51da0;
        this_ptr->players[player_index].last_ping_sent = g_UINT_01d51da0;
        core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,player_index,&local_24);
      }
    }
    return;
  }
  this_ptr->players[player_index].ping_quality = 0.0;
  this_ptr->players[player_index].last_ping_sent = uVar3;
  this_ptr->players[player_index].last_ping_response = uVar3;
  return;
}
