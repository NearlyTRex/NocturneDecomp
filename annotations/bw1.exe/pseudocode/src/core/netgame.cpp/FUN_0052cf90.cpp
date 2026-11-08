// Name: FUN_0052cf90
// Address: 0052cf90
// Address Range: [[0052cf90, 0052d2fa]]
// Convention: unknown
// Signature: undefined4 FUN_0052cf90(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052cf90(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float local_198;
  byte local_194 [256];
  byte local_94 [100];
  uint local_30;
  byte local_2c;
  int local_2b;
  int local_24;
  int *local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  FUN_004032b0();
  if (param_2 < 1) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x337;
    FUN_005030e0("CNetGame::syncPlayers - don't use 0!");
  }
  if (*param_1 == 0) {
    return 1;
  }
  param_1[1] = 2;
  iVar2 = FUN_005b2420();
  _DAT_01d51d9c = iVar2 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar2 / 0x12;
  param_1[param_1[0x47] * 0x1f + 0x17] = param_2;
  if (*param_1 == 1) {
    local_24 = _DAT_01d51da0 + -0x1e0000;
    local_20 = param_1 + 8;
    while( true ) {
      FUN_0057dc40();
      FUN_005bfb40(local_194,"Syncing stage %d.",param_2);
      FUN_00401fe0(local_194,0,0xb);
      FUN_00401fe0("Waiting on:",0,0x16);
      local_1c = 1.4013e-45;
      local_18 = 0x21;
      iVar2 = 0;
      piVar3 = param_1;
      if (0 < param_1[7]) {
        do {
          if (piVar3[0x17] < param_2) {
            local_1c = 0.0;
            FUN_00401fe0(local_20 + iVar2 * 0x1f,0,local_18);
            FUN_005bfb40(local_194,&DAT_005eb96a,piVar3[0x17]);
            FUN_00401fe0(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 0x1f;
        } while (iVar2 < param_1[7]);
      }
      fVar1 = local_1c;
      if (local_1c != 0.0) break;
      FUN_005acff0();
      FUN_0052d360(param_1);
      local_14 = _DAT_01d51da0 - local_24;
      local_198 = (float)local_14 * (float)_DAT_005eba10;
      if (local_198 < 0.0) {
        local_198 = fVar1;
      }
      if ((float)_DAT_005eba18 < local_198) {
        local_198 = 30.0;
      }
      if ((float)_DAT_005eba20 < local_198) {
        local_24 = _DAT_01d51da0;
        local_2c = 8;
        local_30 = 9;
        local_2b = param_2;
        iVar2 = 0;
        piVar3 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar3[0x17] < param_2) {
              FUN_0052df50(param_1,iVar2,&local_30);
            }
            else {
              FUN_0052ea10(param_1,iVar2,0x40000000);
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0x1f;
          } while (iVar2 < param_1[7]);
        }
      }
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar2 != 0) {
        FUN_004032b0();
        return 0;
      }
    }
  }
  else if (*param_1 == 2) {
    if (3 < param_2) {
      return 1;
    }
    while (_DAT_01d51da8 < param_2) {
      FUN_0057dc40();
      FUN_005bfb40(local_94,"Waiting on sync code %d from server...",param_2);
      FUN_00401fe0(local_94,0,0xb);
      FUN_005acff0();
      FUN_0052d360(param_1);
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar2 != 0) {
        FUN_004032b0();
        return 0;
      }
    }
  }
  else {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x3c0;
    FUN_005030e0("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
