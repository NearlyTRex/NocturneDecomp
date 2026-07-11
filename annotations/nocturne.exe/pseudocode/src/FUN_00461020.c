// Name: FUN_00461020
// Address: 00461020
// Address Range: [[00461020, 00461044]]
// Convention: unknown
// Signature: void FUN_00461020(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461020(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_0057dc95;
  FUN_00563a30();
  FUN_00408370((int)ROUND(fVar1));
  return;
}
