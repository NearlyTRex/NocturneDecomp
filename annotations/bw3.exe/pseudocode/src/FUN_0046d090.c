// Name: FUN_0046d090
// Address: 0046d090
// Address Range: [[0046d090, 0046d0ab]]
// Convention: unknown
// Signature: void FUN_0046d090(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d090(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = ((float10)_DAT_005bc533 / (float10)param_2) * (float10)_DAT_005bc53b;
  FUN_005a3120();
  DAT_005fba44 = (int)ROUND(fVar1);
  return;
}
