// Name: FUN_0051a490
// Address: 0051a490
// Address Range: [[0051a490, 0051a4ef]]
// Convention: unknown
// Signature: void FUN_0051a490(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a490(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00479180("world",param_2,"wt");
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xbd;
    FUN_005030e0("CDemonMission::save - Unable to open file");
  }
  FUN_0051ac40(param_1,iVar1);
  FUN_005c0d10(iVar1);
  return;
}
