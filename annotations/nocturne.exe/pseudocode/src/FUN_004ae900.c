// Name: FUN_004ae900
// Address: 004ae900
// Address Range: [[004ae900, 004ae954]]
// Convention: unknown
// Signature: undefined4 FUN_004ae900(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ae900(int param_1,int param_2)

{
  if ((float)_DAT_005850a0 < *(float *)(param_2 + 4)) {
    FUN_004b0190(0x01C78C7C,param_1,*(uint *)(param_1 + 0x38));
    return 1;
  }
  FUN_004b01c0(0x01C78C7C,param_1,param_2,*(uint *)(param_1 + 0x38));
  return 1;
}
