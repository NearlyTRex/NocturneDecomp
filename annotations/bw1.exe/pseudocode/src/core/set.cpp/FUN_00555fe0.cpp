// Name: FUN_00555fe0
// Address: 00555fe0
// Address Range: [[00555fe0, 00556038]]
// Convention: unknown
// Signature: undefined4 FUN_00555fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00555fe0(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x15aeb8)) {
    return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
  }
  _DAT_01d1d400 = "..\\core\\set.cpp";
  _DAT_01d1d404 = 0x14d5;
  FUN_005030e0("CDemonSet::isCameraPanning - no camera selected");
  return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
}
