// Name: FUN_0053ec90
// Address: 0053ec90
// Address Range: [[0053ec90, 0053ecc9]]
// Convention: unknown
// Signature: void FUN_0053ec90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ec90(int param_1,int param_2)

{
  *(int *)(param_1 + 0x15f698) = param_2;
  if (param_2 != 3) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\setcolid.cpp";
  _DAT_01d71de4 = 0x49a;
  FUN_004e4330("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
