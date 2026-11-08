// Name: FUN_004f72a0
// Address: 004f72a0
// Address Range: [[004f72a0, 004f7459]]
// Convention: unknown
// Signature: void FUN_004f72a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f72a0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    if (_DAT_01d5ba00 < 1) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x520;
      FUN_004e4330("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) == 0) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x521;
      FUN_004e4330("CDemonMission::run - no gLocalHero");
    }
    FUN_004f6de0(param_1,*(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c));
    DAT_01d882a0 = '\0';
    FUN_004f6f80(param_1);
    iVar1 = FUN_004b7f90(0x01D2130C);
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    FUN_004f69a0(param_1,iVar2);
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x14c))(iVar2);
    FUN_004f5b80(param_1);
    if ((iVar1 == 0) || (DAT_01d882a0 == '\0')) break;
    iVar1 = thunk_FUN_005a3260(0x01ED78C8 + 0x14d0f0,"hq.geo");
    if (iVar1 != 0) {
      FUN_004bfb50(0x01D2130C);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 1;
    }
    FUN_004dfc50(0x01D70AB8,9,iVar1 != 0,uVar3);
    FUN_004f5bc0(param_1,&DAT_01d882a0,0);
    iVar2 = FUN_004f7880(param_1,iVar2);
    if ((iVar2 == 0) || (iVar2 = FUN_004f7590(param_1), iVar2 == 0)) goto LAB_004f736a;
  }
  FUN_004f6ca0(param_1,iVar2,1);
LAB_004f736a:
  if (*(int *)(0x01D2130C + 0x284) != 0) {
    FUN_004bfee0(0x01D2130C);
    FUN_004ab7a0(0x01D1A05C);
    return;
  }
  FUN_004ab7a0(0x01D1A05C);
  return;
}
