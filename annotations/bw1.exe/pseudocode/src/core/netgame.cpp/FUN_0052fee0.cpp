// Name: FUN_0052fee0
// Address: 0052fee0
// Address Range: [[0052fee0, 00530338]]
// Convention: unknown
// Signature: void FUN_0052fee0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fee0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  byte *puVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  uint local_98;
  byte local_94;
  uint local_93;
  uint local_8f;
  uint local_8b;
  uint local_87 [24];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  
  bVar13 = 0;
  iVar1 = FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar1;
  if (*param_1 == 0) {
    iVar1 = FUN_005c084c();
    param_1[0x5d] = iVar1;
    FUN_0040cb80(iVar1);
    return;
  }
  if ((*param_1 == 1) && (param_1[1] == 3)) {
    if (param_1[0x47] < 0) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0x8f6;
      FUN_005030e0("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (param_1[0x47] != param_1[0x46]) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0x8f7;
      FUN_005030e0("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < param_1[7]) {
      do {
        FUN_0052ea10(param_1,iVar1,0x41200000);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[7]);
    }
    FUN_0052d360(param_1);
    local_18 = 0x7fffffff;
    iVar1 = 0;
    piVar6 = param_1;
    if (0 < param_1[7]) {
      do {
        if (piVar6[0x1a] < local_18) {
          local_18 = piVar6[0x1a];
        }
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 0x1f;
      } while (iVar1 < param_1[7]);
    }
    iVar1 = 0;
    if (0 < _DAT_01d715a8) {
      iVar5 = 0;
      puVar10 = &DAT_01d71618;
      do {
        if (*(int *)(iVar5 + 0x1d715ac) < local_18) {
          _DAT_01d715a8 = _DAT_01d715a8 + -1;
          FUN_005c25d0(iVar5 + 0x1d715ac,puVar10,(_DAT_01d715a8 - iVar1) * 0x6c);
        }
        else {
          puVar10 = puVar10 + 0x6c;
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + 0x6c;
        }
      } while (iVar1 < _DAT_01d715a8);
    }
    iVar5 = 0;
    iVar1 = param_1[param_1[0x47] * 0x1f + 0x1a];
    if (0 < _DAT_01d715a8) {
      iVar2 = 0;
      do {
        if (iVar1 == *(int *)(iVar2 + 0x1d715ac)) {
          if (-1 < iVar5) {
            piVar6 = (int *)(iVar2 + 0x1d715ac);
            goto LAB_0053008d;
          }
          break;
        }
        iVar2 = iVar2 + 0x6c;
        iVar5 = iVar5 + 1;
      } while (iVar2 < _DAT_01d715a8 * 0x6c);
    }
    if (0x1ff < _DAT_01d715a8) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 299;
      FUN_005030e0("allocSimFrame - sim history list full");
    }
    piVar6 = (int *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    FUN_005bfb70(piVar6,0,0x6c);
    *piVar6 = iVar1;
LAB_0053008d:
    iVar1 = FUN_005c084c();
    piVar6[1] = iVar1;
    piVar6[2] = *(int *)(0x01CCF390 + 0x294);
    iVar1 = 0;
    piVar3 = param_1;
    piVar7 = piVar6;
    if (0 < param_1[7]) {
      do {
        piVar8 = piVar3 + 0x1b;
        piVar11 = piVar7 + 3;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + (uint)bVar13 * -2 + 1;
          piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x1f;
        piVar7 = piVar7 + 0xc;
      } while (iVar1 < param_1[7]);
    }
    local_1c = piVar6;
    FUN_005305a0(param_1,piVar6);
    local_24 = 0;
    if (0 < param_1[7]) {
      local_14 = param_1 + 8;
      do {
        piVar6 = local_14;
        if (local_24 != param_1[0x47]) {
          iVar1 = param_1[param_1[0x47] * 0x1f + 0x1a] - local_14[0x12];
          if (iVar1 < 1) {
            _DAT_01d1d400 = "..\\core\\netgame.cpp";
            _DAT_01d1d404 = 0x93b;
            FUN_005030e0("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar1) {
            iVar1 = 5;
          }
          local_20 = piVar6[0x12];
          for (; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar5 = 0;
            if (0 < _DAT_01d715a8) {
              iVar2 = 0;
              do {
                if (local_20 == *(int *)(iVar2 + 0x1d715ac)) goto LAB_00530282;
                iVar2 = iVar2 + 0x6c;
                iVar5 = iVar5 + 1;
              } while (iVar2 < _DAT_01d715a8 * 0x6c);
            }
            iVar5 = -1;
LAB_00530282:
            if (iVar5 < 0) {
              _DAT_01d1d400 = "..\\core\\netgame.cpp";
              _DAT_01d1d404 = 0x94d;
              FUN_005030e0("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar5 = iVar5 * 0x6c;
            puVar4 = (uint *)(iVar5 + 0x1d715ac);
            local_98 = 0x71;
            local_94 = 0xf;
            local_93 = *puVar4;
            local_8f = *(uint *)(iVar5 + 0x1d715b0);
            local_8b = *(uint *)(iVar5 + 0x1d715b4);
            iVar5 = 0;
            if (0 < param_1[7]) {
              do {
                puVar9 = puVar4 + 3;
                puVar12 = local_87 + iVar5 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                }
                iVar5 = iVar5 + 1;
                puVar4 = puVar4 + 0xc;
              } while (iVar5 < param_1[7]);
            }
            FUN_0052df50(param_1,local_24,&local_98);
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 0x1f;
        local_24 = local_24 + 1;
      } while (local_24 < param_1[7]);
    }
  }
  return;
}
