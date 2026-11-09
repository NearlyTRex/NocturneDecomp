// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90
// Address: 0052cf90
// Address Range: [[0052cf90, 0052d2fa]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(CNetGame *this_ptr,int sync_stage)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(CNetGame *this_ptr,int sync_stage)

{
  float fVar1;
  int iVar2;
  CNetGame *pCVar3;
  float local_198;
  char local_194 [256];
  char local_94 [100];
  uint local_30;
  byte local_2c;
  int local_2b;
  int local_24;
  byte *local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  if (sync_stage < 1) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x337;
    core_main_c_FUN_005030e0("CNetGame::syncPlayers - don't use 0!");
  }
  if (*(int *)this_ptr == 0) {
    return 1;
  }
  *(uint *)&this_ptr->field_0x4 = 2;
  iVar2 = wincore_winrun_cpp_FUN_005b2420();
  _DAT_01d51d9c = iVar2 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar2 / 0x12;
  *(int *)(&this_ptr->field_0x5c + *(int *)&this_ptr->field_0x11c * 0x7c) = sync_stage;
  if (*(int *)this_ptr == 1) {
    local_24 = _DAT_01d51da0 + -0x1e0000;
    local_20 = &this_ptr->field_0x20;
    while( true ) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      FUN_005bfb40(local_194,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fe0(local_194,0,0xb);
      engine_2d_c_drawText_FUN_00401fe0("Waiting on:",0,0x16);
      local_1c = 1.4013e-45;
      local_18 = 0x21;
      iVar2 = 0;
      pCVar3 = this_ptr;
      if (0 < *(int *)&this_ptr->field_0x1c) {
        do {
          if (*(int *)&pCVar3->field_0x5c < sync_stage) {
            local_1c = 0.0;
            engine_2d_c_drawText_FUN_00401fe0(local_20 + iVar2 * 0x7c,0,local_18);
            FUN_005bfb40(local_194,&DAT_005eb96a,*(uint *)&pCVar3->field_0x5c);
            engine_2d_c_drawText_FUN_00401fe0(local_194,200,local_18);
            local_18 = local_18 + 0xb;
          }
          iVar2 = iVar2 + 1;
          pCVar3 = (CNetGame *)&pCVar3->field_0x7c;
        } while (iVar2 < *(int *)&this_ptr->field_0x1c);
      }
      fVar1 = local_1c;
      if (local_1c != 0.0) break;
      wincore_wddvmem_cpp_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      local_14 = _DAT_01d51da0 - local_24;
      local_198 = (float)local_14 * (float)_DAT_005eba10;
      if (local_198 < 0.0) {
        local_198 = fVar1;
      }
      if ((float)_DAT_005eba18 < local_198) {
        local_198 = 30.0;
      }
      if ((float)_DAT_005eba20 < local_198) {
        local_24 = _DAT_01d51da0;
        local_2c = 8;
        local_30 = 9;
        local_2b = sync_stage;
        iVar2 = 0;
        pCVar3 = this_ptr;
        if (0 < *(int *)&this_ptr->field_0x1c) {
          do {
            if (*(int *)&pCVar3->field_0x5c < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_0052df50
                        (this_ptr,iVar2,(SNetPacketHeader *)&local_30);
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar3 = (CNetGame *)&pCVar3->field_0x7c;
          } while (iVar2 < *(int *)&this_ptr->field_0x1c);
        }
      }
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        return 0;
      }
    }
  }
  else if (*(int *)this_ptr == 2) {
    if (3 < sync_stage) {
      return 1;
    }
    while (_DAT_01d51da8 < sync_stage) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      FUN_005bfb40(local_94,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fe0(local_94,0,0xb);
      wincore_wddvmem_cpp_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        return 0;
      }
    }
  }
  else {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x3c0;
    core_main_c_FUN_005030e0("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}
