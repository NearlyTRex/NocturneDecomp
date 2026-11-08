// Name: FUN_005065f0
// Address: 005065f0
// Address Range: [[005065f0, 0050661b]]
// Convention: unknown
// Signature: void FUN_005065f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005065f0(uint param_1,int param_2)

{
  FUN_00409680(param_1,param_2);
  if (*(float *)(param_2 + 0x34) <= (float)_DAT_005e768d) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0x3f800000;
  return;
}
