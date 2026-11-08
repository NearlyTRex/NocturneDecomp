// Name: FUN_00483df0
// Address: 00483df0
// Address Range: [[00483df0, 00483e14]]
// Convention: unknown
// Signature: void FUN_00483df0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483df0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_005db3ec;
  FUN_005c03a0();
  FUN_00406bd0((int)ROUND(fVar1));
  return;
}
