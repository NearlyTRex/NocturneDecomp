// Name: FUN_00530340
// Address: 00530340
// Address Range: [[00530340, 00530599]]
// Convention: unknown
// Signature: void FUN_00530340(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  byte *local_18;
  
  if (((*param_1 == 2) && (param_1[1] == 3)) && (-1 < param_1[0x46])) {
    if (param_1[0x47] < 0) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0x97c;
      FUN_005030e0("CNetGame::processClientFrame - I'm not in player list!");
    }
    FUN_0052ea10(param_1,param_1[0x46],0x41200000);
    FUN_0052d360(param_1);
    if (*param_1 == 2) {
LAB_005303a5:
      iVar2 = 0;
      if (0 < _DAT_01d715a8) {
        iVar1 = 0;
        do {
          if (param_1[param_1[0x47] * 0x1f + 0x1a] == *(int *)(iVar1 + 0x1d715ac)) {
            if (-1 < iVar2) {
              FUN_005305a0(param_1,iVar1 + 0x1d715ac);
              FUN_00530710(param_1);
              iVar1 = 0;
              iVar2 = param_1[param_1[0x47] * 0x1f + 0x1a];
              if (0 < _DAT_01d715a8) {
                iVar3 = 0;
                local_18 = &DAT_01d71618;
                do {
                  if (*(int *)(iVar3 + 0x1d715ac) < iVar2) {
                    _DAT_01d715a8 = _DAT_01d715a8 + -1;
                    FUN_005c25d0(iVar3 + 0x1d715ac,local_18,(_DAT_01d715a8 - iVar1) * 0x6c);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    local_18 = local_18 + 0x6c;
                    iVar3 = iVar3 + 0x6c;
                  }
                } while (iVar1 < _DAT_01d715a8);
              }
              param_1[0x5c] = 0;
              iVar2 = 0;
              if (_DAT_01d715a8 < 1) {
                return;
              }
              iVar1 = 0;
              while (param_1[param_1[0x47] * 0x1f + 0x1a] != *(int *)(iVar1 + 0x1d715ac)) {
                iVar1 = iVar1 + 0x6c;
                iVar2 = iVar2 + 1;
                if (_DAT_01d715a8 * 0x6c <= iVar1) {
                  return;
                }
              }
              if (iVar2 < 0) {
                return;
              }
              param_1[0x5c] = 1;
              return;
            }
            break;
          }
          iVar1 = iVar1 + 0x6c;
          iVar2 = iVar2 + 1;
        } while (iVar1 < _DAT_01d715a8 * 0x6c);
      }
      FUN_0052d360(param_1);
      if (*param_1 == 2) {
        local_20 = (float)(_DAT_01d51da0 - _DAT_01d51db0) * (float)_DAT_005ec308;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_005ec310 < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_005ec318 < local_20) {
          FUN_00530710(param_1);
        }
        goto LAB_005303a5;
      }
    }
  }
  return;
}
