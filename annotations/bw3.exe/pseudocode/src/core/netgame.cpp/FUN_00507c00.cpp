// Name: FUN_00507c00
// Address: 00507c00
// Address Range: [[00507c00, 00507e47]]
// Convention: unknown
// Signature: void FUN_00507c00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507c00(int *param_1)

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
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x97c;
      FUN_004e4330("CNetGame::processClientFrame - I'm not in player list!");
    }
    FUN_00506320(param_1,param_1[0x48],0x41200000);
    FUN_00504c70(param_1);
    if (*param_1 == 2) {
LAB_00507c65:
      iVar4 = 0;
      uVar5 = param_1[param_1[0x49] * 0x20 + 0x1a];
      if (0 < _DAT_01dc5c80) {
        iVar2 = 0;
        do {
          uVar1 = *(uint *)(iVar2 + 0x1dc5c84);
          if (uVar5 == uVar1) {
            if (-1 < iVar4) {
              FUN_00507e50(param_1,iVar2 + 0x1dc5c84);
              FUN_00507fd0(param_1);
              uVar5 = uVar5 ^ uVar1;
              iVar4 = param_1[param_1[0x49] * 0x20 + 0x1a];
              if (0 < _DAT_01dc5c80) {
                iVar2 = 0;
                local_18 = &DAT_01dc5cf8;
                do {
                  if (*(int *)(iVar2 + 0x1dc5c84) < iVar4) {
                    _DAT_01dc5c80 = _DAT_01dc5c80 + -1;
                    FUN_005a54c0(iVar2 + 0x1dc5c84,local_18,(_DAT_01dc5c80 - uVar5) * 0x74);
                  }
                  else {
                    uVar5 = uVar5 + 1;
                    local_18 = local_18 + 0x74;
                    iVar2 = iVar2 + 0x74;
                  }
                } while ((int)uVar5 < _DAT_01dc5c80);
              }
              iVar4 = _DAT_01dc5c80;
              param_1[0x5e] = 0;
              iVar2 = 0;
              if (iVar4 < 1) {
                return;
              }
              iVar3 = 0;
              while (param_1[param_1[0x49] * 0x20 + 0x1a] != *(int *)(iVar3 + 0x1dc5c84)) {
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
        } while (iVar2 < _DAT_01dc5c80 * 0x74);
      }
      FUN_00504c70(param_1);
      if (*param_1 == 2) {
        local_20 = (float)(_DAT_01da6478 - _DAT_01da6488) * (float)_DAT_005cb119;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_005cb121 < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_005cb129 < local_20) {
          FUN_00507fd0(param_1);
        }
        goto LAB_00507c65;
      }
    }
  }
  return;
}
