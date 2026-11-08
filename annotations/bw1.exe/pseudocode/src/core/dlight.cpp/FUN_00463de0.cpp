// Name: FUN_00463de0
// Address: 00463de0
// Address Range: [[00463de0, 00463e21]]
// Convention: unknown
// Signature: void FUN_00463de0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463de0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c08d0(0x10000);
  *(int *)(param_1 + 0x1c6c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dlight.cpp";
  _DAT_01d1d404 = 0x544;
  FUN_005030e0("CDemonLight::allocateFilter - Out of memory");
  return;
}
