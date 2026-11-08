// Name: FUN_0041b410
// Address: 0041b410
// Address Range: [[0041b410, 0041b46a]]
// Convention: unknown
// Signature: void FUN_0041b410(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b410(uint param_1,float param_2)

{
  float fVar1;
  
  if ((float)_DAT_005b7381 < param_2) {
    fVar1 = (float)_DAT_005b7389;
    FUN_0041b410(param_1,param_2 * fVar1);
    FUN_0041b410(param_1,param_2 * fVar1);
    return;
  }
  FUN_0041b470(param_1,param_2);
  return;
}
