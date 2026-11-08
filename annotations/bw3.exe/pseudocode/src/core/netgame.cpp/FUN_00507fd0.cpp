// Name: FUN_00507fd0
// Address: 00507fd0
// Address Range: [[00507fd0, 005080f8]]
// Convention: unknown
// Signature: void FUN_00507fd0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint local_50;
  byte local_4c;
  int local_4b;
  int local_47 [13];
  
  bVar4 = 0;
  if (*param_1 != 2) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa29;
    FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (param_1[1] != 3) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2a;
    FUN_004e4330("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (param_1[0x48] < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2b;
    FUN_004e4330("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (param_1[0x49] < 0) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0xa2c;
    FUN_004e4330("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_50 = 0x3d;
  local_4c = 0x10;
  local_4b = param_1[param_1[0x49] * 0x20 + 0x1a];
  piVar2 = param_1 + param_1[0x49] * 0x20 + 0x1b;
  piVar3 = local_47;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00505870(param_1,param_1[0x48],&local_50);
  _DAT_01da6488 = _DAT_01da6478;
  return;
}
