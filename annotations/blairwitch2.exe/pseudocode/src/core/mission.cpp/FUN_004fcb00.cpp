// Name: FUN_004fcb00
// Address: 004fcb00
// Address Range: [[004fcb00, 004fccc2]]
// Convention: unknown
// Signature: void FUN_004fcb00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fcb00(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  while( true ) {
    if (_DAT_01cedee0 < 1) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x511;
      FUN_004e4500("CDemonMission::run - hero list empty");
    }
    if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) == 0) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x512;
      FUN_004e4500("CDemonMission::run - no gLocalHero");
    }
    FUN_004fc6b0(param_1,*(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2c));
    DAT_01d1c630 = '\0';
    FUN_004fc820(param_1);
    iVar1 = FUN_004b6170(0x01CB6900);
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    FUN_004fc270(param_1,iVar2);
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x158))(iVar2);
    FUN_004fb450(param_1);
    if ((iVar1 == 0) || (DAT_01d1c630 == '\0')) break;
    iVar1 = thunk_FUN_005b8130(0x01E661B8 + 0x14d0f0,"hq.geo");
    bVar3 = iVar1 != 0;
    if (bVar3) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
    FUN_004e1480(0x01D03000,9,bVar3,uVar4);
    FUN_004fb490(param_1,&DAT_01d1c630,0);
    iVar2 = FUN_004fd0e0(param_1,iVar2);
    if (iVar2 == 0) goto LAB_004fcbce;
    iVar2 = FUN_004fce00(param_1);
    if (iVar2 == 0) goto LAB_004fcbce;
    if (bVar3) {
      FUN_00589560();
      FUN_004032b0();
    }
  }
  FUN_004fc570(param_1,iVar2,1);
LAB_004fcbce:
  if (*(int *)(0x01CB6900 + 0x278) == 0) {
    FUN_004a50b0(0x01CAF56C);
    return;
  }
  FUN_004bdfb0(0x01CB6900);
  FUN_004a50b0(0x01CAF56C);
  return;
}
