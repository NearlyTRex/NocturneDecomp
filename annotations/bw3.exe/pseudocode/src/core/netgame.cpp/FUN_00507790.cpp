// Name: FUN_00507790
// Address: 00507790
// Address Range: [[00507790, 00507bff]]
// Convention: unknown
// Signature: void FUN_00507790(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507790(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  byte *puVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  uint local_a0;
  byte local_9c;
  uint local_9b;
  uint local_97;
  uint local_93;
  uint local_8f [26];
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  iVar1 = FUN_005806a0();
  iVar1 = iVar1 / 0x12;
  _DAT_01da6474 = iVar1 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01da6474 = iVar1;
  if (*param_1 == 0) {
    iVar1 = FUN_005a35cc();
    param_1[0x5f] = iVar1;
    FUN_0040cdc0(iVar1);
    return;
  }
  if ((*param_1 == 1) && (param_1[1] == 3)) {
    if (param_1[0x49] < 0) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x8f6;
      FUN_004e4330("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (param_1[0x49] != param_1[0x48]) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x8f7;
      FUN_004e4330("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < param_1[7]) {
      do {
        FUN_00506320(param_1,iVar1,0x41200000);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[7]);
    }
    FUN_00504c70(param_1);
    local_20 = 0x7fffffff;
    iVar1 = 0;
    piVar7 = param_1;
    if (0 < param_1[7]) {
      do {
        if (piVar7[0x1a] < local_20) {
          local_20 = piVar7[0x1a];
        }
        iVar1 = iVar1 + 1;
        piVar7 = piVar7 + 0x20;
      } while (iVar1 < param_1[7]);
    }
    iVar1 = 0;
    if (0 < _DAT_01dc5c80) {
      iVar6 = 0;
      puVar10 = &DAT_01dc5cf8;
      do {
        if (*(int *)(iVar6 + 0x1dc5c84) < local_20) {
          _DAT_01dc5c80 = _DAT_01dc5c80 + -1;
          FUN_005a54c0(iVar6 + 0x1dc5c84,puVar10,(_DAT_01dc5c80 - iVar1) * 0x74);
        }
        else {
          puVar10 = puVar10 + 0x74;
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x74;
        }
      } while (iVar1 < _DAT_01dc5c80);
    }
    iVar1 = param_1[param_1[0x49] * 0x20 + 0x1a];
    iVar6 = 0;
    if (0 < _DAT_01dc5c80) {
      iVar2 = 0;
      do {
        if (iVar1 == *(int *)(iVar2 + 0x1dc5c84)) {
          if (-1 < iVar6) {
            piVar7 = (int *)(iVar2 + 0x1dc5c84);
            goto LAB_00507935;
          }
          break;
        }
        iVar2 = iVar2 + 0x74;
        iVar6 = iVar6 + 1;
      } while (iVar2 < _DAT_01dc5c80 * 0x74);
    }
    if (0x1ff < _DAT_01dc5c80) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 299;
      FUN_004e4330("allocSimFrame - sim history list full");
    }
    piVar7 = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
    _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
    FUN_005a28f0(piVar7,0,0x74);
    *piVar7 = iVar1;
LAB_00507935:
    iVar1 = FUN_005a35cc();
    piVar7[1] = iVar1;
    piVar7[2] = *(int *)(0x01D2130C + 0x314);
    iVar1 = 0;
    piVar3 = param_1;
    piVar4 = piVar7;
    if (0 < param_1[7]) {
      do {
        piVar8 = piVar3 + 0x1b;
        piVar11 = piVar4 + 3;
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + (uint)bVar13 * -2 + 1;
          piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x20;
        piVar4 = piVar4 + 0xd;
      } while (iVar1 < param_1[7]);
    }
    local_24 = piVar7;
    FUN_00507e50(param_1,piVar7);
    local_18 = 0;
    if (0 < param_1[7]) {
      local_1c = param_1 + 8;
      do {
        piVar7 = local_1c;
        if (local_18 != param_1[0x49]) {
          iVar1 = param_1[param_1[0x49] * 0x20 + 0x1a] - local_1c[0x12];
          if (iVar1 < 1) {
            _DAT_01d71de0 = "..\\core\\netgame.cpp";
            _DAT_01d71de4 = 0x93b;
            FUN_004e4330("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar1) {
            iVar1 = 5;
          }
          local_14 = piVar7[0x12];
          for (; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar6 = 0;
            if (0 < _DAT_01dc5c80) {
              iVar2 = 0;
              do {
                if (local_14 == *(int *)(iVar2 + 0x1dc5c84)) goto LAB_00507b40;
                iVar2 = iVar2 + 0x74;
                iVar6 = iVar6 + 1;
              } while (iVar2 < _DAT_01dc5c80 * 0x74);
            }
            iVar6 = -1;
LAB_00507b40:
            if (iVar6 < 0) {
              _DAT_01d71de0 = "..\\core\\netgame.cpp";
              _DAT_01d71de4 = 0x94d;
              FUN_004e4330("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar6 = iVar6 * 0x74;
            puVar5 = (uint *)(iVar6 + 0x1dc5c84);
            local_a0 = 0x79;
            local_9c = 0xf;
            local_9b = *puVar5;
            local_97 = *(uint *)(iVar6 + 0x1dc5c88);
            local_93 = *(uint *)(iVar6 + 0x1dc5c8c);
            iVar6 = 0;
            if (0 < param_1[7]) {
              do {
                puVar9 = puVar5 + 3;
                puVar12 = local_8f + iVar6 * 0xd;
                for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 0xd;
              } while (iVar6 < param_1[7]);
            }
            FUN_00505870(param_1,local_18,&local_a0);
            local_14 = local_14 + 1;
          }
        }
        local_1c = local_1c + 0x20;
        local_18 = local_18 + 1;
      } while (local_18 < param_1[7]);
    }
  }
  return;
}
