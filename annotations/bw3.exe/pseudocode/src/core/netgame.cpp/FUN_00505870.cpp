// Name: FUN_00505870
// Address: 00505870
// Address Range: [[00505870, 005058ca]]
// Convention: unknown
// Signature: void FUN_00505870(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505870(int param_1,int param_2,uint param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x5c5;
    FUN_004e4330("CNetGame::send - invalid player index");
  }
  FUN_005058d0(param_1,param_2 * 0x80 + param_1 + 0x3c,param_3);
  return;
}
