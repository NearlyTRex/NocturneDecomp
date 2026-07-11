// Name: FUN_005648c0
// Address: 005648c0
// Address Range: [[005648c0, 00564904]]
// Convention: unknown
// Signature: double FUN_005648c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_005648c0(uint param_1,uint param_2)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = (double)FUN_00566fb6(param_1,param_2,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005989b0;
  }
  return local_18[0];
}
