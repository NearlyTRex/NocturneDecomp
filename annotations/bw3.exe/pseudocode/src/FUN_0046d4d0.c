// Name: FUN_0046d4d0
// Address: 0046d4d0
// Address Range: [[0046d4d0, 0046d4f4]]
// Convention: unknown
// Signature: void FUN_0046d4d0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d4d0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_005bc583;
  FUN_005a3120();
  FUN_00406bf0((int)ROUND(fVar1));
  return;
}
