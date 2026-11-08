// Name: FUN_0046b8f0
// Address: 0046b8f0
// Address Range: [[0046b8f0, 0046b914]]
// Convention: unknown
// Signature: void FUN_0046b8f0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b8f0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_005d15f3;
  FUN_005b7ff0();
  FUN_00406da0((int)ROUND(fVar1));
  return;
}
