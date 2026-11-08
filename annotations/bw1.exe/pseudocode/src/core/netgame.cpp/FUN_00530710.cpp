// Name: FUN_00530710
// Address: 00530710
// Address Range: [[00530710, 00530848]]
// Convention: unknown
// Signature: void FUN_00530710(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530710(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint local_4c;
  byte local_48;
  int local_47;
  int local_43 [12];
  
  bVar4 = 0;
  if (*param_1 != 2) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa29;
    FUN_005030e0("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (param_1[1] != 3) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2a;
    FUN_005030e0("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (param_1[0x46] < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2b;
    FUN_005030e0("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (param_1[0x47] < 0) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0xa2c;
    FUN_005030e0("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_4c = 0x39;
  local_48 = 0x10;
  local_47 = param_1[param_1[0x47] * 0x1f + 0x1a];
  piVar2 = param_1 + param_1[0x47] * 0x1f + 0x1b;
  piVar3 = local_43;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_0052df50(param_1,param_1[0x46],&local_4c);
  _DAT_01d51db0 = _DAT_01d51da0;
  return;
}
