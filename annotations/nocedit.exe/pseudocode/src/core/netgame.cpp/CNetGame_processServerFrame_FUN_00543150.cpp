// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 00543594]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_processServerFrame(uint param_1) */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  uint seed_value;
  int iVar3;
  CNetGame *pCVar4;
  CNetGame *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int *dest;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  SNetPlayer *pSVar15;
  uint auStack_6b [22];
  
  bVar14 = 0;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1;
  if (this_ptr->connection_type == 0) {
    seed_value = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)(this_ptr->field7_0x118 + 0x54) = seed_value;
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
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar1,10.0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    iVar1 = 0x7fffffff;
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar7 = *(int *)(pCVar5->players[0].field5_0x38 + 0x10);
        if (iVar7 < iVar1) {
          iVar1 = iVar7;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)(pCVar5->players[0].field5_0x38 + 0x20);
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      iVar7 = 0;
      puVar11 = &DAT_02f9c128;
      do {
        if (*(int *)((int)&g_SimFrameHistory + iVar7) < iVar1) {
          g_SimFrameCount = g_SimFrameCount + -1;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)&g_SimFrameHistory + iVar7),puVar11,
                     (g_SimFrameCount - iVar2) * 100);
        }
        else {
          puVar11 = puVar11 + 0x19;
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 100;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar2 = 0;
    iVar1 = *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10);
    if (0 < g_SimFrameCount) {
      iVar7 = 0;
      do {
        if (iVar1 == *(int *)((int)&g_SimFrameHistory + iVar7)) {
          if (-1 < iVar2) {
            dest = (int *)((int)&g_SimFrameHistory + iVar7);
            goto LAB_005432f5;
          }
          break;
        }
        iVar7 = iVar7 + 100;
        iVar2 = iVar2 + 1;
      } while (iVar7 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    dest = &g_SimFrameHistory + g_SimFrameCount * 0x19;
    g_SimFrameCount = g_SimFrameCount + 1;
    crt_memory_c_memset_FUN_005fde40(dest,0,100);
    *dest = iVar1;
LAB_005432f5:
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    dest[1] = iVar1;
    pCVar5 = (CNetGame *)g_CGamePtr->delta_time_float;
    dest[2] = (int)pCVar5;
    iVar1 = this_ptr->player_count;
    iVar2 = 0;
    pCVar4 = this_ptr;
    piVar8 = dest;
    if (0 < iVar1) {
      do {
        pcVar9 = pCVar4->players[0].field5_0x38 + 0x14;
        piVar12 = piVar8 + 3;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar12 = *(int *)pcVar9;
          pcVar9 = pcVar9 + (uint)bVar14 * -8 + 4;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
        pCVar4 = pCVar5;
        piVar8 = piVar8 + 0xb;
      } while (iVar2 < this_ptr->player_count);
      iVar1 = 0;
    }
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800
              (iVar2,pCVar5,this_ptr,iVar1,this_ptr,dest);
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      pSVar15 = this_ptr->players;
      do {
        if (iVar1 != this_ptr->local_player_index) {
          iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10) -
                  *(int *)(pSVar15->field5_0x38 + 0x10);
          if (iVar2 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 0x93b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          iVar7 = *(int *)(pSVar15->field5_0x38 + 0x10);
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar6 = 0;
            if (0 < g_SimFrameCount) {
              iVar3 = 0;
              do {
                if (iVar7 == *(int *)((int)&g_SimFrameHistory + iVar3)) goto LAB_005434de;
                iVar3 = iVar3 + 100;
                iVar6 = iVar6 + 1;
              } while (iVar3 < g_SimFrameCount * 100);
            }
            iVar6 = -1;
LAB_005434de:
            if (iVar6 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 0x94d;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            puVar11 = &g_SimFrameHistory + iVar6 * 0x19;
            iVar6 = 0;
            if (0 < this_ptr->player_count) {
              do {
                puVar10 = puVar11 + 3;
                puVar13 = auStack_6b + iVar6 * 0xb;
                for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar13 = *puVar10;
                  puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar11 = puVar11 + 0xb;
              } while (iVar6 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_005411c0();
          }
        }
        pSVar15 = pSVar15 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
  }
  return;
}
