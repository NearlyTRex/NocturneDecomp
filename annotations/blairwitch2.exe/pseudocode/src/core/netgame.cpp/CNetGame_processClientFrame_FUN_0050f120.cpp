// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_0050f120
// Address: 0050f120
// Address Range: [[0050f120, 0050f367]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(CNetGame *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_20;
  byte *local_18;
  
  if (((this_ptr->connection_type == CONNECTION_CLIENT) &&
      (this_ptr->network_mode == NET_MODE_PLAYING)) && (-1 < this_ptr->server_player_index)) {
    if (this_ptr->local_player_index < 0) {
      _DAT_01d046a0 = "..\\core\\netgame.cpp";
      _DAT_01d046a4 = 0x97c;
      core_main_c_FUN_004e4500("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(this_ptr,this_ptr->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
LAB_0050f185:
      iVar4 = 0;
      uVar5 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
      if (0 < _DAT_01d54640) {
        iVar2 = 0;
        do {
          uVar1 = *(uint *)(iVar2 + 0x1d54644);
          if (uVar5 == uVar1) {
            if (-1 < iVar4) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370
                        (this_ptr,(SSimFrame *)(iVar2 + 0x1d54644));
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0(this_ptr);
              uVar5 = uVar5 ^ uVar1;
              iVar4 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
              if (0 < _DAT_01d54640) {
                iVar2 = 0;
                local_18 = &DAT_01d546b8;
                do {
                  if (*(int *)(iVar2 + 0x1d54644) < iVar4) {
                    _DAT_01d54640 = _DAT_01d54640 + -1;
                    memmove
                              ((void *)(iVar2 + 0x1d54644),local_18,(_DAT_01d54640 - uVar5) * 0x74);
                  }
                  else {
                    uVar5 = uVar5 + 1;
                    local_18 = local_18 + 0x74;
                    iVar2 = iVar2 + 0x74;
                  }
                } while ((int)uVar5 < _DAT_01d54640);
              }
              iVar4 = _DAT_01d54640;
              this_ptr->has_pending_sim_frame = 0;
              iVar2 = 0;
              if (iVar4 < 1) {
                return;
              }
              iVar3 = 0;
              while (this_ptr->players[this_ptr->local_player_index].sim_frame_index !=
                     *(int *)(iVar3 + 0x1d54644)) {
                iVar3 = iVar3 + 0x74;
                iVar2 = iVar2 + 1;
                if (iVar4 * 0x74 <= iVar3) {
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
          iVar2 = iVar2 + 0x74;
          iVar4 = iVar4 + 1;
        } while (iVar2 < _DAT_01d54640 * 0x74);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
      if (this_ptr->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(_DAT_01d34e38 - _DAT_01d34e48) * (float)_DAT_005e10ad;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_005e10b5 < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_005e10bd < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0(this_ptr);
        }
        goto LAB_0050f185;
      }
    }
  }
  return;
}
