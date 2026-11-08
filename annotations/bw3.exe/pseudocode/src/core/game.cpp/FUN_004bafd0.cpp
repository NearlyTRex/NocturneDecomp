// Name: FUN_004bafd0
// Address: 004bafd0
// Address Range: [[004bafd0, 004bb084]]
// Convention: unknown
// Signature: void FUN_004bafd0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bafd0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040c4f0(param_1);
  FUN_004f7530(0x01D81080,iVar1);
  (*(code *)**(uint **)(iVar1 + 0x154))(iVar1);
  iVar2 = FUN_0040c840(iVar1,_DAT_02d0c150);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0xc18;
    FUN_004e4330("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x568) = 500;
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x88))
            (iVar1,*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
  FUN_004da880(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,iVar1,1);
  return;
}
