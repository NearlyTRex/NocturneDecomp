// Name: FUN_00460c40
// Address: 00460c40
// Address Range: [[00460c40, 00460c64]]
// Convention: unknown
// Signature: void FUN_00460c40(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460c40(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 * (float10)_DAT_0057dc5d;
  FUN_00563a30();
  FUN_004c69d0((int)ROUND(fVar1));
  return;
}
