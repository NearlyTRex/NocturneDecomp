// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370
// Address: 004ea370
// Address Range: [[004ea370, 004ea6da]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame *this_ptr,int sync_stage)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame *this_ptr,int sync_stage)

{
  float fVar1;
  int iVar2;
  CNetGame *pCVar3;
  float local_198;
  char local_194 [256];
  char local_94 [100];
  SNetPacketHeader local_30;
  int local_2b;
  int local_24;
  SNetPlayer *local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  if (sync_stage < 1) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x337;
    core_main_c_FUN_004c8440("CNetGame::syncPlayers - don't use 0!");
  }
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return 1;
  }
  this_ptr->network_mode = NET_MODE_SYNCING;
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar2 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar2 / 0x12;
  this_ptr->players[this_ptr->local_player_index].local_sync_stage = sync_stage;
  if (this_ptr->connection_type == CONNECTION_HOST) {
    local_24 = _DAT_01cea3f8 + -0x1e0000;
    local_20 = this_ptr->players;
    while( true ) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      _sprintf(local_194,"Syncing stage %d.");
      engine_2d_c_drawText_FUN_00402600(local_194,0,0xb);
      engine_2d_c_drawText_FUN_00402600("Waiting on:",0,0x16);
      local_1c = 1.4013e-45;
      local_18 = 0x21;
      iVar2 = 0;
      pCVar3 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          if (pCVar3->players[0].local_sync_stage < sync_stage) {
            local_1c = 0.0;
            engine_2d_c_drawText_FUN_00402600(local_20[iVar2].name,0,local_18);
            _sprintf(local_194,"%d");
            engine_2d_c_drawText_FUN_00402600(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar2 = iVar2 + 1;
          pCVar3 = (CNetGame *)&pCVar3->players[0].player_input.action_state.fire;
        } while (iVar2 < this_ptr->player_count);
      }
      fVar1 = local_1c;
      if (local_1c != 0.0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
      local_14 = _DAT_01cea3f8 - local_24;
      local_198 = (float)local_14 * (float)1.52587890625e-05;
      if (local_198 < 0.0) {
        local_198 = fVar1;
      }
      if ((float)30 < local_198) {
        local_198 = 30.0;
      }
      if ((float)0.10000000000000001 < local_198) {
        local_24 = _DAT_01cea3f8;
        local_30.type = PACKET_SYNC_STAGE_REQ;
        local_30.size = 9;
        local_2b = sync_stage;
        iVar2 = 0;
        pCVar3 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (pCVar3->players[0].local_sync_stage < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,iVar2,&local_30);
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(this_ptr,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar3 = (CNetGame *)&pCVar3->players[0].player_input.action_state.fire;
          } while (iVar2 < this_ptr->player_count);
        }
      }
      iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        return 0;
      }
    }
  }
  else if (this_ptr->connection_type == CONNECTION_CLIENT) {
    if (3 < sync_stage) {
      return 1;
    }
    while (_DAT_01cea400 < sync_stage) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      _sprintf(local_94,"Waiting on sync code %d from server...");
      engine_2d_c_drawText_FUN_00402600(local_94,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
      iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        return 0;
      }
    }
  }
  else {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x3c0;
    core_main_c_FUN_004c8440("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
