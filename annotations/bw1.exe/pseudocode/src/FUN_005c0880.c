// Name: FUN_005c0880
// Address: 005c0880
// Address Range: [[005c0880, 005c08c4]]
// Convention: unknown
// Signature: double FUN_005c0880(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_005c0880(uint param_1,uint param_2)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = (double)FUN_005c3166(param_1,param_2,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005fa9f4;
  }
  return local_18[0];
}
