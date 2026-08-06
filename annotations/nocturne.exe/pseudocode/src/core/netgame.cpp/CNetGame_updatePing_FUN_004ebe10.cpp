// Name: core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
// Address: 004ebe10
// Address Range: [[004ebe10, 004ebfc4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame *this_ptr,int player_index,float max_ping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  uint uVar2;
  float local_2c;
  float local_28;
  SNetPacketHeader local_24;
  uint local_1f;
  int local_18;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 1845;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::updatePing - invalid player index");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar1 = iVar1 / 0x12;
  _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  uVar2 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar1;
  _DAT_01cea3f8 = uVar2;
  if (player_index != this_ptr->local_player_index) {
    local_28 = (float)(int)(uVar2 - this_ptr->players[player_index].last_ping_sent) *
               (float)1.52587890625e-05;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)30 < local_28) {
      local_28 = 30.0;
    }
    if ((float)0.40000000000000002 <= local_28) {
      local_18 = uVar2 - this_ptr->players[player_index].last_ping_response;
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
        local_1f = _DAT_01cea3f8;
        this_ptr->players[player_index].last_ping_sent = _DAT_01cea3f8;
        core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,player_index,&local_24);
      }
    }
    return;
  }
  this_ptr->players[player_index].ping_quality = 0.0;
  this_ptr->players[player_index].last_ping_sent = uVar2;
  this_ptr->players[player_index].last_ping_response = uVar2;
  return;
}
