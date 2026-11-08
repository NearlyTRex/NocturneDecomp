// Name: FUN_005b6a10
// Address: 005b6a10
// Address Range: [[005b6a10, 005b6a49]]
// Convention: unknown
// Signature: void FUN_005b6a10(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6a10(uint param_1,float param_2,uint param_3)

{
  if (param_2 < (float)_DAT_005f1777) {
    return;
  }
  FUN_005b6a50(param_1,param_2,param_3);
  FUN_005b6c90(param_1,param_2);
  return;
}
