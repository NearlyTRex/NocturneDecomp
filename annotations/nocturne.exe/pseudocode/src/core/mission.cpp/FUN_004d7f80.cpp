// Name: FUN_004d7f80
// Address: 004d7f80
// Address Range: [[004d7f80, 004d7fdf]]
// Convention: unknown
// Signature: void FUN_004d7f80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7f80(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00456a60("world",param_2,0x589669);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0xb6;
    FUN_004c8440("CDemonMission::save - Unable to open file");
  }
  FUN_004d8720(param_1,iVar1);
  FUN_00563380(iVar1);
  return;
}
