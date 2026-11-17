// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340
// Address: 00530340
// Address Range: [[00530340, 00530599]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  SSimFrame *local_18;
  
  if (((this_ptr->connection_type == CONNECTION_CLIENT) &&
      (this_ptr->network_mode == NET_MODE_PLAYING)) && (-1 < this_ptr->server_player_index)) {
    if (this_ptr->local_player_index < 0) {
      g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
      g_INT_01d1d404 = 0x97c;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,this_ptr->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
LAB_005303a5:
      iVar2 = 0;
      if (0 < g_INT_01d715a8) {
        iVar1 = 0;
        do {
          if (this_ptr->players[this_ptr->local_player_index].sim_frame_index ==
              *(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar1 + -0xc)) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0
                        (this_ptr,(SSimFrame *)
                                  ((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar1 + -0xc));
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00530710(this_ptr);
              iVar1 = 0;
              iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
              if (0 < g_INT_01d715a8) {
                iVar3 = 0;
                local_18 = g_SSimFrame_ARRAY_01d715ac + 1;
                do {
                  if (*(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar3 + -0xc) <
                      iVar2) {
                    g_INT_01d715a8 = g_INT_01d715a8 + -1;
                    memmove
                              ((void *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input +
                                       iVar3 + -0xc),local_18,(g_INT_01d715a8 - iVar1) * 0x6c);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    local_18 = local_18 + 1;
                    iVar3 = iVar3 + 0x6c;
                  }
                } while (iVar1 < g_INT_01d715a8);
              }
              this_ptr->has_pending_sim_frame = 0;
              iVar2 = 0;
              if (g_INT_01d715a8 < 1) {
                return;
              }
              iVar1 = 0;
              while (this_ptr->players[this_ptr->local_player_index].sim_frame_index !=
                     *(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar1 + -0xc)) {
                iVar1 = iVar1 + 0x6c;
                iVar2 = iVar2 + 1;
                if (g_INT_01d715a8 * 0x6c <= iVar1) {
                  return;
                }
              }
              if (iVar2 < 0) {
                return;
              }
              this_ptr->has_pending_sim_frame = 1;
              return;
            }
            break;
          }
          iVar1 = iVar1 + 0x6c;
          iVar2 = iVar2 + 1;
        } while (iVar1 < g_INT_01d715a8 * 0x6c);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      if (this_ptr->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(int)(g_UINT_01d51da0 - g_UINT_01d51db0) * (float)1.52587890625e-05;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)30 < local_20) {
          local_20 = 30.0;
        }
        if ((float)0.10000000000000001 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00530710(this_ptr);
        }
        goto LAB_005303a5;
      }
    }
  }
  return;
}
