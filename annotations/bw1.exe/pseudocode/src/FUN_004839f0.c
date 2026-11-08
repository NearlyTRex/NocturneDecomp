// Name: FUN_004839f0
// Address: 004839f0
// Address Range: [[004839f0, 00483a14]]
// Convention: unknown
// Signature: void FUN_004839f0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004839f0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_005db3b4;
  FUN_005c03a0();
  FUN_004ffa50((int)ROUND(fVar1));
  return;
}
