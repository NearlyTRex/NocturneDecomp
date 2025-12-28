// Name: core_netgame.cpp_CNetGame_FUN_0053fd00
// Address: 0053fd00
// Address Range: [[0053fd00, 005401d2]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame* param_1, uint
   param_2) */

void __cdecl core_netgame_cpp_CNetGame_FUN_0053fd00(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000008;
  float fVar5;
  float local_20;
  int local_14;
  
  if (in_stack_00000008 != 0) {
    if (this_ptr->connection_type == 2) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iVar1 = iVar1 / 0x12;
      iVar2 = iVar1 - g_LastPingTime;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x20000 < iVar2) {
        iVar2 = 0x20000;
      }
      uVar3 = g_CurrentGameTime + iVar2;
      uVar4 = uVar3 - 0x1e0000;
      g_LastPingTime = iVar1;
      g_CurrentGameTime = uVar3;
      if (*(int *)this_ptr->padding < 0) {
LAB_0053fe74:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
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
          fVar5 = (float)(int)(g_CurrentGameTime - uVar3) * (float)1.52587890625e-05;
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          g_LastPingTime = iVar1;
          if (((float)30 < fVar5) || (0x40400000 < (int)fVar5)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_0053fe74;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,fVar5 * 1000f,3000.0);
          while( true ) {
            fVar5 = (float)(int)(g_CurrentGameTime - uVar4) * (float)1.52587890625e-05;
            if (fVar5 < 0.0) {
              fVar5 = 0.0;
            }
            if ((float)30 < fVar5) {
              fVar5 = 30.0;
            }
            if ((float)0.10000000000000001 <= fVar5) break;
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
          }
          core_netgame_cpp_CNetGame_FUN_00543930();
          uVar4 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (-1 < *(int *)this_ptr->padding);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
    if (this_ptr->connection_type == 1) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting...");
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
      uVar4 = g_CurrentGameTime - 0x1e0000;
      g_LastPingTime = iVar1;
      if (this_ptr->player_count < 2) {
LAB_00540097:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
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
          fVar5 = (float)(int)(g_CurrentGameTime - local_14) * (float)1.52587890625e-05;
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          g_LastPingTime = iVar1;
          if (((float)30 < fVar5) || (0x40a00000 < (int)fVar5)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_00540097;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,fVar5 * 1000f,5000.0);
          while( true ) {
            local_20 = (float)(int)(g_CurrentGameTime - uVar4) * (float)1.52587890625e-05;
            if (local_20 < 0.0) {
              local_20 = 0.0;
            }
            if ((float)30 < local_20) {
              local_20 = 30.0;
            }
            if ((float)0.10000000000000001 <= local_20) break;
            iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar1 = iVar2 / 0x12 - g_LastPingTime;
            if (iVar1 < 0) {
              iVar1 = 0;
            }
            else if (0x20000 < iVar1) {
              iVar1 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar1;
            g_LastPingTime = iVar2 / 0x12;
          }
          iVar1 = 0;
          if (0 < this_ptr->player_count) {
            do {
              if (iVar1 != this_ptr->local_player_index) {
                core_netgame_cpp_CNetGame_FUN_00543930();
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < this_ptr->player_count);
          }
          uVar4 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (1 < this_ptr->player_count);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
  }
  this_ptr->network_mode = 0;
  this_ptr->local_player_index = -1;
  this_ptr->padding[0] = -1;
  this_ptr->padding[1] = -1;
  this_ptr->padding[2] = -1;
  this_ptr->padding[3] = -1;
  this_ptr->field7_0x118[0] = '\0';
  this_ptr->connection_type = 0;
  g_ChatHistoryCount = 0;
  DAT_02f98ad0 = 0;
  g_RemoteSyncStage = 0;
  this_ptr->player_count = 0;
  DAT_02f7c8c4 = 0;
  this_ptr->field7_0x118[0x50] = '\0';
  this_ptr->field7_0x118[0x51] = '\0';
  this_ptr->field7_0x118[0x52] = '\0';
  this_ptr->field7_0x118[0x53] = '\0';
  return;
}
