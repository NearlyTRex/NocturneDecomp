// Name: FUN_004e7950
// Address: 004e7950
// Address Range: [[004e7950, 004e797b]]
// Convention: unknown
// Signature: void FUN_004e7950(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7950(uint param_1,int param_2)

{
  FUN_00409830(param_1,param_2);
  if (*(float *)(param_2 + 0x34) <= (float)_DAT_005dc73d) {
    return;
  }
  *(uint *)(param_2 + 0x50) = 0x3f800000;
  return;
}
