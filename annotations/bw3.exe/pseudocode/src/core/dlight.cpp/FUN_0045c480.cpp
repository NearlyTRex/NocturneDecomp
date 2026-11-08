// Name: FUN_0045c480
// Address: 0045c480
// Address Range: [[0045c480, 0045c4f7]]
// Convention: unknown
// Signature: void FUN_0045c480(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c480(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0xcd;
    FUN_004e4330("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  uVar1 = FUN_0045c400(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4));
  *(uint *)(param_1 + 0x2f9c) = uVar1;
  FUN_00495f68(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  return;
}
