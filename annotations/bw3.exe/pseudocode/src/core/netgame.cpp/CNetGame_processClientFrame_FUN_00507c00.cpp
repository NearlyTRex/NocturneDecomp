// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00
// Address: 00507c00
// Address Range: [[00507c00, 00507e47]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00507c00(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00507c00(CNetGame *this_ptr)

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
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x97c;
      core_main_c_FUN_004e4330("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_00506320(this_ptr,this_ptr->server_player_index,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
LAB_00507c65:
      iVar4 = 0;
      uVar5 = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x48;
      if (0 < _DAT_01dc5c80) {
        iVar2 = 0;
        do {
          uVar1 = *(uint *)(iVar2 + 0x1dc5c84);
          if (uVar5 == uVar1) {
            if (-1 < iVar4) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00507e50
                        (this_ptr,(SSimFrame *)(iVar2 + 0x1dc5c84));
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(this_ptr);
              uVar5 = uVar5 ^ uVar1;
              iVar4 = *(int *)&this_ptr->players[this_ptr->local_player_index].field_0x48;
              if (0 < _DAT_01dc5c80) {
                iVar2 = 0;
                local_18 = &DAT_01dc5cf8;
                do {
                  if (*(int *)(iVar2 + 0x1dc5c84) < iVar4) {
                    _DAT_01dc5c80 = _DAT_01dc5c80 + -1;
                    memmove
                              ((void *)(iVar2 + 0x1dc5c84),local_18,(_DAT_01dc5c80 - uVar5) * 0x74);
                  }
                  else {
                    uVar5 = uVar5 + 1;
                    local_18 = local_18 + 0x74;
                    iVar2 = iVar2 + 0x74;
                  }
                } while ((int)uVar5 < _DAT_01dc5c80);
              }
              iVar4 = _DAT_01dc5c80;
              this_ptr->has_pending_sim_frame = 0;
              iVar2 = 0;
              if (iVar4 < 1) {
                return;
              }
              iVar3 = 0;
              while (*(int *)&this_ptr->players[this_ptr->local_player_index].field_0x48 !=
                     *(int *)(iVar3 + 0x1dc5c84)) {
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
        } while (iVar2 < _DAT_01dc5c80 * 0x74);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
      if (this_ptr->connection_type == CONNECTION_CLIENT) {
        local_20 = (float)(_DAT_01da6478 - _DAT_01da6488) * (float)_DAT_005cb119;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)_DAT_005cb121 < local_20) {
          local_20 = 30.0;
        }
        if ((float)_DAT_005cb129 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(this_ptr);
        }
        goto LAB_00507c65;
      }
    }
  }
  return;
}
