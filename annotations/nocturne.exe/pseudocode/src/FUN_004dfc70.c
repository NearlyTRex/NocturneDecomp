// Name: FUN_004dfc70
// Address: 004dfc70
// Address Range: [[004dfc70, 004dfca9]]
// Convention: unknown
// Signature: void FUN_004dfc70(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfc70(uint param_1,float param_2,uint param_3)

{
  if (param_2 < (float)_DAT_0058ad24) {
    return;
  }
  FUN_004dfcb0(param_1,param_2,param_3);
  FUN_004dfea0(param_1,param_2);
  return;
}
