// Name: FUN_004c7da0
// Address: 004c7da0
// Address Range: [[004c7da0, 004c7df4]]
// Convention: unknown
// Signature: undefined4 FUN_004c7da0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c7da0(int param_1,int param_2)

{
  if ((float)_DAT_005d9452 < *(float *)(param_2 + 4)) {
    FUN_004c97e0(0x01CB8284,param_1,*(uint *)(param_1 + 0x40));
    return 1;
  }
  FUN_004c9810(0x01CB8284,param_1,param_2,*(uint *)(param_1 + 0x40));
  return 1;
}
