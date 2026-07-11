// Name: FUN_004c90e0
// Address: 004c90e0
// Address Range: [[004c90e0, 004c93a8]]
// Convention: unknown
// Signature: void FUN_004c90e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c90e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_110 [256];
  
  iVar1 = FUN_00456a60(&DAT_00587ed1,"enemy.pod",&DAT_00587ec4);
  if (iVar1 == 0) {
    iVar2 = FUN_004930e0(_DAT_014b9900,0x58);
    FUN_00558a30();
    FUN_00403f50();
    uVar3 = FUN_0056488c();
    FUN_00563c90(local_110,"load%d",(uVar3 & 3) + 1);
    FUN_0040e3c0(0x1cc480c,local_110,0x280,0x1e0);
    FUN_0052ee70();
    FUN_0040e710(0x1cc480c,0,0,0xffff);
    iVar1 = FUN_00492da0(_DAT_014b98f8,"In stores 10/26/99");
    FUN_00490980(_DAT_014b98f8,"In stores 10/26/99",0x140 - iVar1 / 2,0xdc,7,0);
    iVar1 = FUN_00492da0(_DAT_014b98f8,"www.nocturnegame.com");
    FUN_00490980(_DAT_014b98f8,"www.nocturnegame.com",0x140 - iVar1 / 2,0x1e0 - iVar2,7,0);
    iVar6 = 0xa0000;
    FUN_00553910();
    iVar1 = FUN_00558a30();
    do {
      FUN_00553910();
      iVar4 = FUN_00558a30();
      _DAT_01bd1d80 = (iVar4 - iVar1) / 0x12;
      if (_DAT_01bd1d80 < 0) {
        _DAT_01bd1d80 = 0;
      }
      if (0x4000 < _DAT_01bd1d80) {
        _DAT_01bd1d80 = 0x4000;
      }
      iVar6 = iVar6 - _DAT_01bd1d80;
      iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x2a);
      if (iVar1 != 0) {
        iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,1);
        if (iVar1 != 0) break;
      }
      iVar1 = iVar4;
    } while (0 < iVar6);
    uVar5 = FUN_004ee370("Press any key to continue...");
    iVar1 = FUN_00492da0(_DAT_014b98f8,uVar5);
    FUN_00490980(_DAT_014b98f8,uVar5,0x140 - iVar1 / 2,iVar2 * -2 + 0x1e0,7,0);
    FUN_00553910();
    FUN_00403f50();
    FUN_00558b00();
    FUN_00403f50();
    FUN_0040e360(0x1cc480c);
    FUN_0040e360(0x1cc4820);
  }
  else {
    FUN_00563380(iVar1);
  }
  FUN_004e99c0(0x01CEA280);
  FUN_004940d0(0x01C70F74);
  FUN_004ee680(0x01D465C0);
  FUN_004d7e90(0x01CC9450);
  thunk_FUN_00527e10(0x02DC9450);
  FUN_00454460();
  FUN_0051f650();
  FUN_0051f730();
  FUN_004cca50();
  FUN_00558a20();
  FUN_004012a0();
  thunk_FUN_005458d0();
  FUN_0044cc00();
  FUN_00559e90();
  FUN_004f8b40(0x01E528D0);
  FUN_004be2d0();
  return;
}
