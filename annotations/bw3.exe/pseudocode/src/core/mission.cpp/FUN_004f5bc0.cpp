// Name: FUN_004f5bc0
// Address: 004f5bc0
// Address Range: [[004f5bc0, 004f5c52]]
// Convention: unknown
// Signature: void FUN_004f5bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5bc0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004659c0("world",param_2,&DAT_005c837b);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xa3;
    FUN_004e4330("CDemonMission::load - Unable to open file");
  }
  uVar2 = FUN_00508960("Loading mission",0);
  FUN_004e0000(0x01D70AB8,uVar2);
  FUN_004f5cc0(param_1,iVar1,param_3);
  FUN_005a3a90(iVar1);
  FUN_004f7a20(param_1);
  return;
}
