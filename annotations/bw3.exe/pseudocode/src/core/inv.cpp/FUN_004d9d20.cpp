// Name: FUN_004d9d20
// Address: 004d9d20
// Address Range: [[004d9d20, 004d9e30]]
// Convention: unknown
// Signature: int FUN_004d9d20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d9d20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c790(param_1,"CWeapon");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c840(param_1,_DAT_02d0c150);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c790(param_1,"CAmmo");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c840(param_1,DAT_007dfd24);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c790(param_1,"CKeyActor");
  if (iVar1 != 0) {
    iVar1 = FUN_0040c840(param_1,_DAT_01d70a74);
    return iVar1 + 0x158;
  }
  iVar1 = FUN_0040c790(param_1,"CBoxActor");
  if (iVar1 == 0) {
    iVar1 = FUN_0040c790(param_1,"CHealthItem");
    if (iVar1 != 0) {
      iVar1 = FUN_0040c840(param_1,_DAT_01d5b9b4);
      return iVar1 + 0x158;
    }
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0xaf;
    FUN_004e4330("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = FUN_0040c840(param_1,DAT_007e17b4);
  return iVar1 + 0x158;
}
