// Name: FUN_005592d0
// Address: 005592d0
// Address Range: [[005592d0, 00559309]]
// Convention: unknown
// Signature: void FUN_005592d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005592d0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x15f698) = param_2;
  if (param_2 != 3) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\setcolid.cpp";
  _DAT_01d1d404 = 0x49a;
  FUN_005030e0("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
