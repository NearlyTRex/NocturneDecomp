// Name: FUN_0050f120
// Address: 0050f120
// Address Range: [[0050f120, 0050f367]]
// Convention: unknown
// Signature: void FUN_0050f120(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f120(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_20;
  byte *local_18;
  
  if (((*param_1 == 2) && (param_1[1] == 3)) && (-1 < param_1[0x48])) {
    if (param_1[0x49] < 0) {
      _DAT_01d046a0 = "..\\core\\netgame.cpp";
      _DAT_01d046a4 = 0x97c;
      FUN_004e4500("CNetGame::processClientFrame - I'm not in player list!");
    }
    FUN_0050d840(param_1,param_1[0x48],0x41200000);
    FUN_0050c190(param_1);
    if (*param_1 == 2) {
LAB_0050f185:
      iVar4 = 0;
      uVar5 = param_1[param_1[0x49] * 0x20 + 0x1a];
      if (0 < _DAT_01d54640) {
        iVar2 = 0;
        do {
          uVar1 = *(uint *)(iVar2 + 0x1d54644);
          if (uVar5 == uVar1) {
            if (-1 < iVar4) {
              FUN_0050f370(param_1,iVar2 + 0x1d54644);
              FUN_0050f4f0(param_1);
              uVar5 = uVar5 ^ uVar1;
              iVar4 = param_1[param_1[0x49] * 0x20 + 0x1a];
              if (0 < _DAT_01d54640) {
                iVar2 = 0;
                local_18 = &DAT_01d546b8;
                do {
                  if (*(int *)(iVar2 + 0x1d54644) < iVar4) {
                    _DAT_01d54640 = _DAT_01d54640 + -1;
                    FUN_005ba1f0(iVar2 + 0x1d54644,local_18,(_DAT_01d54640 - uVar5) * 0x74);
                  }
                  else {
                    uVar5 = uVar5 + 1;
                    local_18 = local_18 + 0x74;
                    iVar2 = iVar2 + 0x74;
                  }
                } while ((int)uVar5 < _DAT_01d54640);
              }
              iVar4 = _DAT_01d54640;
              param_1[0x5e] = 0;
              iVar2 = 0;
              if (iVar4 < 1) {
                return;
              }
              iVar3 = 0;
              while (param_1[param_1[0x49] * 0x20 + 0x1a] != *(int *)(iVar3 + 0x1d54644)) {
                iVar3 = iVar3 + 0x74;
                iVar2 = iVar2 + 1;
                if (iVar4 * 0x74 <= iVar3) {
                  return;
                }
              }
              if (iVar2 < 0) {
                return;
              }
              param_1[0x5e] = 1;
              return;
            }
            break;
          }
          iVar2 = iVar2 + 0x74;
          iVar4 = iVar4 + 1;
        } while (iVar2 < _DAT_01d54640 * 0x74);
      }
      FUN_0050c190(param_1);
      if (*param_1 == 2) {
        local_20 = (float)(_DAT_01d34e38 - _DAT_01d34e48) * (float)_DAT_005e10ad;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_005e10b5 < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_005e10bd < local_20) {
          FUN_0050f4f0(param_1);
        }
        goto LAB_0050f185;
      }
    }
  }
  return;
}
