// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
// Address Range: [[005401e0, 0054054a]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  float local_198;
  char local_194 [256];
  char local_94 [100];
  uint local_30;
  byte local_2c;
  int local_2b;
  uint local_24;
  SNetPlayer *local_20;
  float local_1c;
  int local_18;
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
  *(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 4) = sync_stage;
  if (this_ptr->connection_type == 1) {
    local_24 = g_CurrentGameTime - 0x1e0000;
    local_20 = this_ptr->players;
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_194,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(local_194,0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Waiting on:",0,0x16);
      local_1c = 1.4013e-45;
      local_18 = 0x21;
      iVar2 = 0;
      pCVar4 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          if (*(int *)(pCVar4->players[0].unk1 + 4) < sync_stage) {
            local_1c = 0.0;
            engine_2d_c_drawText_FUN_00401fd0(local_20[iVar2].name,0,local_18);
            _sprintf
                      (local_194,"%d",*(uint *)(pCVar4->players[0].unk1 + 4));
            engine_2d_c_drawText_FUN_00401fd0(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar2 = iVar2 + 1;
          pCVar4 = (CNetGame *)(pCVar4->players[0].unk1 + 0x20);
        } while (iVar2 < this_ptr->player_count);
      }
      fVar1 = local_1c;
      if (local_1c != 0.0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      local_14 = g_CurrentGameTime - local_24;
      local_198 = (float)local_14 * (float)1.52587890625e-05;
      if (local_198 < 0.0) {
        local_198 = fVar1;
      }
      if ((float)30 < local_198) {
        local_198 = 30.0;
      }
      if ((float)0.10000000000000001 < local_198) {
        local_24 = g_CurrentGameTime;
        local_2c = 8;
        local_30 = 9;
        local_2b = sync_stage;
        iVar2 = 0;
        pCVar4 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (*(int *)(pCVar4->players[0].unk1 + 4) < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,iVar2);
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar4 = (CNetGame *)(pCVar4->players[0].unk1 + 0x20);
          } while (iVar2 < this_ptr->player_count);
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
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
      _sprintf(local_94,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(local_94,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
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
