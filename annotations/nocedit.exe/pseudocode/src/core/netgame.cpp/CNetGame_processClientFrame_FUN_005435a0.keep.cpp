// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// Address: 005435a0
// MANUAL RECONSTRUCTION
// Address Range: [[005435a0, 005437f1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr)

{
  int iVar2;
  int iVar4;
  int iVar5;
  float local_20;

  if (((this_ptr->connection_type == CONNECTION_CLIENT) &&
      (this_ptr->network_mode == NET_MODE_PLAYING)) && (-1 < this_ptr->server_player_index)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x97c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,this_ptr->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
LAB_00543605:
      iVar2 = 0;
      if (0 < g_SimFrameCount) {
        do {
          if (this_ptr->players[this_ptr->local_player_index].sim_frame_index ==
              g_SimFrameHistory[iVar2].sequence_number) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800
                        (this_ptr,&g_SimFrameHistory[iVar2]);
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(this_ptr);
              iVar5 = 0;
              iVar4 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
              if (0 < g_SimFrameCount) {
                do {
                  if (g_SimFrameHistory[iVar5].sequence_number < iVar4) {
                    g_SimFrameCount = g_SimFrameCount + -1;
                    memmove(&g_SimFrameHistory[iVar5],&g_SimFrameHistory[iVar5 + 1],
                            (g_SimFrameCount - iVar5) * 100);
                  }
                  else {
                    iVar5 = iVar5 + 1;
                  }
                } while (iVar5 < g_SimFrameCount);
              }
              this_ptr->has_pending_sim_frame = 0;
              iVar4 = 0;
              if (g_SimFrameCount < 1) {
                return;
              }
              while (this_ptr->players[this_ptr->local_player_index].sim_frame_index !=
                     g_SimFrameHistory[iVar4].sequence_number) {
                iVar4 = iVar4 + 1;
                if (g_SimFrameCount <= iVar4) {
                  return;
                }
              }
              if (iVar4 < 0) {
                return;
              }
              this_ptr->has_pending_sim_frame = 1;
              return;
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < g_SimFrameCount);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      if (this_ptr->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(int)(g_CurrentGameTime - UINT_02f7c8c8) * (float)1.52587890625e-05;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)30 < local_20) {
          local_20 = 30.0;
        }
        if ((float)0.10000000000000001 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(this_ptr);
        }
        goto LAB_00543605;
      }
    }
  }
  return;
}
