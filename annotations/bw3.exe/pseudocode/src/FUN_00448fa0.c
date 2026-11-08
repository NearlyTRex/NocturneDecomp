// Name: FUN_00448fa0
// Address: 00448fa0
// Address Range: [[00448fa0, 00448fc1]]
// Convention: unknown
// Signature: void FUN_00448fa0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448fa0(uint param_1,int param_2)

{
  DAT_007e2a54 = param_1;
  if (param_2 != 0) {
    _DAT_00874584 = param_1;
    return;
  }
  _DAT_00874584 = 0;
  return;
}
