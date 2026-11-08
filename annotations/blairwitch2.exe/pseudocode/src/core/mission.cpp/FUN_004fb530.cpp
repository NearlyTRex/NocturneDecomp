// Name: FUN_004fb530
// Address: 004fb530
// Address Range: [[004fb530, 004fb58f]]
// Convention: unknown
// Signature: void FUN_004fb530(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb530(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00460c70("world",param_2,0x5de08d);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xba;
    FUN_004e4500("CDemonMission::save - Unable to open file");
  }
  FUN_004fbce0(param_1,iVar1);
  FUN_005b89c0(iVar1);
  return;
}
