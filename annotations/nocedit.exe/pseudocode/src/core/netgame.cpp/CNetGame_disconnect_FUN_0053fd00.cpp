// Name: core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00
// Address: 0053fd00
// Address Range: [[0053fd00, 005401d2]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame *this_ptr,int perform_handshake)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame *this_ptr,int perform_handshake)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  uint uVar5;
  uint uVar3;
  uint uVar6;
  uint uVar4;
  SNetworkAddr *dest_addr;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (perform_handshake != 0) {
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting from server...");
      iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iVar3 = iVar3 / 0x12;
      iVar4 = iVar3 - g_LastPingTime;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x20000 < iVar4) {
        iVar4 = 0x20000;
      }
      uVar5 = g_CurrentGameTime + iVar4;
      uVar6 = uVar5 - 0x1e0000;
      g_LastPingTime = iVar3;
      g_CurrentGameTime = uVar5;
      if (this_ptr->server_player_index < 0) {
LAB_0053fe74:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          iVar3 = iVar3 / 0x12;
          iVar4 = iVar3 - g_LastPingTime;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0x20000 < iVar4) {
            iVar4 = 0x20000;
          }
          g_CurrentGameTime = g_CurrentGameTime + iVar4;
          local_24 = (float)(int)(g_CurrentGameTime - uVar5) * (float)1.52587890625e-05;
          if (local_24 < 0.0) {
            local_24 = 0.0;
          }
          g_LastPingTime = iVar3;
          if (((float)30 < local_24) || (0x40400000 < (int)local_24)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_0053fe74;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,local_24 * 1000.0f,3000.0);
          while( true ) {
            local_30 = (float)(int)(g_CurrentGameTime - uVar6) * (float)1.52587890625e-05;
            if (local_30 < 0.0) {
              local_30 = 0.0;
            }
            if ((float)30 < local_30) {
              local_30 = 30.0;
            }
            if ((float)0.10000000000000001 <= local_30) break;
            iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar4 = iVar3 / 0x12 - g_LastPingTime;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (0x20000 < iVar4) {
              iVar4 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar4;
            g_LastPingTime = iVar3 / 0x12;
          }
          core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930
                    (this_ptr,&this_ptr->players[this_ptr->server_player_index].addr,1);
          uVar6 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (-1 < this_ptr->server_player_index);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iVar3 = iVar1 / 0x12;
      iVar2 = iVar3 - g_LastPingTime;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x20000 < iVar2) {
        iVar2 = 0x20000;
      }
      uVar3 = g_CurrentGameTime + iVar2;
      uVar4 = uVar3 - 0x1e0000;
      g_LastPingTime = iVar3;
      g_CurrentGameTime = uVar3;
      if (this_ptr->player_count < 2) {
LAB_00540097:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          iVar3 = iVar3 / 0x12;
          iVar4 = iVar3 - g_LastPingTime;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0x20000 < iVar4) {
            iVar4 = 0x20000;
          }
          g_CurrentGameTime = g_CurrentGameTime + iVar4;
          local_2c = (float)(int)(g_CurrentGameTime - uVar3) * (float)1.52587890625e-05;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          g_LastPingTime = iVar3;
          if (((float)30 < local_2c) || (0x40a00000 < (int)local_2c)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_00540097;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,local_2c * 1000.0f,5000.0);
          while( true ) {
            local_28 = (float)(int)(g_CurrentGameTime - uVar4) * (float)1.52587890625e-05;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)30 < local_28) {
              local_28 = 30.0;
            }
            if ((float)0.10000000000000001 <= local_28) break;
            iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar3 = iVar4 / 0x12 - g_LastPingTime;
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0x20000 < iVar3) {
              iVar3 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar3;
            g_LastPingTime = iVar4 / 0x12;
          }
          iVar3 = 0;
          if (0 < this_ptr->player_count) {
            dest_addr = &this_ptr->players[0].addr;
            do {
              if (iVar3 != this_ptr->local_player_index) {
                core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(this_ptr,dest_addr,1);
              }
              iVar3 = iVar3 + 1;
              dest_addr = dest_addr + 0xf;
            } while (iVar3 < this_ptr->player_count);
          }
          uVar4 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (1 < this_ptr->player_count);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
  }
  this_ptr->network_mode = NET_MODE_DISCONNECTED;
  this_ptr->local_player_index = -1;
  this_ptr->server_player_index = -1;
  this_ptr->mission_name[0] = '\0';
  this_ptr->connection_type = CONNECTION_NONE;
  g_ChatHistoryCount = 0;
  g_ChatOutCount = 0;
  g_RemoteSyncStage = 0;
  this_ptr->player_count = 0;
  INT_02f7c8c4 = 0;
  this_ptr->has_pending_sim_frame = 0;
  return;
}
