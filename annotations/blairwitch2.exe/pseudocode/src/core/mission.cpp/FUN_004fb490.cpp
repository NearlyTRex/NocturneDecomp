// Name: FUN_004fb490
// Address: 004fb490
// Address Range: [[004fb490, 004fb522]]
// Convention: unknown
// Signature: void FUN_004fb490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb490(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00460c70("world",param_2,&DAT_005de036);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("CDemonMission::load - Unable to open file");
  }
  uVar2 = FUN_0050fe80("Loading mission",0);
  FUN_004e1600(0x01D03000,uVar2);
  FUN_004fb590(param_1,iVar1,param_3);
  FUN_005b89c0(iVar1);
  FUN_004fd280(param_1);
  return;
}
