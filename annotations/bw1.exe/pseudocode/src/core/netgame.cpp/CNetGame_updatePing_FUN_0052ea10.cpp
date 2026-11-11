// Name: core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10
// Address: 0052ea10
// Address Range: [[0052ea10, 0052ebc4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame *this_ptr,int player_index,float max_ping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  uint uVar2;
  float local_2c;
  float local_28;
  SNetPacketHeader local_24;
  uint local_1f;
  int local_18;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x735;
    core_main_c_FUN_005030e0("CNetGame::updatePing - invalid player index");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  uVar2 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar1;
  _DAT_01d51da0 = uVar2;
  if (player_index != this_ptr->local_player_index) {
    local_28 = (float)(int)(uVar2 - this_ptr->players[player_index].last_ping_sent) *
               (float)_DAT_005ebe58;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)_DAT_005ebe60 < local_28) {
      local_28 = 30.0;
    }
    if ((float)_DAT_005ebe68 <= local_28) {
      local_18 = uVar2 - this_ptr->players[player_index].last_ping_response;
      local_2c = (float)local_18 * (float)_DAT_005ebe58;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)_DAT_005ebe60 < local_2c) {
        local_2c = 30.0;
      }
      if ((this_ptr->players[player_index].ping_quality < 0.0) || (max_ping <= local_2c)) {
        if ((float)_DAT_005ebe70 < local_2c) {
          this_ptr->players[player_index].ping_quality = -1.0;
        }
        local_24.type = PACKET_PING;
        local_24.size = 9;
        local_1f = _DAT_01d51da0;
        this_ptr->players[player_index].last_ping_sent = _DAT_01d51da0;
        core_netgame_cpp_CNetGame_send_FUN_0052df50(this_ptr,player_index,&local_24);
      }
    }
    return;
  }
  this_ptr->players[player_index].ping_quality = 0.0;
  this_ptr->players[player_index].last_ping_sent = uVar2;
  this_ptr->players[player_index].last_ping_response = uVar2;
  return;
}
