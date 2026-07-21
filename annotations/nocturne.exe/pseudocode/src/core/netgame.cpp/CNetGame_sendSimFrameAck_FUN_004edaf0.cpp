// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edc28]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint local_48;
  byte local_44;
  int local_43;
  int local_3f [11];
  
  bVar4 = 0;
  if (*param_1 != 2) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0xa29;
    FUN_004c8440("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (param_1[1] != 3) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0xa2a;
    FUN_004c8440("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (param_1[0x44] < 0) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0xa2b;
    FUN_004c8440("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (param_1[0x45] < 0) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0xa2c;
    FUN_004c8440("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_48 = 0x35;
  local_44 = 0x10;
  local_43 = param_1[param_1[0x45] * 0x1e + 0x1a];
  piVar2 = param_1 + param_1[0x45] * 0x1e + 0x1b;
  piVar3 = local_3f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_004eb350(param_1,param_1[0x44],&local_48);
  _DAT_01cea408 = _DAT_01cea3f8;
  return;
}
