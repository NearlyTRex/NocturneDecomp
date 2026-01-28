// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 00543594]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_processServerFrame(uint param_1) */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

{
  SNetPlayer *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint seed_value;
  CNetGame *pCVar5;
  CNetGame *pCVar6;
  int *dest;
  int *piVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  uint local_7f [22];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  SNetPlayer *local_14;
  
  bVar13 = 0;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar2;
  if (this_ptr->connection_type == 0) {
    seed_value = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)(this_ptr->unk + 0x54) = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
    return;
  }
  if ((this_ptr->connection_type == 1) && (this_ptr->network_mode == 3)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != *(int *)this_ptr->padding) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    local_18 = 0x7fffffff;
    iVar2 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar3 = *(int *)(pCVar6->players[0].unk1 + 0x10);
        if (iVar3 < local_18) {
          local_18 = iVar3;
        }
        iVar2 = iVar2 + 1;
        pCVar6 = (CNetGame *)(pCVar6->players[0].unk1 + 0x20);
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      iVar3 = 0;
      puVar10 = &DAT_02f9c128;
      do {
        if (*(int *)((int)&g_SimFrameHistory + iVar3) < local_18) {
          g_SimFrameCount = g_SimFrameCount + -1;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)&g_SimFrameHistory + iVar3),puVar10,
                     (g_SimFrameCount - iVar2) * 100);
        }
        else {
          puVar10 = puVar10 + 0x19;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 100;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar3 = 0;
    iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x10);
    if (0 < g_SimFrameCount) {
      iVar4 = 0;
      do {
        if (iVar2 == *(int *)((int)&g_SimFrameHistory + iVar4)) {
          if (-1 < iVar3) {
            dest = (int *)((int)&g_SimFrameHistory + iVar4);
            goto LAB_005432f5;
          }
          break;
        }
        iVar4 = iVar4 + 100;
        iVar3 = iVar3 + 1;
      } while (iVar4 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    dest = &g_SimFrameHistory + g_SimFrameCount * 0x19;
    g_SimFrameCount = g_SimFrameCount + 1;
    crt_memory_c_memset_FUN_005fde40(dest,0,100);
    *dest = iVar2;
LAB_005432f5:
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    dest[1] = iVar2;
    pCVar6 = (CNetGame *)g_CGamePtr->delta_time_float;
    dest[2] = (int)pCVar6;
    iVar2 = this_ptr->player_count;
    iVar3 = 0;
    pCVar5 = this_ptr;
    piVar7 = dest;
    if (0 < iVar2) {
      do {
        pcVar8 = pCVar5->players[0].unk1 + 0x14;
        piVar11 = piVar7 + 3;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar11 = *(int *)pcVar8;
          pcVar8 = pcVar8 + (uint)bVar13 * -8 + 4;
          piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar6 = (CNetGame *)(pCVar5->players[0].unk1 + 0x20);
        pCVar5 = pCVar6;
        piVar7 = piVar7 + 0xb;
      } while (iVar3 < this_ptr->player_count);
      iVar2 = 0;
    }
    local_1c = dest;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800
              (iVar3,pCVar6,this_ptr,iVar2,this_ptr,dest);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        pSVar1 = local_14;
        if (local_24 != this_ptr->local_player_index) {
          iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x10) -
                  *(int *)(local_14->unk1 + 0x10);
          if (iVar2 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 0x93b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_20 = *(int *)(pSVar1->unk1 + 0x10);
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = 0;
            if (0 < g_SimFrameCount) {
              iVar4 = 0;
              do {
                if (local_20 == *(int *)((int)&g_SimFrameHistory + iVar4)) goto LAB_005434de;
                iVar4 = iVar4 + 100;
                iVar3 = iVar3 + 1;
              } while (iVar4 < g_SimFrameCount * 100);
            }
            iVar3 = -1;
LAB_005434de:
            if (iVar3 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 0x94d;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            puVar10 = &g_SimFrameHistory + iVar3 * 0x19;
            iVar3 = 0;
            if (0 < this_ptr->player_count) {
              do {
                puVar9 = puVar10 + 3;
                puVar12 = local_7f + iVar3 * 0xb;
                for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
                }
                iVar3 = iVar3 + 1;
                puVar10 = puVar10 + 0xb;
              } while (iVar3 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_005411c0();
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->player_count);
    }
  }
  return;
}
