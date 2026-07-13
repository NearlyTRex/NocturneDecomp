// Name: FUN_0056bdc8
// Address: 0056bdc8
// Address Range: [[0056bdc8, 0056bdcf]]
// Convention: unknown
// Signature: undefined1 FUN_0056bdc8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0056bdc8(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if ((float10)_DAT_005c1da4 < in_ST0) {
    fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
    fscale((float10)1 + fVar2,fVar1);
  }
  return 0;
}
