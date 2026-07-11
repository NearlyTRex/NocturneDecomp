// Name: FUN_004ed720
// Address: 004ed720
// Address Range: [[004ed720, 004ed971]]
// Convention: unknown
// Signature: void FUN_004ed720(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed720(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  byte *local_18;
  
  if (((*param_1 == 2) && (param_1[1] == 3)) && (-1 < param_1[0x44])) {
    if (param_1[0x45] < 0) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 0x97c;
      FUN_004c8440("CNetGame::processClientFrame - I'm not in player list!");
    }
    FUN_004ebe10(param_1,param_1[0x44],0x41200000);
    FUN_004ea740(param_1);
    if (*param_1 == 2) {
LAB_004ed785:
      iVar2 = 0;
      if (0 < _DAT_01d09c00) {
        iVar1 = 0;
        do {
          if (param_1[param_1[0x45] * 0x1e + 0x1a] == *(int *)(iVar1 + 0x1d09c04)) {
            if (-1 < iVar2) {
              FUN_004ed980(param_1,iVar1 + 0x1d09c04);
              FUN_004edaf0(param_1);
              iVar1 = 0;
              iVar2 = param_1[param_1[0x45] * 0x1e + 0x1a];
              if (0 < _DAT_01d09c00) {
                iVar3 = 0;
                local_18 = &DAT_01d09c68;
                do {
                  if (*(int *)(iVar3 + 0x1d09c04) < iVar2) {
                    _DAT_01d09c00 = _DAT_01d09c00 + -1;
                    FUN_00566170(iVar3 + 0x1d09c04,local_18,(_DAT_01d09c00 - iVar1) * 100);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    local_18 = local_18 + 100;
                    iVar3 = iVar3 + 100;
                  }
                } while (iVar1 < _DAT_01d09c00);
              }
              param_1[0x5a] = 0;
              iVar2 = 0;
              if (_DAT_01d09c00 < 1) {
                return;
              }
              iVar1 = 0;
              while (param_1[param_1[0x45] * 0x1e + 0x1a] != *(int *)(iVar1 + 0x1d09c04)) {
                iVar1 = iVar1 + 100;
                iVar2 = iVar2 + 1;
                if (_DAT_01d09c00 * 100 <= iVar1) {
                  return;
                }
              }
              if (iVar2 < 0) {
                return;
              }
              param_1[0x5a] = 1;
              return;
            }
            break;
          }
          iVar1 = iVar1 + 100;
          iVar2 = iVar2 + 1;
        } while (iVar1 < _DAT_01d09c00 * 100);
      }
      FUN_004ea740(param_1);
      if (*param_1 == 2) {
        local_20 = (float)(_DAT_01cea3f8 - _DAT_01cea408) * (float)_DAT_0058c732;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_0058c73a < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_0058c742 < local_20) {
          FUN_004edaf0(param_1);
        }
        goto LAB_004ed785;
      }
    }
  }
  return;
}
