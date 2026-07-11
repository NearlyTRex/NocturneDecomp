// Name: FUN_004eb350
// Address: 004eb350
// Address Range: [[004eb350, 004eb3b3]]
// Convention: unknown
// Signature: void FUN_004eb350(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eb350(int param_1,int param_2,uint param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1c) <= param_2)) {
    _DAT_01cc4800 = ">@..\\core\\netgame.cpp" + 2;
    _DAT_01cc4804 = 0x5c5;
    FUN_004c8440("CNetGame::send - invalid player index");
  }
  FUN_004eb3c0(param_1,param_2 * 0x78 + param_1 + 0x3c,param_3);
  return;
}
