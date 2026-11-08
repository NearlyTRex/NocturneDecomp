// Name: FUN_00534b80
// Address: 00534b80
// Address Range: [[00534b80, 00534bd8]]
// Convention: unknown
// Signature: undefined4 FUN_00534b80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00534b80(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x15aeb8)) {
    return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
  }
  _DAT_01d046a0 = "..\\core\\set.cpp";
  _DAT_01d046a4 = 0x149c;
  FUN_004e4500("CDemonSet::isCameraPanning - no camera selected");
  return *(uint *)(param_1 + 0x144 + *(int *)(param_1 + 0x15aeb8) * 0x1a4);
}
