// Name: FUN_004f5c60
// Address: 004f5c60
// Address Range: [[004f5c60, 004f5cbf]]
// Convention: unknown
// Signature: void FUN_004f5c60(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5c60(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004659c0("world",param_2,0x5c83d2);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xbd;
    FUN_004e4330("CDemonMission::save - Unable to open file");
  }
  FUN_004f6410(param_1,iVar1);
  FUN_005a3a90(iVar1);
  return;
}
