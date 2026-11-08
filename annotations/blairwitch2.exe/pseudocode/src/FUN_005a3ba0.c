// Name: FUN_005a3ba0
// Address: 005a3ba0
// Address Range: [[005a3ba0, 005a3be7]]
// Convention: unknown
// Signature: void FUN_005a3ba0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3ba0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4) <= (float)_DAT_005f01fe) {
    *(uint *)(param_1 + 0x25a8) = 0x41200000;
    FUN_00490f80(0x01C38BC0,"schnell_death",1);
    return;
  }
  FUN_0059f800(param_1,param_2);
  return;
}
