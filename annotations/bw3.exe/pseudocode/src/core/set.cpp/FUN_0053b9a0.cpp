// Name: FUN_0053b9a0
// Address: 0053b9a0
// Address Range: [[0053b9a0, 0053b9f8]]
// Convention: unknown
// Signature: undefined4 FUN_0053b9a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053b9a0(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x15aeb8)) {
    return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
  }
  _DAT_01d71de0 = "..\\core\\set.cpp";
  _DAT_01d71de4 = 0x14ef;
  FUN_004e4330("CDemonSet::isCameraPanning - no camera selected");
  return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
}
