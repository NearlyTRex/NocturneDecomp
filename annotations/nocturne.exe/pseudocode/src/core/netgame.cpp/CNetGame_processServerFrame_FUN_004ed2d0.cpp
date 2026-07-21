// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
// Address: 004ed2d0
// Address Range: [[004ed2d0, 004ed714]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(int *param_1)

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
  uint local_90;
  byte local_8c;
  uint local_8b;
  uint local_87;
  uint local_83;
  uint local_7f [22];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  
  bVar13 = 0;
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar1 = iVar1 / 0x12;
  _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar1;
  if (*param_1 == 0) {
    iVar1 = rand();
    param_1[0x5b] = iVar1;
    core_actor_cpp_setRandomSeed_FUN_0040dd20(iVar1);
    return;
  }
  if ((*param_1 == 1) && (param_1[1] == 3)) {
    if (param_1[0x45] < 0) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 0x8f6;
      FUN_004c8440("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (param_1[0x45] != param_1[0x44]) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 0x8f7;
      FUN_004c8440("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < param_1[7]) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(param_1,iVar1,0x41200000);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[7]);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(param_1);
    local_18 = 0x7fffffff;
    iVar1 = 0;
    piVar6 = param_1;
    if (0 < param_1[7]) {
      do {
        if (piVar6[0x1a] < local_18) {
          local_18 = piVar6[0x1a];
        }
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 0x1e;
      } while (iVar1 < param_1[7]);
    }
    iVar1 = 0;
    if (0 < _DAT_01d09c00) {
      iVar5 = 0;
      puVar10 = &DAT_01d09c68;
      do {
        if (*(int *)(iVar5 + 0x1d09c04) < local_18) {
          _DAT_01d09c00 = _DAT_01d09c00 + -1;
          memmove(iVar5 + 0x1d09c04,puVar10,(_DAT_01d09c00 - iVar1) * 100)
          ;
        }
        else {
          puVar10 = puVar10 + 100;
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + 100;
        }
      } while (iVar1 < _DAT_01d09c00);
    }
    iVar5 = 0;
    iVar1 = param_1[param_1[0x45] * 0x1e + 0x1a];
    if (0 < _DAT_01d09c00) {
      iVar2 = 0;
      do {
        if (iVar1 == *(int *)(iVar2 + 0x1d09c04)) {
          if (-1 < iVar5) {
            piVar6 = (int *)(iVar2 + 0x1d09c04);
            goto LAB_004ed475;
          }
          break;
        }
        iVar2 = iVar2 + 100;
        iVar5 = iVar5 + 1;
      } while (iVar2 < _DAT_01d09c00 * 100);
    }
    if (0x1ff < _DAT_01d09c00) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 299;
      FUN_004c8440("allocSimFrame - sim history list full");
    }
    piVar6 = (int *)(_DAT_01d09c00 * 100 + 0x1d09c04);
    _DAT_01d09c00 = _DAT_01d09c00 + 1;
    memset(piVar6,0,100);
    *piVar6 = iVar1;
LAB_004ed475:
    iVar1 = rand();
    piVar6[1] = iVar1;
    piVar6[2] = *(int *)(0x01C775EC + 0x264);
    iVar1 = 0;
    piVar3 = param_1;
    piVar7 = piVar6;
    if (0 < param_1[7]) {
      do {
        piVar8 = piVar3 + 0x1b;
        piVar11 = piVar7 + 3;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + (uint)bVar13 * -2 + 1;
          piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x1e;
        piVar7 = piVar7 + 0xb;
      } while (iVar1 < param_1[7]);
    }
    local_1c = piVar6;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(param_1,piVar6);
    local_24 = 0;
    if (0 < param_1[7]) {
      local_14 = param_1 + 8;
      do {
        piVar6 = local_14;
        if (local_24 != param_1[0x45]) {
          iVar1 = param_1[param_1[0x45] * 0x1e + 0x1a] - local_14[0x12];
          if (iVar1 < 1) {
            _DAT_01cc4800 = "..\\core\\netgame.cpp";
            _DAT_01cc4804 = 0x93b;
            FUN_004c8440("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar1) {
            iVar1 = 5;
          }
          local_20 = piVar6[0x12];
          for (; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar5 = 0;
            if (0 < _DAT_01d09c00) {
              iVar2 = 0;
              do {
                if (local_20 == *(int *)(iVar2 + 0x1d09c04)) goto LAB_004ed65e;
                iVar2 = iVar2 + 100;
                iVar5 = iVar5 + 1;
              } while (iVar2 < _DAT_01d09c00 * 100);
            }
            iVar5 = -1;
LAB_004ed65e:
            if (iVar5 < 0) {
              _DAT_01cc4800 = "..\\core\\netgame.cpp";
              _DAT_01cc4804 = 0x94d;
              FUN_004c8440("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar5 = iVar5 * 100;
            puVar4 = (uint *)(iVar5 + 0x1d09c04);
            local_90 = 0x69;
            local_8c = 0xf;
            local_8b = *puVar4;
            local_87 = *(uint *)(iVar5 + 0x1d09c08);
            local_83 = *(uint *)(iVar5 + 0x1d09c0c);
            iVar5 = 0;
            if (0 < param_1[7]) {
              do {
                puVar9 = puVar4 + 3;
                puVar12 = local_7f + iVar5 * 0xb;
                for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                }
                iVar5 = iVar5 + 1;
                puVar4 = puVar4 + 0xb;
              } while (iVar5 < param_1[7]);
            }
            core_netgame_cpp_CNetGame_send_FUN_004eb350(param_1,local_24,&local_90);
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 0x1e;
        local_24 = local_24 + 1;
      } while (local_24 < param_1[7]);
    }
  }
  return;
}
