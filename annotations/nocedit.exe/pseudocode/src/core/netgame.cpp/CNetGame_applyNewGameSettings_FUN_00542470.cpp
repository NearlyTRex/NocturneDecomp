// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_applyNewGameSettings(uint param_1,
   uint param_2) */

uint core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  int aiStackY_208c [1989];
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
  int local_44 [6];
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  bVar14 = 0;
  if ((*in_stack_00000004 != 2) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar8 = (uint *)&stack0xfffffe90;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar14 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
  }
  *(byte *)puVar8 = *(byte *)in_stack_00000008;
  iVar4 = -1;
  in_stack_00000004[0x5b] = local_167;
  local_44[5] = -1;
  iVar9 = 0;
  if (0 < local_113) {
    piVar10 = local_fb;
    do {
      if (((short)piVar10[1] == (short)in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0x10]) &&
         (*piVar10 == in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0xf])) {
        iVar4 = iVar9;
      }
      if (((short)piVar10[1] == (short)in_stack_00000004[in_stack_00000004[0x44] * 0x1e + 0x10]) &&
         (*piVar10 == in_stack_00000004[in_stack_00000004[0x44] * 0x1e + 0xf])) {
        local_44[5] = iVar9;
      }
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 10;
    } while (iVar9 < local_113);
  }
  if ((local_44[5] < 0) || (iVar4 < 0)) {
    return 0;
  }
  pcVar6 = local_163;
  piVar10 = in_stack_00000004 + 0x46;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar10 + 1) = cVar1;
    piVar10 = (int *)((int)piVar10 + 2);
  } while (cVar1 != '\0');
  local_44[3] = 0;
  if (0 < in_stack_00000004[7]) {
    local_44[2] = 0;
    local_24 = in_stack_00000004 + 8;
    local_2c = in_stack_00000004 + 0xf;
    local_28 = in_stack_00000004;
    do {
      iVar4 = 0;
      if (0 < local_113) {
        piVar10 = local_fb;
        do {
          if (((short)piVar10[1] == (short)local_2c[1]) && (*piVar10 == *local_2c)) break;
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 10;
        } while (iVar4 < local_113);
      }
      if (iVar4 == local_113) {
        if (local_44[3] == in_stack_00000004[0x45]) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x811;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00();
      }
      else {
        *(int *)((int)local_44 + local_44[2]) = iVar4;
        pcVar6 = local_10f + iVar4 * 0x28;
        piVar10 = local_24;
        if (local_44[3] == in_stack_00000004[0x45]) {
          DAT_00680a04 = local_44[3] ^ in_stack_00000004[0x45];
          iVar9 = strcmp((char *)local_24,pcVar6);
          if (iVar9 != 0) {
            DAT_00680a04 = 1;
          }
          if (local_28[0x19] == aiStack_f3[iVar4 * 10 + 2]) {
            if (DAT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            DAT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
        else {
          do {
            cVar1 = *pcVar6;
            *(char *)piVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            *(char *)((int)piVar10 + 1) = cVar1;
            piVar10 = (int *)((int)piVar10 + 2);
          } while (cVar1 != '\0');
          in_stack_00000004[local_44[3] * 0x1e + 0x19] = aiStack_f3[iVar4 * 10 + 2];
          in_stack_00000004[local_44[3] * 0x1e + 0xd] = aiStack_f3[iVar4 * 10];
          in_stack_00000004[local_44[3] * 0x1e + 0xe] = aiStack_f3[iVar4 * 10 + 1];
        }
LAB_005429ed:
        local_24 = local_24 + 0x1e;
        local_28 = local_28 + 0x1e;
        local_44[3] = local_44[3] + 1;
        local_10f[iVar4 * 0x28] = '\0';
        local_2c = local_2c + 0x1e;
        local_44[2] = local_44[2] + 4;
      }
    } while (local_44[3] < in_stack_00000004[7]);
  }
  iVar4 = 0;
  if (0 < local_113) {
    iVar9 = 0;
    do {
      if (local_10f[iVar9] == '\0') break;
      iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
      in_stack_00000004[iVar3 * 0x1e + 0x19] = *(int *)((int)aiStack_f3 + iVar9 + 8);
      local_44[iVar3] = iVar4;
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 0x28;
    } while (iVar4 < local_113);
  }
  in_stack_00000004[0x44] = local_44[in_stack_00000004[0x44]];
  in_stack_00000004[0x45] = local_44[in_stack_00000004[0x45]];
  local_1c = in_stack_00000004[7] + -1;
  if (-1 < in_stack_00000004[7] + -1) {
    local_20 = in_stack_00000004 + 8;
    do {
      local_14 = 0;
      if (0 < local_1c) {
        local_44[4] = 0;
        local_18 = local_20 + 7;
        piVar10 = local_20;
        do {
          piVar5 = piVar10 + 0x1e;
          if (*(int *)((int)local_44 + local_44[4] + 4) < *(int *)((int)local_44 + local_44[4])) {
            puVar8 = (uint *)((int)local_44 + local_44[4] + 4);
            uVar2 = *(uint *)((int)local_44 + local_44[4]);
            *(uint *)((int)local_44 + local_44[4]) = *puVar8;
            iVar4 = local_14;
            *puVar8 = uVar2;
            piVar12 = local_20 + iVar4 * 0x1e;
            piVar13 = piVar12 + (uint)bVar14 * -2 + 1;
            local_bc = *piVar12;
            piVar11 = aiStack_b8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1;
            piVar7 = piVar13 + (uint)bVar14 * -2 + 1;
            aiStack_b8[(uint)bVar14 * -2] = *piVar13;
            piVar13 = local_18;
            *piVar11 = *piVar7;
            piVar11[(uint)bVar14 * -2 + 1] = piVar7[(uint)bVar14 * -2 + 1];
            (piVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 (piVar7 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            local_a8 = piVar12[5];
            local_a4 = piVar12[6];
            core_netgame_cpp_CNetGame_FUN_00543e20();
            local_9c = (short)piVar13[1];
            local_98 = piVar12[9];
            local_94 = piVar12[10];
            local_90 = piVar12[0xb];
            local_8c = piVar12[0xc];
            local_88 = piVar12[0xd];
            local_84 = piVar12[0xe];
            local_80 = piVar12[0xf];
            local_7c = piVar12[0x10];
            local_78 = piVar12[0x11];
            local_74 = piVar12[0x12];
            local_70 = piVar10[0x13];
            local_6c = piVar10[0x14];
            local_68 = piVar10[0x15];
            local_64 = piVar10[0x16];
            local_60 = piVar10[0x17];
            local_5c = piVar10[0x18];
            local_58 = piVar10[0x19];
            local_54 = piVar10[0x1a];
            local_50 = piVar10[0x1b];
            local_4c = piVar10[0x1c];
            local_48 = piVar10[0x1d];
            piVar10 = piVar5;
            for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar10;
              piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
            }
            piVar10 = &local_bc;
            piVar13 = piVar5;
            for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar13 = *piVar10;
              piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
          }
          local_14 = local_14 + 1;
          local_44[4] = local_44[4] + 4;
          local_18 = local_18 + 0x1e;
          piVar10 = piVar5;
        } while (local_14 < local_1c);
      }
      local_1c = local_1c + -1;
    } while (-1 < local_1c);
  }
  return 1;
}
