// Name: FUN_005b84d0
// Address: 005b84d0
// Address Range: [[005b84d0, 005b8514]]
// Convention: unknown
// Signature: double FUN_005b84d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_005b84d0(uint param_1,uint param_2)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = (double)FUN_005bada6(param_1,param_2,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005f184c;
  }
  return local_18[0];
}
