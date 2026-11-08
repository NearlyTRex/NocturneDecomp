// Name: FUN_0052ea10
// Address: 0052ea10
// Address Range: [[0052ea10, 0052ebc4]]
// Convention: unknown
// Signature: void FUN_0052ea10(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ea10(int param_1,int param_2,float param_3)

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
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x735;
    FUN_005030e0("CNetGame::updatePing - invalid player index");
  }
  iVar1 = FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  local_18 = _DAT_01d51da0 + _DAT_01d51d9c;
  iVar2 = param_1 + 0x20 + param_2 * 0x7c;
  _DAT_01d51d9c = iVar1;
  _DAT_01d51da0 = local_18;
  if (param_2 != *(int *)(param_1 + 0x11c)) {
    local_28 = (float)(local_18 - *(int *)(iVar2 + 0x2c)) * (float)_DAT_005ebe58;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)_DAT_005ebe60 < local_28) {
      local_28 = 30.0;
    }
    if ((float)_DAT_005ebe68 <= local_28) {
      local_18 = local_18 - *(int *)(iVar2 + 0x30);
      local_2c = (float)local_18 * (float)_DAT_005ebe58;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)_DAT_005ebe60 < local_2c) {
        local_2c = 30.0;
      }
      if ((*(float *)(iVar2 + 0x28) < 0.0) || (param_3 <= local_2c)) {
        if ((float)_DAT_005ebe70 < local_2c) {
          *(uint *)(iVar2 + 0x28) = 0xbf800000;
        }
        local_20 = 4;
        local_24 = 9;
        local_1f = _DAT_01d51da0;
        *(int *)(iVar2 + 0x2c) = _DAT_01d51da0;
        FUN_0052df50(param_1,param_2,&local_24);
      }
    }
    return;
  }
  *(uint *)(iVar2 + 0x28) = 0;
  *(int *)(iVar2 + 0x2c) = local_18;
  *(int *)(iVar2 + 0x30) = local_18;
  return;
}
