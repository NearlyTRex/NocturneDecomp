// Name: core_netgame.cpp_CNetGame_updatePing_FUN_0050d840
// Address: 0050d840
// Address Range: [[0050d840, 0050d9eb]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(CNetGame *this_ptr,int player_index,float max_ping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  float local_2c;
  float local_28;
  uint local_24;
  byte local_20;
  int local_1f;
  int local_18;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x735;
    core_main_c_FUN_004e4500("CNetGame::updatePing - invalid player index");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar1 = iVar1 / 0x12;
  _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  local_18 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar1;
  _DAT_01d34e38 = local_18;
  if (player_index != this_ptr->local_player_index) {
    local_28 = (float)(local_18 - *(int *)&this_ptr->players[player_index].field_0x2c) *
               (float)_DAT_005e0bfd;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)_DAT_005e0c05 < local_28) {
      local_28 = 30.0;
    }
    if ((float)_DAT_005e0c0d <= local_28) {
      local_18 = local_18 - *(int *)&this_ptr->players[player_index].field_0x30;
      local_2c = (float)local_18 * (float)_DAT_005e0bfd;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)_DAT_005e0c05 < local_2c) {
        local_2c = 30.0;
      }
      if ((*(float *)&this_ptr->players[player_index].field_0x28 < 0.0) || (max_ping <= local_2c)) {
        if ((float)_DAT_005e0c15 < local_2c) {
          *(uint *)&this_ptr->players[player_index].field_0x28 = 0xbf800000;
        }
        local_20 = 4;
        local_24 = 9;
        local_1f = _DAT_01d34e38;
        *(int *)&this_ptr->players[player_index].field_0x2c = _DAT_01d34e38;
        core_netgame_cpp_CNetGame_send_FUN_0050cd90
                  (this_ptr,player_index,(SNetPacketHeader *)&local_24);
      }
    }
    return;
  }
  *(uint *)&this_ptr->players[player_index].field_0x28 = 0;
  *(int *)&this_ptr->players[player_index].field_0x2c = local_18;
  *(int *)&this_ptr->players[player_index].field_0x30 = local_18;
  return;
}
