// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
// Address: 004ed720
// Address Range: [[004ed720, 004ed971]]
// Convention: unknown
// Signature: void core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  byte *local_18;
  
  if (((param_1->connection_type == CONNECTION_CLIENT) &&
      (param_1->network_mode == NET_MODE_PLAYING)) && (-1 < param_1->server_player_index)) {
    if (param_1->local_player_index < 0) {
      PTR_01cc4800 = "..\\core\\netgame.cpp";
      INT_01cc4804 = 0x97c;
      core_main_c_FUN_004c8440("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(param_1,param_1->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(param_1);
    if (param_1->connection_type == CONNECTION_CLIENT) {
LAB_004ed785:
      iVar2 = 0;
      if (0 < _DAT_01d09c00) {
        iVar1 = 0;
        do {
          if (param_1->players[param_1->local_player_index].sim_frame_index ==
              *(int *)(iVar1 + 0x1d09c04)) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980
                        (param_1,(SSimFrame *)(iVar1 + 0x1d09c04));
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(param_1);
              iVar1 = 0;
              iVar2 = param_1->players[param_1->local_player_index].sim_frame_index;
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
              param_1->has_pending_sim_frame = 0;
              iVar2 = 0;
              if (_DAT_01d09c00 < 1) {
                return;
              }
              iVar1 = 0;
              while (param_1->players[param_1->local_player_index].sim_frame_index !=
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
              param_1->has_pending_sim_frame = 1;
              return;
            }
            break;
          }
          iVar1 = iVar1 + 100;
          iVar2 = iVar2 + 1;
        } while (iVar1 < _DAT_01d09c00 * 100);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(param_1);
      if (param_1->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(_DAT_01cea3f8 - _DAT_01cea408) * (float)1.52587890625e-05;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)30 < local_20) {
          local_20 = 30.0;
        }
        if ((float)0.10000000000000001 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(param_1);
        }
        goto LAB_004ed785;
      }
    }
  }
  return;
}
