// Name: FUN_0051bad0
// Address: 0051bad0
// Address Range: [[0051bad0, 0051bc89]]
// Convention: unknown
// Signature: void FUN_0051bad0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051bad0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    if (_DAT_01d06aa0 < 1) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x520;
      FUN_005030e0("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) == 0) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x521;
      FUN_005030e0("CDemonMission::run - no gLocalHero");
    }
    FUN_0051b610(param_1,*(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2c));
    DAT_01d33b20 = '\0';
    FUN_0051b7b0(param_1);
    iVar1 = FUN_004cf5e0(0x01CCF390);
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    FUN_0051b1d0(param_1,iVar2);
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x14c))(iVar2);
    FUN_0051a3b0(param_1);
    if ((iVar1 == 0) || (DAT_01d33b20 == '\0')) break;
    iVar1 = thunk_FUN_005c04e0(0x01E82168 + 0x14d0f0,"hq.geo");
    if (iVar1 != 0) {
      FUN_004d8700(0x01CCF390);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 1;
    }
    FUN_004fe840(0x01D1BD1C,9,iVar1 != 0,uVar3);
    FUN_0051a3f0(param_1,&DAT_01d33b20,0);
    iVar2 = FUN_0051c0a0(param_1,iVar2);
    if ((iVar2 == 0) || (iVar2 = FUN_0051bdc0(param_1), iVar2 == 0)) goto LAB_0051bb9a;
  }
  FUN_0051b4d0(param_1,iVar2,1);
LAB_0051bb9a:
  if (*(int *)(0x01CCF390 + 0x27c) != 0) {
    FUN_004d8a90(0x01CCF390);
    FUN_004bdaa0(0x01CC8004);
    return;
  }
  FUN_004bdaa0(0x01CC8004);
  return;
}
