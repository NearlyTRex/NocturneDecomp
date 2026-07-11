// Name: FUN_004ea370
// Address: 004ea370
// Address Range: [[004ea370, 004ea6da]]
// Convention: unknown
// Signature: undefined4 FUN_004ea370(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ea370(int *param_1,int param_2)

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
  
  FUN_00403f50();
  if (param_2 < 1) {
    _DAT_01cc4800 = "?..\\core\\netgame.cpp" + 1;
    _DAT_01cc4804 = 0x337;
    FUN_004c8440("CNetGame::syncPlayers - don't use 0!");
  }
  if (*param_1 == 0) {
    return 1;
  }
  param_1[1] = 2;
  iVar2 = FUN_00558a30();
  _DAT_01cea3f4 = iVar2 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar2 / 0x12;
  param_1[param_1[0x45] * 0x1e + 0x17] = param_2;
  if (*param_1 == 1) {
    local_24 = _DAT_01cea3f8 + -0x1e0000;
    local_20 = param_1 + 8;
    while( true ) {
      FUN_0052ee70();
      FUN_00563c90(local_194,"Syncing stage %d.",param_2);
      FUN_00402600(local_194,0,0xb);
      FUN_00402600("Waiting on:",0,0x16);
      local_1c = 1.4013e-45;
      local_18 = 0x21;
      iVar2 = 0;
      piVar3 = param_1;
      if (0 < param_1[7]) {
        do {
          if (piVar3[0x17] < param_2) {
            local_1c = 0.0;
            FUN_00402600(local_20 + iVar2 * 0x1e,0,local_18);
            FUN_00563c90(local_194,&DAT_0058bd94,piVar3[0x17]);
            FUN_00402600(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 0x1e;
        } while (iVar2 < param_1[7]);
      }
      fVar1 = local_1c;
      if (local_1c != 0.0) break;
      FUN_00553910();
      FUN_004ea740(param_1);
      local_14 = _DAT_01cea3f8 - local_24;
      local_198 = (float)local_14 * (float)_DAT_0058be3a;
      if (local_198 < 0.0) {
        local_198 = fVar1;
      }
      if ((float)_DAT_0058be42 < local_198) {
        local_198 = 30.0;
      }
      if ((float)_DAT_0058be4a < local_198) {
        local_24 = _DAT_01cea3f8;
        local_2c = 8;
        local_30 = 9;
        local_2b = param_2;
        iVar2 = 0;
        piVar3 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar3[0x17] < param_2) {
              FUN_004eb350(param_1,iVar2,&local_30);
            }
            else {
              FUN_004ebe10(param_1,iVar2,0x40000000);
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0x1e;
          } while (iVar2 < param_1[7]);
        }
      }
      iVar2 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
      if (iVar2 != 0) {
        FUN_00403f50();
        return 0;
      }
    }
  }
  else if (*param_1 == 2) {
    if (3 < param_2) {
      return 1;
    }
    while (_DAT_01cea400 < param_2) {
      FUN_0052ee70();
      FUN_00563c90(local_94,"Waiting on sync code %d from server...",param_2);
      FUN_00402600(local_94,0,0xb);
      FUN_00553910();
      FUN_004ea740(param_1);
      iVar2 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
      if (iVar2 != 0) {
        FUN_00403f50();
        return 0;
      }
    }
  }
  else {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x3c0;
    FUN_004c8440("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
