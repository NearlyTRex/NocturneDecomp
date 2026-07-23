// Name: core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
// Address: 004ebe10
// Address Range: [[004ebe10, 004ebfc4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float local_2c;
  float local_28;
  uint local_24;
  byte local_20;
  int local_1f;
  int local_18;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x735;
    FUN_004c8440("CNetGame::updatePing - invalid player index");
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
  local_18 = _DAT_01cea3f8 + _DAT_01cea3f4;
  iVar2 = param_1 + 0x20 + param_2 * 0x78;
  _DAT_01cea3f4 = iVar1;
  _DAT_01cea3f8 = local_18;
  if (param_2 != *(int *)(param_1 + 0x114)) {
    local_28 = (float)(local_18 - *(int *)(iVar2 + 0x2c)) * (float)1.52587890625e-05;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)30 < local_28) {
      local_28 = 30.0;
    }
    if ((float)0.40000000000000002 <= local_28) {
      local_18 = local_18 - *(int *)(iVar2 + 0x30);
      local_2c = (float)local_18 * (float)1.52587890625e-05;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)30 < local_2c) {
        local_2c = 30.0;
      }
      if ((*(float *)(iVar2 + 0x28) < 0.0) || (param_3 <= local_2c)) {
        if ((float)5 < local_2c) {
          *(uint *)(iVar2 + 0x28) = 0xbf800000;
        }
        local_20 = 4;
        local_24 = 9;
        local_1f = _DAT_01cea3f8;
        *(int *)(iVar2 + 0x2c) = _DAT_01cea3f8;
        core_netgame_cpp_CNetGame_send_FUN_004eb350(param_1,param_2,&local_24);
      }
    }
    return;
  }
  *(uint *)(iVar2 + 0x28) = 0;
  *(int *)(iVar2 + 0x2c) = local_18;
  *(int *)(iVar2 + 0x30) = local_18;
  return;
}
