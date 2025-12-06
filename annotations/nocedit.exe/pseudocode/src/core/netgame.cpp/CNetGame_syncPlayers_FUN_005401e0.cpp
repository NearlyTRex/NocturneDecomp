// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
// Address Range: [[005401e0, 0054054a]]
// Convention: __cdecl
// Signature: int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

{
  bool bVar1;
  CNetGame *this_ptr_00;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  CNetGame *pCVar4;
  BADSPACEBASE *in_ESP;
  float fStack_174;
  char acStack_84 [4];
  char acStack_80 [104];
  int local_18;
  SNetPlayer *local_14;
  
  this_ptr_00 = this_ptr;
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
    local_18 = g_CurrentGameTime - 0x1e0000;
    local_14 = this_ptr->players;
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe7c,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Waiting on:",0,0x16);
      bVar1 = true;
      this_ptr = (CNetGame *)0x21;
      iVar2 = 0;
      pCVar4 = this_ptr_00;
      if (0 < this_ptr_00->player_count) {
        do {
          if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
            bVar1 = false;
            engine_2d_c_drawText_FUN_00401fd0((char *)(iVar2 * 0x78 + unaff_EBX),0,(int)this_ptr);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (&stack0xfffffe80,"%d",
                       *(uint *)(pCVar4->players[0].field5_0x38 + 4));
            engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe84,200,0);
            this_ptr = (CNetGame *)(this_ptr->network_data + 3);
          }
          iVar2 = iVar2 + 1;
          pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
        } while (iVar2 < this_ptr_00->player_count);
      }
      if (bVar1) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr_00);
      fStack_174 = (float)(int)g_CurrentGameTime * (float)1.52587890625e-05;
      if (fStack_174 < 0.0) {
        fStack_174 = 0.0;
      }
      if ((float)30 < fStack_174) {
        fStack_174 = 30.0;
      }
      if ((float)0.10000000000000001 < fStack_174) {
        unaff_EBX = CONCAT31 /* combine 2-byte values */((int3)((uint)unaff_EBX >> 8),(char)((uint)sync_stage >> 0x18));
        iVar2 = 0;
        pCVar4 = this_ptr_00;
        if (0 < this_ptr_00->player_count) {
          do {
            if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_005411c0();
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr_00,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
          } while (iVar2 < this_ptr_00->player_count);
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
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
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_84,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(acStack_80,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
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
