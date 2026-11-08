// Name: FUN_00449f70
// Address: 00449f70
// Address Range: [[00449f70, 00449fe7]]
// Convention: unknown
// Signature: void FUN_00449f70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449f70(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0xce;
    FUN_004e4500("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  uVar1 = FUN_00449ef0(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4));
  *(uint *)(param_1 + 0x2f9c) = uVar1;
  FUN_00492718(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  return;
}
