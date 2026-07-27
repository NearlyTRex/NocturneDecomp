// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
// Address: 004ec600
// Address Range: [[004ec600, 004ecc7a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(int *param_1,undefined4 *param_2)

#include "nocturne.h"

uint __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  byte bVar15;
  int aiStackY_208c [1986];
  int local_167;
  char local_163 [80];
  int local_113;
  char local_10f [20];
  int local_fb [2];
  int aiStack_f3 [13];
  int local_bc;
  int aiStack_b8 [4];
  int local_a8;
  int local_a4;
  byte local_a0 [4];
  ushort local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [5];
  int *local_30;
  int *local_2c;
  int *local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  if ((*param_1 != 2) || (param_1[1] != 1)) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x7e6;
    core_main_c_FUN_004c8440("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar10 = (uint *)&stack0xfffffe90;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *param_2;
    param_2 = param_2 + (uint)bVar15 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
  }
  *(byte *)puVar10 = *(byte *)param_2;
  iVar5 = -1;
  param_1[0x5b] = local_167;
  local_44[4] = -1;
  iVar11 = 0;
  if (0 < local_113) {
    piVar12 = local_fb;
    do {
      if (((short)piVar12[1] == (short)param_1[param_1[0x45] * 0x1e + 0x10]) &&
         (*piVar12 == param_1[param_1[0x45] * 0x1e + 0xf])) {
        iVar5 = iVar11;
      }
      if (((short)piVar12[1] == (short)param_1[param_1[0x44] * 0x1e + 0x10]) &&
         (*piVar12 == param_1[param_1[0x44] * 0x1e + 0xf])) {
        local_44[4] = iVar11;
      }
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 10;
    } while (iVar11 < local_113);
  }
  if ((local_44[4] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar7 = local_163;
  piVar12 = param_1 + 0x46;
  do {
    cVar1 = *pcVar7;
    *(char *)piVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    *(char *)((int)piVar12 + 1) = cVar1;
    piVar12 = (int *)((int)piVar12 + 2);
  } while (cVar1 != '\0');
  local_24 = 0;
  if (0 < param_1[7]) {
    local_44[2] = 0;
    local_28 = param_1 + 8;
    local_30 = param_1 + 0xf;
    local_2c = param_1;
    do {
      uVar3 = local_24;
      iVar5 = 0;
      if (0 < local_113) {
        piVar12 = local_fb;
        do {
          if (((short)piVar12[1] == (short)local_30[1]) && (*piVar12 == *local_30)) break;
          iVar5 = iVar5 + 1;
          piVar12 = piVar12 + 10;
        } while (iVar5 < local_113);
      }
      if (iVar5 == local_113) {
        if (local_24 == param_1[0x45]) {
          PTR_01cc4800 = "..\\core\\netgame.cpp";
          INT_01cc4804 = 0x811;
          core_main_c_FUN_004c8440("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(param_1,local_24);
      }
      else {
        *(int *)((int)local_44 + local_44[2]) = iVar5;
        pcVar7 = local_10f + iVar5 * 0x28;
        piVar12 = local_28;
        if (uVar3 == param_1[0x45]) {
          DAT_005bdee4 = uVar3 ^ param_1[0x45];
          iVar11 = _strcmp(local_28,pcVar7);
          if (iVar11 != 0) {
            DAT_005bdee4 = 1;
          }
          if (local_2c[0x19] == aiStack_f3[iVar5 * 10 + 2]) {
            if (DAT_005bdee4 == 0) goto LAB_004ecb76;
          }
          else {
            DAT_005bdee4 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(param_1);
        }
        else {
          do {
            cVar1 = *pcVar7;
            *(char *)piVar12 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            *(char *)((int)piVar12 + 1) = cVar1;
            piVar12 = (int *)((int)piVar12 + 2);
          } while (cVar1 != '\0');
          param_1[uVar3 * 0x1e + 0x19] = aiStack_f3[iVar5 * 10 + 2];
          param_1[uVar3 * 0x1e + 0xd] = aiStack_f3[iVar5 * 10];
          param_1[uVar3 * 0x1e + 0xe] = aiStack_f3[iVar5 * 10 + 1];
        }
LAB_004ecb76:
        local_28 = local_28 + 0x1e;
        local_2c = local_2c + 0x1e;
        local_24 = local_24 + 1;
        local_10f[iVar5 * 0x28] = '\0';
        local_30 = local_30 + 0x1e;
        local_44[2] = local_44[2] + 4;
      }
    } while ((int)local_24 < param_1[7]);
  }
  iVar5 = 0;
  if (0 < local_113) {
    iVar11 = 0;
    do {
      if (local_10f[iVar11] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440
                        (param_1,(int)local_fb + iVar11,local_10f + iVar11,
                         *(uint *)((int)aiStack_f3 + iVar11),
                         *(uint *)((int)aiStack_f3 + iVar11 + 4));
      param_1[iVar4 * 0x1e + 0x19] = *(int *)((int)aiStack_f3 + iVar11 + 8);
      local_44[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar11 = iVar11 + 0x28;
    } while (iVar5 < local_113);
  }
  param_1[0x44] = local_44[param_1[0x44]];
  param_1[0x45] = local_44[param_1[0x45]];
  local_44[3] = param_1[7] + -1;
  if (-1 < param_1[7] + -1) {
    local_20 = param_1 + 8;
    do {
      local_18 = 0;
      if (0 < local_44[3]) {
        local_14 = 0;
        local_1c = local_20 + 7;
        piVar12 = local_20;
        do {
          iVar5 = local_18;
          piVar6 = piVar12 + 0x1e;
          if (*(int *)((int)local_44 + local_14 + 4) < *(int *)((int)local_44 + local_14)) {
            puVar10 = (uint *)((int)local_44 + local_14 + 4);
            uVar2 = *(uint *)((int)local_44 + local_14);
            *(uint *)((int)local_44 + local_14) = *puVar10;
            *puVar10 = uVar2;
            piVar14 = local_20 + iVar5 * 0x1e;
            piVar8 = piVar14 + (uint)bVar15 * -2 + 1;
            local_bc = *piVar14;
            piVar13 = aiStack_b8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1;
            piVar9 = piVar8 + (uint)bVar15 * -2 + 1;
            aiStack_b8[(uint)bVar15 * -2] = *piVar8;
            *piVar13 = *piVar9;
            piVar13[(uint)bVar15 * -2 + 1] = piVar9[(uint)bVar15 * -2 + 1];
            (piVar13 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (piVar9 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
            local_a8 = piVar14[5];
            local_a4 = piVar14[6];
            core_netgame_cpp_assignInt1_FUN_004edfa0(local_a0,local_1c);
            local_9c = (short)local_1c[1];
            local_98 = piVar14[9];
            local_94 = piVar14[10];
            local_90 = piVar14[0xb];
            local_8c = piVar14[0xc];
            local_88 = piVar14[0xd];
            local_84 = piVar14[0xe];
            local_80 = piVar14[0xf];
            local_7c = piVar14[0x10];
            local_78 = piVar14[0x11];
            local_74 = piVar14[0x12];
            local_70 = piVar12[0x13];
            local_6c = piVar12[0x14];
            local_68 = piVar12[0x15];
            local_64 = piVar12[0x16];
            local_60 = piVar12[0x17];
            local_5c = piVar12[0x18];
            local_58 = piVar12[0x19];
            local_54 = piVar12[0x1a];
            local_50 = piVar12[0x1b];
            local_4c = piVar12[0x1c];
            local_48 = piVar12[0x1d];
            piVar12 = piVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar14 = *piVar12;
              piVar12 = piVar12 + (uint)bVar15 * -2 + 1;
              piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
            }
            piVar12 = &local_bc;
            piVar14 = piVar6;
            for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar14 = *piVar12;
              piVar12 = piVar12 + (uint)bVar15 * -2 + 1;
              piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0x1e;
          piVar12 = piVar6;
        } while (local_18 < local_44[3]);
      }
      local_44[3] = local_44[3] + -1;
    } while (-1 < local_44[3]);
  }
  return 1;
}
