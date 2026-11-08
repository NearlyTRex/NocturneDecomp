// Name: FUN_005bf356
// Address: 005bf356
// Address Range: [[005bf356, 005bf35d]]
// Convention: unknown
// Signature: undefined1 FUN_005bf356(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_005bf356(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if ((float10)_DAT_0061f464 < in_ST0) {
    fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
    fscale((float10)1 + fVar2,fVar1);
  }
  return 0;
}
