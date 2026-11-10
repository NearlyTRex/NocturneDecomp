// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0
// Address: 0050bdb0
// Address Range: [[0050bdb0, 0050c124]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(CNetGame *this_ptr,int sync_stage)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(CNetGame *this_ptr,int sync_stage)

{
  int iVar1;
  int iVar2;
  CNetGame *pCVar3;
  float local_198;
  char local_194 [256];
  char local_94 [100];
  uint local_30;
  byte local_2c;
  int local_2b;
  int local_24;
  int local_20;
  SNetPlayer *local_1c;
  int local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  if (sync_stage < 1) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x337;
    core_main_c_FUN_004e4500("CNetGame::syncPlayers - don't use 0!");
  }
  if (this_ptr->connection_type == CONNECTION_NONE) {
    return 1;
  }
  this_ptr->network_mode = NET_MODE_SYNCING;
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar1 / 0x12;
  *(int *)&this_ptr->players[this_ptr->local_player_index].field_0x3c = sync_stage;
  if (this_ptr->connection_type == CONNECTION_HOST) {
    local_20 = _DAT_01d34e38 + -0x1e0000;
    local_1c = this_ptr->players;
    while( true ) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      _sprintf(local_194,"Syncing stage %d.");
      engine_2d_c_drawText_FUN_00401fe0(local_194,0,0xb);
      iVar1 = 0x21;
      engine_2d_c_drawText_FUN_00401fe0("Waiting on:",0,0x16);
      local_18 = 1;
      local_14 = 0;
      pCVar3 = this_ptr;
      if (0 < this_ptr->player_count) {
        do {
          iVar2 = iVar1;
          if (*(int *)&pCVar3->players[0].field_0x3c < sync_stage) {
            local_18 = 0;
            engine_2d_c_drawText_FUN_00401fe0((char *)(local_1c + local_14),0,iVar1);
            _sprintf(local_194,&DAT_005e070f);
            iVar2 = iVar1 + 0xb;
            engine_2d_c_drawText_FUN_00401fe0(local_194,200,iVar1);
          }
          local_14 = local_14 + 1;
          iVar1 = iVar2;
          pCVar3 = (CNetGame *)&pCVar3->players[0].field_0x60;
        } while (local_14 < this_ptr->player_count);
      }
      if (local_18 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
      local_24 = _DAT_01d34e38 - local_20;
      local_198 = (float)local_24 * (float)_DAT_005e07b5;
      if (local_198 < 0.0) {
        local_198 = 0.0;
      }
      if ((float)_DAT_005e07bd < local_198) {
        local_198 = 30.0;
      }
      if ((float)_DAT_005e07c5 < local_198) {
        local_20 = _DAT_01d34e38;
        local_2c = 8;
        local_30 = 9;
        local_2b = sync_stage;
        iVar1 = 0;
        pCVar3 = this_ptr;
        if (0 < this_ptr->player_count) {
          do {
            if (*(int *)&pCVar3->players[0].field_0x3c < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_0050cd90
                        (this_ptr,iVar1,(SNetPacketHeader *)&local_30);
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(this_ptr,iVar1,2.0);
            }
            iVar1 = iVar1 + 1;
            pCVar3 = (CNetGame *)&pCVar3->players[0].field_0x60;
          } while (iVar1 < this_ptr->player_count);
        }
      }
      iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        return 0;
      }
    }
  }
  else if (this_ptr->connection_type == CONNECTION_CLIENT) {
    if (3 < sync_stage) {
      return 1;
    }
    while (_DAT_01d34e40 < sync_stage) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      _sprintf(local_94,"Waiting on sync code %d from server...");
      engine_2d_c_drawText_FUN_00401fe0(local_94,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
      iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        return 0;
      }
    }
  }
  else {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x3c0;
    core_main_c_FUN_004e4500("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
