// Name: FUN_005a3600
// Address: 005a3600
// Address Range: [[005a3600, 005a3644]]
// Convention: unknown
// Signature: double FUN_005a3600(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_005a3600(uint param_1,uint param_2)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = (double)FUN_005a5fd6(param_1,param_2,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005da6b0;
  }
  return local_18[0];
}
