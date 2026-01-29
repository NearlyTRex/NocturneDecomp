// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// Address: 005435a0
// Address Range: [[005435a0, 005437f1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_processClientFrame(uint param_1) */

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_20;
  uint *local_18;
  
  if (((this_ptr->connection_type == 2) && (this_ptr->network_mode == 3)) &&
     (-1 < *(int *)this_ptr->padding)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x97c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,*(int *)this_ptr->padding,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    if (this_ptr->connection_type == 2) {
LAB_00543605:
      iVar2 = 0;
      if (0 < g_SimFrameCount) {
        iVar1 = 0;
        do {
          if (*(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x10) ==
              *(int *)((int)&g_SimFrameHistory + iVar1)) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800();
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970();
              iVar1 = 0;
              iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0x10);
              if (0 < g_SimFrameCount) {
                iVar3 = 0;
                local_18 = &DAT_02f9c128;
                do {
                  if (*(int *)((int)&g_SimFrameHistory + iVar3) < iVar2) {
                    g_SimFrameCount = g_SimFrameCount + -1;
                    memmove
                              ((void *)((int)&g_SimFrameHistory + iVar3),local_18,
                               (g_SimFrameCount - iVar1) * 100);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    local_18 = local_18 + 0x19;
                    iVar3 = iVar3 + 100;
                  }
                } while (iVar1 < g_SimFrameCount);
              }
              iVar2 = this_ptr->local_player_index;
              this_ptr->unk[0x50] = '\0';
              this_ptr->unk[0x51] = '\0';
              this_ptr->unk[0x52] = '\0';
              this_ptr->unk[0x53] = '\0';
              iVar1 = 0;
              if (g_SimFrameCount < 1) {
                return;
              }
              iVar3 = 0;
              while (*(int *)(this_ptr->players[iVar2].unk1 + 0x10) !=
                     *(int *)((int)&g_SimFrameHistory + iVar3)) {
                iVar3 = iVar3 + 100;
                iVar1 = iVar1 + 1;
                if (g_SimFrameCount * 100 <= iVar3) {
                  return;
                }
              }
              if (iVar1 < 0) {
                return;
              }
              this_ptr->unk[0x50] = '\x01';
              this_ptr->unk[0x51] = '\0';
              this_ptr->unk[0x52] = '\0';
              this_ptr->unk[0x53] = '\0';
              return;
            }
            break;
          }
          iVar1 = iVar1 + 100;
          iVar2 = iVar2 + 1;
        } while (iVar1 < g_SimFrameCount * 100);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      if (this_ptr->connection_type == 2) {
        local_20 = (float)(int)(g_CurrentGameTime - DAT_02f7c8c8) * (float)1.52587890625e-05;
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if ((float)30 < local_20) {
          local_20 = 30.0;
        }
        if ((float)0.10000000000000001 < local_20) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970();
        }
        goto LAB_00543605;
      }
    }
  }
  return;
}
