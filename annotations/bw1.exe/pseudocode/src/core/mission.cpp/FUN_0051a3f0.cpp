// Name: FUN_0051a3f0
// Address: 0051a3f0
// Address Range: [[0051a3f0, 0051a482]]
// Convention: unknown
// Signature: void FUN_0051a3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a3f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00479180("world",param_2,"rt");
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xa3;
    FUN_005030e0("CDemonMission::load - Unable to open file");
  }
  uVar2 = FUN_00531090("Loading mission",0);
  FUN_004fe9c0(0x01D1BD1C,uVar2);
  FUN_0051a4f0(param_1,iVar1,param_3);
  FUN_005c0d10(iVar1);
  FUN_0051c240(param_1);
  return;
}
