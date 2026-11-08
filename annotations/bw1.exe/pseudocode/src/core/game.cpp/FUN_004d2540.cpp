// Name: FUN_004d2540
// Address: 004d2540
// Address Range: [[004d2540, 004d25f4]]
// Convention: unknown
// Signature: void FUN_004d2540(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2540(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040c2b0(param_1);
  FUN_0051bd60(0x01D2C900,iVar1);
  (*(code *)**(uint **)(iVar1 + 0x154))(iVar1);
  iVar2 = FUN_0040c600(iVar1,_DAT_02c99770);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\game.cpp";
    _DAT_01d1d404 = 0xbf9;
    FUN_005030e0("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x568) = 500;
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x88))
            (iVar1,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
  FUN_004f7690(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,iVar1,1);
  return;
}
