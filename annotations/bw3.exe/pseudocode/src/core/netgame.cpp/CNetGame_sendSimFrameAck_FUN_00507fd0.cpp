// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0
// Address: 00507fd0
// Address Range: [[00507fd0, 005080f8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_50;
  byte local_4c;
  uint local_4b;
  uint local_47 [13];
  
  bVar4 = 0;
  if (*(int *)this_ptr != 2) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa29;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (*(int *)&this_ptr->field_0x4 != 3) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2a;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (*(int *)&this_ptr->field_0x120 < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2b;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (*(int *)&this_ptr->field_0x124 < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2c;
    core_main_c_FUN_004e4330("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_50 = 0x3d;
  local_4c = 0x10;
  local_4b = *(uint *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x124 * 0x80);
  puVar2 = (uint *)(&this_ptr->field_0x6c + *(int *)&this_ptr->field_0x124 * 0x80);
  puVar3 = local_47;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_00505870
            (this_ptr,*(int *)&this_ptr->field_0x120,(SNetPacketHeader *)&local_50);
  _DAT_01da6488 = _DAT_01da6478;
  return;
}
