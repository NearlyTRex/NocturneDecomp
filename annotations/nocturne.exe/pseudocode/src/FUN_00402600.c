// Name: FUN_00402600
// Address: 00402600
// Address Range: [[00402600, 00402653]]
// Convention: unknown
// Signature: void FUN_00402600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402600(uint param_1,uint param_2,uint param_3)

{
  if (DAT_005acaa4 != 0) {
    FUN_00402290(param_1,param_2,param_3,_DAT_01c00c60,_DAT_01c00c64);
    return;
  }
  FUN_00402320(param_1,param_2,param_3,_DAT_01c00c60,_DAT_01c00c64);
  return;
}
