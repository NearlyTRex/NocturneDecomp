// Name: FUN_0041e0d0
// Address: 0041e0d0
// Address Range: [[0041e0d0, 0041e12a]]
// Convention: unknown
// Signature: void FUN_0041e0d0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e0d0(uint param_1,float param_2)

{
  float fVar1;
  
  if ((float)_DAT_005d4a98 < param_2) {
    fVar1 = (float)_DAT_005d4aa0;
    FUN_0041e0d0(param_1,param_2 * fVar1);
    FUN_0041e0d0(param_1,param_2 * fVar1);
    return;
  }
  FUN_0041e130(param_1,param_2);
  return;
}
