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
  int iVar2;
  float local_2c;
  float local_28;
  uint local_24;
  byte local_20;
  int local_1f;
  int local_18;
  
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x735;
    core_main_c_FUN_005030e0("CNetGame::updatePing - invalid player index");
  }
  iVar2 = wincore_winrun_cpp_FUN_005b2420();
  iVar2 = iVar2 / 0x12;
  _DAT_01d51d9c = iVar2 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  local_18 = _DAT_01d51da0 + _DAT_01d51d9c;
  iVar1 = player_index * 0x7c;
  _DAT_01d51d9c = iVar2;
  _DAT_01d51da0 = local_18;
  if (player_index != *(int *)&this_ptr->field_0x11c) {
    local_28 = (float)(local_18 - *(int *)(&this_ptr->field_0x4c + iVar1)) * (float)_DAT_005ebe58;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)_DAT_005ebe60 < local_28) {
      local_28 = 30.0;
    }
    if ((float)_DAT_005ebe68 <= local_28) {
      local_18 = local_18 - *(int *)(&this_ptr->field_0x50 + iVar1);
      local_2c = (float)local_18 * (float)_DAT_005ebe58;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)_DAT_005ebe60 < local_2c) {
        local_2c = 30.0;
      }
      if ((*(float *)(&this_ptr->field_0x48 + iVar1) < 0.0) || (max_ping <= local_2c)) {
        if ((float)_DAT_005ebe70 < local_2c) {
          *(uint *)(&this_ptr->field_0x48 + iVar1) = 0xbf800000;
        }
        local_20 = 4;
        local_24 = 9;
        local_1f = _DAT_01d51da0;
        *(int *)(&this_ptr->field_0x4c + iVar1) = _DAT_01d51da0;
        core_netgame_cpp_CNetGame_send_FUN_0052df50
                  (this_ptr,player_index,(SNetPacketHeader *)&local_24);
      }
    }
    return;
  }
  *(uint *)(&this_ptr->field_0x48 + iVar1) = 0;
  *(int *)(&this_ptr->field_0x4c + iVar1) = local_18;
  *(int *)(&this_ptr->field_0x50 + iVar1) = local_18;
  return;
}
