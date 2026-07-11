// Name: FUN_004a02e0
// Address: 004a02e0
// Address Range: [[004a02e0, 004a0394]]
// Convention: unknown
// Signature: void FUN_004a02e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a02e0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040d540(param_1);
  FUN_004d9720(0x01CC9450,iVar1);
  (*(code *)**(uint **)(iVar1 + 0x14c))(iVar1);
  iVar2 = FUN_0040d890(iVar1,_DAT_02ddf9a8);
  if (iVar2 == 0) {
    _DAT_01cc4800 = ">..\\core\\game.cpp" + 1;
    _DAT_01cc4804 = 0xa0b;
    FUN_004c8440("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x560) = 500;
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0x80))
            (iVar1,*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8));
  FUN_004bf360(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,iVar1,1);
  return;
}
