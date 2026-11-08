// Name: FUN_004fa450
// Address: 004fa450
// Address Range: [[004fa450, 004fa489]]
// Convention: unknown
// Signature: void FUN_004fa450(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa450(uint param_1,float param_2,uint param_3)

{
  if (param_2 < (float)_DAT_005c96a3) {
    return;
  }
  FUN_004fa490(param_1,param_2,param_3);
  FUN_004fa6d0(param_1,param_2);
  return;
}
