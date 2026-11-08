// Name: FUN_005aa486
// Address: 005aa486
// Address Range: [[005aa486, 005aa48d]]
// Convention: unknown
// Signature: undefined1 FUN_005aa486(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_005aa486(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if ((float10)_DAT_00607b68 < in_ST0) {
    fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
    fscale((float10)1 + fVar2,fVar1);
  }
  return 0;
}
