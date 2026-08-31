// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
// MANUAL RECONSTRUCTION
// Address Range: [[005401e0, 0054054a]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

{
  int iVar1;
  int iVar2;
  float local_198;
  char local_194 [256];
  char local_94 [100];
  SNetPacket_Simple local_30;
  uint local_24;
  int local_1c;
  int local_18;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  if (sync_stage < 1) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 823;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - don't use 0!");
  }
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return 1;
  }
  this_ptr->network_mode = NET_MODE_SYNCING;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1 / 0x12;
  this_ptr->players[this_ptr->local_player_index].local_sync_stage = sync_stage;
  if (this_ptr->connection_type == CONNECTION_HOST) {
    local_24 = g_CurrentGameTime - 0x1e0000;
    while( true ) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_194,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(local_194,0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Waiting on:",0,0x16);
      local_1c = 1;
      local_18 = 0x21;
      iVar1 = 0;
      if (0 < this_ptr->player_count) {
        do {
          if (this_ptr->players[iVar1].local_sync_stage < sync_stage) {
            local_1c = 0;
            engine_2d_c_drawText_FUN_00401fd0(this_ptr->players[iVar1].name,0,local_18);
            _sprintf
                      (local_194,"%d",this_ptr->players[iVar1].local_sync_stage);
            engine_2d_c_drawText_FUN_00401fd0(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < this_ptr->player_count);
      }
      if (local_1c != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      local_198 = (float)(int)(g_CurrentGameTime - local_24) * (float)1.52587890625e-05;
      if (local_198 < 0.0) {
        local_198 = 0.0f;
      }
      if ((float)30 < local_198) {
        local_198 = 30.0;
      }
      if ((float)0.10000000000000001 < local_198) {
        local_24 = g_CurrentGameTime;
        local_30.header.type = PACKET_SYNC_STAGE_REQ;
        local_30.header.size = sizeof(SNetPacket_Simple);
        local_30.value = sync_stage;
        iVar1 = 0;
        if (0 < this_ptr->player_count) {
          do {
            if (this_ptr->players[iVar1].local_sync_stage < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,iVar1,&local_30.header);
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar1,2.0);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < this_ptr->player_count);
        }
      }
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else if (this_ptr->connection_type == CONNECTION_CLIENT) {
    if (3 < sync_stage) {
      return 1;
    }
    while (g_RemoteSyncStage < sync_stage) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      _sprintf(local_94,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(local_94,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 960;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
