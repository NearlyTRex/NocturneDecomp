// Name: FUN_0044b5b0
// Address: 0044b5b0
// Address Range: [[0044b5b0, 0044b5f1]]
// Convention: unknown
// Signature: void FUN_0044b5b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b5b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b8580(0x10000);
  *(int *)(param_1 + 0x1c6c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dlight.cpp";
  _DAT_01d046a4 = 0x547;
  FUN_004e4500("CDemonLight::allocateFilter - Out of memory");
  return;
}
