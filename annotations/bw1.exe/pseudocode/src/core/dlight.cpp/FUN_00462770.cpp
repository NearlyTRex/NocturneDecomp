// Name: FUN_00462770
// Address: 00462770
// Address Range: [[00462770, 004627e7]]
// Convention: unknown
// Signature: void FUN_00462770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462770(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xcd;
    FUN_005030e0("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  uVar1 = FUN_004626f0(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4));
  *(uint *)(param_1 + 0x2f9c) = uVar1;
  FUN_004ab0c8(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  return;
}
