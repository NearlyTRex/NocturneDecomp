// Name: FUN_00504890
// Address: 00504890
// Address Range: [[00504890, 00504c04]]
// Convention: unknown
// Signature: undefined4 FUN_00504890(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00504890(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float local_198;
  byte local_194 [256];
  byte local_94 [100];
  uint local_30;
  byte local_2c;
  int local_2b;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  FUN_004032b0();
  if (param_2 < 1) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x337;
    FUN_004e4330("CNetGame::syncPlayers - don't use 0!");
  }
  if (*param_1 == 0) {
    return 1;
  }
  param_1[1] = 2;
  iVar1 = FUN_005806a0();
  _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01da6474 = iVar1 / 0x12;
  param_1[param_1[0x49] * 0x20 + 0x17] = param_2;
  if (*param_1 == 1) {
    local_20 = _DAT_01da6478 + -0x1e0000;
    local_1c = param_1 + 8;
    while( true ) {
      FUN_00560d70();
      FUN_005a28c0(local_194,"Syncing stage %d.",param_2);
      FUN_00401fe0(local_194,0,0xb);
      iVar1 = 0x21;
      FUN_00401fe0("Waiting on:",0,0x16);
      local_18 = 1;
      local_14 = 0;
      piVar3 = param_1;
      if (0 < param_1[7]) {
        do {
          iVar2 = iVar1;
          if (piVar3[0x17] < param_2) {
            local_18 = 0;
            FUN_00401fe0(local_1c + local_14 * 0x20,0,iVar1);
            FUN_005a28c0(local_194,&DAT_005ca77b,piVar3[0x17]);
            iVar2 = iVar1 + 0xb;
            FUN_00401fe0(local_194,200,iVar1);
          }
          local_14 = local_14 + 1;
          iVar1 = iVar2;
          piVar3 = piVar3 + 0x20;
        } while (local_14 < param_1[7]);
      }
      if (local_18 != 0) break;
      FUN_0057a8a0();
      FUN_00504c70(param_1);
      local_24 = _DAT_01da6478 - local_20;
      local_198 = (float)local_24 * (float)_DAT_005ca821;
      if (local_198 < 0.0) {
        local_198 = 0.0;
      }
      if ((float)_DAT_005ca829 < local_198) {
        local_198 = 30.0;
      }
      if ((float)_DAT_005ca831 < local_198) {
        local_20 = _DAT_01da6478;
        local_2c = 8;
        local_30 = 9;
        local_2b = param_2;
        iVar1 = 0;
        piVar3 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar3[0x17] < param_2) {
              FUN_00505870(param_1,iVar1,&local_30);
            }
            else {
              FUN_00506320(param_1,iVar1,0x40000000);
            }
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 0x20;
          } while (iVar1 < param_1[7]);
        }
      }
      iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar1 != 0) {
        FUN_004032b0();
        return 0;
      }
    }
  }
  else if (*param_1 == 2) {
    if (3 < param_2) {
      return 1;
    }
    while (_DAT_01da6480 < param_2) {
      FUN_00560d70();
      FUN_005a28c0(local_94,"Waiting on sync code %d from server...",param_2);
      FUN_00401fe0(local_94,0,0xb);
      FUN_0057a8a0();
      FUN_00504c70(param_1);
      iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar1 != 0) {
        FUN_004032b0();
        return 0;
      }
    }
  }
  else {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x3c0;
    FUN_004e4330("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
