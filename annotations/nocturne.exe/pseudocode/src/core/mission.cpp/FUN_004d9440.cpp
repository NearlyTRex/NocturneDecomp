// Name: FUN_004d9440
// Address: 004d9440
// Address Range: [[004d9440, 004d9643]]
// Convention: unknown
// Signature: void FUN_004d9440(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d9440(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  while( true ) {
    if (_DAT_01cae0d4 < 1) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x4c7;
      FUN_004c8440("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) == 0) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x4c8;
      FUN_004c8440("CDemonMission::run - no gLocalHero");
    }
    FUN_004d9020(param_1,*(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    DAT_01ccbbf0 = '\0';
    FUN_004d9180(param_1);
    iVar1 = FUN_0049da10(0x01C775EC);
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    FUN_004d8cd0(param_1,iVar2);
    (**(code **)(*(int *)(iVar2 + 0x14c) + 0x144))(iVar2);
    FUN_004d7ea0(param_1);
    if ((iVar1 == 0) || (DAT_01ccbbf0 == '\0')) break;
    iVar1 = thunk_FUN_00564520(0x01E57284 + 0x14cd08,"hq.geo");
    bVar3 = iVar1 != 0;
    if (bVar3) {
      FUN_004a6680(0x01C775EC);
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
    FUN_004c5640(0x01CC3160,9,bVar3,uVar4);
    FUN_004d7ee0(param_1,&DAT_01ccbbf0,0);
    iVar2 = FUN_004d9a80(param_1,iVar2);
    if (iVar2 == 0) goto LAB_004d950e;
    iVar2 = FUN_004d9780(param_1);
    if (iVar2 == 0) goto LAB_004d950e;
    if (bVar3) {
      uVar4 = FUN_004ee370("Press any key to continue...");
      iVar2 = FUN_004930e0(_DAT_014b9900,0x58,0xf8,0,uVar4);
      FUN_00490be0(_DAT_014b9900,0x27f,0x1db - iVar2);
      FUN_00553910();
      FUN_00403f50();
      FUN_00558b00();
    }
  }
  FUN_004d8f90(param_1,iVar2,1);
LAB_004d950e:
  if (*(int *)(0x01C775EC + 600) == 0) {
    return;
  }
  FUN_004a6a10(0x01C775EC);
  return;
}
