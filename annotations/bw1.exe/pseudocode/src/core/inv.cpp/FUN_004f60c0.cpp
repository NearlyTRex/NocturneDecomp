// Name: FUN_004f60c0
// Address: 004f60c0
// Address Range: [[004f60c0, 004f62d0]]
// Convention: unknown
// Signature: int FUN_004f60c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f60c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c550(param_1,"CWeapon");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,_DAT_02c99770);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CAmmo");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,DAT_007c33a4);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CKeyActor");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,_DAT_01d1bc9c);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CBoxActor");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,DAT_007c5094);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CHealthItem");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,_DAT_01d06a90);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CGasMask");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,_DAT_01cd0d40);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CGoggles");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c600(param_1,_DAT_01cd0e38);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c550(param_1,"CFilmReel");
  if (iVar1 == 0) {
    iVar1 = FUN_0040c550(param_1,"CTrap");
    if (iVar1 != 0) {
      iVar1 = FUN_0040c600(param_1,_DAT_02c8adcc);
      return iVar1 + 0x158;
    }
    iVar1 = FUN_0040c550(param_1,"CBattery");
    if (iVar1 != 0) {
      iVar1 = FUN_0040c600(param_1,DAT_007c385c);
      return iVar1 + 0x158;
    }
    _DAT_01d1d400 = "..\\core\\inv.cpp";
    _DAT_01d1d404 = 0xaf;
    FUN_005030e0("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = FUN_0040c600(param_1,_DAT_01c57034);
  return iVar1 + 0x158;
}
