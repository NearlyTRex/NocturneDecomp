// Name: FUN_00506320
// Address: 00506320
// Address Range: [[00506320, 005064cb]]
// Convention: unknown
// Signature: void FUN_00506320(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00506320(int param_1,int param_2,float param_3)

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
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x735;
    FUN_004e4330("CNetGame::updatePing - invalid player index");
  }
  iVar1 = FUN_005806a0();
  iVar1 = iVar1 / 0x12;
  _DAT_01da6474 = iVar1 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  local_18 = _DAT_01da6478 + _DAT_01da6474;
  iVar2 = param_2 * 0x80 + param_1 + 0x20;
  _DAT_01da6474 = iVar1;
  _DAT_01da6478 = local_18;
  if (param_2 != *(int *)(param_1 + 0x124)) {
    local_28 = (float)(local_18 - *(int *)(iVar2 + 0x2c)) * (float)_DAT_005cac69;
    if (local_28 < 0.0) {
      local_28 = 0.0;
    }
    if ((float)_DAT_005cac71 < local_28) {
      local_28 = 30.0;
    }
    if ((float)_DAT_005cac79 <= local_28) {
      local_18 = local_18 - *(int *)(iVar2 + 0x30);
      local_2c = (float)local_18 * (float)_DAT_005cac69;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if ((float)_DAT_005cac71 < local_2c) {
        local_2c = 30.0;
      }
      if ((*(float *)(iVar2 + 0x28) < 0.0) || (param_3 <= local_2c)) {
        if ((float)_DAT_005cac81 < local_2c) {
          *(uint *)(iVar2 + 0x28) = 0xbf800000;
        }
        local_20 = 4;
        local_24 = 9;
        local_1f = _DAT_01da6478;
        *(int *)(iVar2 + 0x2c) = _DAT_01da6478;
        FUN_00505870(param_1,param_2,&local_24);
      }
    }
    return;
  }
  *(uint *)(iVar2 + 0x28) = 0;
  *(int *)(iVar2 + 0x2c) = local_18;
  *(int *)(iVar2 + 0x30) = local_18;
  return;
}
