// Name: FUN_004839b0
// Address: 004839b0
// Address Range: [[004839b0, 004839cb]]
// Convention: unknown
// Signature: void FUN_004839b0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004839b0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = ((float10)_DAT_005db39c / (float10)param_2) * (float10)_DAT_005db3a4;
  FUN_005c03a0();
  DAT_0061b4c4 = (int)ROUND(fVar1);
  return;
}
