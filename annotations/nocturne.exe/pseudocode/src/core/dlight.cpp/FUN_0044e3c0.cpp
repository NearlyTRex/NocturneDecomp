// Name: FUN_0044e3c0
// Address: 0044e3c0
// Address Range: [[0044e3c0, 0044e437]]
// Convention: unknown
// Signature: void FUN_0044e3c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e3c0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    _DAT_01cc4800 = "..\\core\\dlight.cpp";
    _DAT_01cc4804 = 0xcd;
    FUN_004c8440("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  uVar1 = FUN_0044e340(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4));
  *(uint *)(param_1 + 0x2f9c) = uVar1;
  FUN_00481a28(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  return;
}
