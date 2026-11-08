// Name: FUN_0052df50
// Address: 0052df50
// Address Range: [[0052df50, 0052dfb3]]
// Convention: unknown
// Signature: void FUN_0052df50(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052df50(int param_1,int param_2,uint param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x5c5;
    FUN_005030e0("CNetGame::send - invalid player index");
  }
  FUN_0052dfc0(param_1,param_2 * 0x7c + param_1 + 0x3c,param_3);
  return;
}
