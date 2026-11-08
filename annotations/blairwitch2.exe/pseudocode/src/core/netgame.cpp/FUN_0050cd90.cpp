// Name: FUN_0050cd90
// Address: 0050cd90
// Address Range: [[0050cd90, 0050cdea]]
// Convention: unknown
// Signature: void FUN_0050cd90(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050cd90(int param_1,int param_2,uint param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x5c5;
    FUN_004e4500("CNetGame::send - invalid player index");
  }
  FUN_0050cdf0(param_1,param_2 * 0x80 + param_1 + 0x3c,param_3);
  return;
}
