// Name: FUN_00537eb0
// Address: 00537eb0
// Address Range: [[00537eb0, 00537ee9]]
// Convention: unknown
// Signature: void FUN_00537eb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537eb0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x15f694) = param_2;
  if (param_2 != 3) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\setcolid.cpp";
  _DAT_01d046a4 = 0x49a;
  FUN_004e4500("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
