// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_applyNewGameSettings(uint param_1,
   uint param_2) */

uint core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  uint auStackY_2088 [1988];
  uint local_163;
  char acStack_15f [80];
  int local_10f;
  char acStack_10b [20];
  int local_f7 [2];
  int aiStack_ef [13];
  uint uStack_b8;
  uint auStack_b4 [4];
  uint local_a4;
  uint local_a0;
  ushort local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int aiStack_40 [6];
  int *local_28;
  uint *local_24;
  char *local_20;
  uint *local_1c;
  int local_18;
  uint *local_14;
  
  bVar15 = 0;
  if ((*in_stack_00000004 != 2) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar8 = in_stack_00000008;
  puVar9 = (uint *)&stack0xfffffe94;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar15 * -2 + 1;
  }
  *(byte *)puVar9 = *(byte *)puVar8;
  iVar5 = -1;
  in_stack_00000008[0x5b] = local_163;
  aiStack_40[5] = -1;
  iVar10 = 0;
  if (0 < local_10f) {
    piVar3 = local_f7;
    do {
      if (((short)piVar3[1] == *(short *)(in_stack_00000008 + in_stack_00000008[0x45] * 0x1e + 0x10)
          ) && (*piVar3 == in_stack_00000008[in_stack_00000008[0x45] * 0x1e + 0xf])) {
        iVar5 = iVar10;
      }
      if (((short)piVar3[1] == *(short *)(in_stack_00000008 + in_stack_00000008[0x44] * 0x1e + 0x10)
          ) && (*piVar3 == in_stack_00000008[in_stack_00000008[0x44] * 0x1e + 0xf])) {
        aiStack_40[5] = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar10 < local_10f);
  }
  if ((aiStack_40[5] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar6 = acStack_15f;
  pcVar11 = (char *)(in_stack_00000008 + 0x46);
  do {
    cVar1 = *pcVar6;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  aiStack_40[3] = 0;
  if (0 < (int)in_stack_00000008[7]) {
    aiStack_40[2] = 0;
    local_20 = (char *)(in_stack_00000008 + 8);
    local_28 = in_stack_00000008 + 0xf;
    local_24 = in_stack_00000008;
    do {
      iVar5 = 0;
      if (0 < local_10f) {
        piVar3 = local_f7;
        do {
          if (((short)piVar3[1] == (short)local_28[1]) && (*piVar3 == *local_28)) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar5 < local_10f);
      }
      if (iVar5 == local_10f) {
        if (aiStack_40[3] == in_stack_00000008[0x45]) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x811;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00();
      }
      else {
        *(int *)((int)aiStack_40 + aiStack_40[2]) = iVar5;
        pcVar11 = acStack_10b + iVar5 * 0x28;
        pcVar6 = local_20;
        if (aiStack_40[3] == in_stack_00000008[0x45]) {
          DAT_00680a04 = aiStack_40[3] ^ in_stack_00000008[0x45];
          iVar10 = crt_string_c_strcmp_FUN_005fef20(local_20,pcVar11);
          if (iVar10 != 0) {
            DAT_00680a04 = 1;
          }
          if (local_24[0x19] == aiStack_ef[iVar5 * 10 + 2]) {
            if (DAT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            DAT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
        else {
          do {
            cVar1 = *pcVar11;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          in_stack_00000008[aiStack_40[3] * 0x1e + 0x19] = aiStack_ef[iVar5 * 10 + 2];
          in_stack_00000008[aiStack_40[3] * 0x1e + 0xd] = aiStack_ef[iVar5 * 10];
          in_stack_00000008[aiStack_40[3] * 0x1e + 0xe] = aiStack_ef[iVar5 * 10 + 1];
        }
LAB_005429ed:
        local_20 = local_20 + 0x78;
        local_24 = local_24 + 0x1e;
        aiStack_40[3] = aiStack_40[3] + 1;
        acStack_10b[iVar5 * 0x28] = '\0';
        local_28 = local_28 + 0x1e;
        aiStack_40[2] = aiStack_40[2] + 4;
      }
    } while (aiStack_40[3] < (int)in_stack_00000008[7]);
  }
  iVar5 = 0;
  if (0 < local_10f) {
    iVar10 = 0;
    do {
      if (acStack_10b[iVar10] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
      in_stack_00000008[iVar4 * 0x1e + 0x19] = *(uint *)((int)aiStack_ef + iVar10 + 8);
      aiStack_40[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar5 < local_10f);
  }
  in_stack_00000008[0x44] = aiStack_40[in_stack_00000008[0x44]];
  in_stack_00000008[0x45] = aiStack_40[in_stack_00000008[0x45]];
  local_18 = in_stack_00000008[7] + -1;
  if (-1 < in_stack_00000008[7] + -1) {
    local_1c = in_stack_00000008 + 8;
    do {
      iVar5 = 0;
      if (0 < local_18) {
        aiStack_40[4] = 0;
        local_14 = local_1c + 7;
        puVar8 = local_1c;
        do {
          puVar9 = puVar8 + 0x1e;
          if (*(int *)((int)aiStack_40 + aiStack_40[4] + 4) <
              *(int *)((int)aiStack_40 + aiStack_40[4])) {
            puVar14 = (uint *)((int)aiStack_40 + aiStack_40[4] + 4);
            uVar2 = *(uint *)((int)aiStack_40 + aiStack_40[4]);
            *(uint *)((int)aiStack_40 + aiStack_40[4]) = *puVar14;
            *puVar14 = uVar2;
            puVar13 = local_1c + iVar5 * 0x1e;
            puVar14 = puVar13 + (uint)bVar15 * -2 + 1;
            uStack_b8 = *puVar13;
            puVar12 = auStack_b4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1;
            puVar7 = puVar14 + (uint)bVar15 * -2 + 1;
            auStack_b4[(uint)bVar15 * -2] = *puVar14;
            puVar14 = local_14;
            *puVar12 = *puVar7;
            puVar12[(uint)bVar15 * -2 + 1] = puVar7[(uint)bVar15 * -2 + 1];
            (puVar12 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (puVar7 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
            local_a4 = puVar13[5];
            local_a0 = puVar13[6];
            core_netgame_cpp_CNetGame_FUN_00543e20();
            local_94 = *(ushort *)(puVar14 + 1);
            local_90 = puVar13[9];
            local_8c = puVar13[10];
            local_88 = puVar13[0xb];
            local_84 = puVar13[0xc];
            local_80 = puVar13[0xd];
            local_7c = puVar13[0xe];
            local_78 = puVar13[0xf];
            local_74 = puVar13[0x10];
            local_70 = puVar13[0x11];
            local_6c = puVar13[0x12];
            local_68 = puVar8[0x13];
            local_64 = puVar8[0x14];
            local_60 = puVar8[0x15];
            local_5c = puVar8[0x16];
            local_58 = puVar8[0x17];
            local_54 = puVar8[0x18];
            local_50 = puVar8[0x19];
            local_4c = puVar8[0x1a];
            local_48 = puVar8[0x1b];
            local_44 = puVar8[0x1c];
            aiStack_40[0] = puVar8[0x1d];
            puVar8 = puVar9;
            for (iVar10 = 0x1e; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar13 = *puVar8;
              puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
              puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            }
            puVar8 = auStack_b4;
            puVar14 = puVar9;
            for (iVar10 = 0x1e; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
              puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          aiStack_40[4] = aiStack_40[4] + 4;
          local_14 = local_14 + 0x1e;
          puVar8 = puVar9;
        } while (iVar5 < local_18);
      }
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return 1;
}
