// Name: FUN_005b2290
// Address: 005b2290
// Address Range: [[005b2290, 005b22ea]]
// Convention: unknown
// Signature: void FUN_005b2290(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2290(uint param_1,float param_2)

{
  float fVar1;
  
  if ((float)_DAT_005f12d8 < param_2) {
    fVar1 = (float)_DAT_005f12e0;
    FUN_005b2290(param_1,param_2 * fVar1);
    FUN_005b2290(param_1,param_2 * fVar1);
    return;
  }
  FUN_005b22f0(param_1,param_2);
  return;
}
