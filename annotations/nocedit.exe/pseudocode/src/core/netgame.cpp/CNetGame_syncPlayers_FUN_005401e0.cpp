// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
// Address Range: [[005401e0, 0054054a]]
// Convention: __cdecl
// Signature: int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  BADSPACEBASE *in_ESP;
  float afStack_18c [62];
  char local_94 [4];
  char acStack_90 [108];
  int local_24;
  SNetPlayer *local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  if (sync_stage < 1) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x337;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - don't use 0!");
  }
  if (this_ptr->connection_type == 0) {
    return 1;
  }
  this_ptr->network_mode = 2;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar2 / 0x12;
  *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 4) = sync_stage;
  if (this_ptr->connection_type == 1) {
    local_24 = g_CurrentGameTime - 0x1e0000;
    local_20 = this_ptr->players;
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe70,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe6c,0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Waiting on:",0,0x16);
      local_18 = 1.4013e-45;
      local_14 = 0x21;
      iVar2 = 0;
      pCVar4 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
            local_18 = 0.0;
            engine_2d_c_drawText_FUN_00401fd0((char *)(iVar2 * 0x78 + local_1c),0,local_14);
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)afStack_18c,"%d");
            engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe6c,200,(int)local_18);
            local_14 = local_14 + 0xb;
          }
          iVar2 = iVar2 + 1;
          pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
        } while (iVar2 < this_ptr->player_count);
      }
      fVar1 = local_18;
      if (local_18 != 0.0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      afStack_18c[0] = (float)(int)(g_CurrentGameTime - (int)local_18) * (float)1.52587890625e-05;
      if (afStack_18c[0] < 0.0) {
        afStack_18c[0] = fVar1;
      }
      if ((float)30 < afStack_18c[0]) {
        afStack_18c[0] = 30.0;
      }
      if ((float)0.10000000000000001 < afStack_18c[0]) {
        local_18 = (float)g_CurrentGameTime;
        local_24 = 9;
        local_20 = (SNetPlayer *)CONCAT31 /* combine 2-byte values */((int3)sync_stage,8);
        local_1c._0_1_ = (byte)((uint)sync_stage >> 0x18);
        iVar2 = 0;
        pCVar4 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_005411c0();
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
          } while (iVar2 < this_ptr->player_count);
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else if (this_ptr->connection_type == 2) {
    if (3 < sync_stage) {
      return 1;
    }
    while (g_RemoteSyncStage < sync_stage) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_90,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(local_94,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x3c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
