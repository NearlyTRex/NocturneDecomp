// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
// Address: 004ed720
// Address Range: [[004ed720, 004ed971]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  byte *local_18;
  
  if (((this_ptr->connection_type == CONNECTION_CLIENT) &&
      (this_ptr->network_mode == NET_MODE_PLAYING)) && (-1 < this_ptr->server_player_index)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2428;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(this_ptr,this_ptr->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
LAB_004ed785:
      iVar2 = 0;
      if (0 < _DAT_01d09c00) {
        iVar1 = 0;
        do {
          if (this_ptr->players[this_ptr->local_player_index].sim_frame_index ==
              *(int *)(iVar1 + 0x1d09c04)) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980
                        (this_ptr,(SSimFrame *)(iVar1 + 0x1d09c04));
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(this_ptr);
              iVar1 = 0;
              iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
              if (0 < _DAT_01d09c00) {
                iVar3 = 0;
                local_18 = &DAT_01d09c68;
                do {
                  if (*(int *)(iVar3 + 0x1d09c04) < iVar2) {
                    _DAT_01d09c00 = _DAT_01d09c00 + -1;
                    memmove
                              ((void *)(iVar3 + 0x1d09c04),local_18,(_DAT_01d09c00 - iVar1) * 100);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    local_18 = local_18 + 100;
                    iVar3 = iVar3 + 100;
                  }
                } while (iVar1 < _DAT_01d09c00);
              }
              this_ptr->has_pending_sim_frame = 0;
              iVar2 = 0;
              if (_DAT_01d09c00 < 1) {
                return;
              }
              iVar1 = 0;
              while (this_ptr->players[this_ptr->local_player_index].sim_frame_index !=
                     *(int *)(iVar1 + 0x1d09c04)) {
                iVar1 = iVar1 + 100;
                iVar2 = iVar2 + 1;
                if (_DAT_01d09c00 * 100 <= iVar1) {
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
          iVar1 = iVar1 + 100;
          iVar2 = iVar2 + 1;
        } while (iVar1 < _DAT_01d09c00 * 100);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
      if (this_ptr->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(_DAT_01cea3f8 - _DAT_01cea408) * (float)1.52587890625e-05;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)30 < local_20) {
          local_20 = 30.0;
        }
        if ((float)0.10000000000000001 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(this_ptr);
        }
        goto LAB_004ed785;
      }
    }
  }
  return;
}
