// Name: FUN_004d7ee0
// Address: 004d7ee0
// Address Range: [[004d7ee0, 004d7f72]]
// Convention: unknown
// Signature: void FUN_004d7ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7ee0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00456a60("world",param_2,&DAT_00589612);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x9c;
    FUN_004c8440("CDemonMission::load - Unable to open file");
  }
  uVar2 = FUN_004ee370("Loading mission",0);
  FUN_004c59e0(0x01CC3160,uVar2);
  FUN_004d7fe0(param_1,iVar1,param_3);
  FUN_00563380(iVar1);
  FUN_004d9c20(param_1);
  return;
}
