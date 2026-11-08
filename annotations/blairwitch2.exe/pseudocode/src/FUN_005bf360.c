// Name: FUN_005bf360
// Address: 005bf360
// Address Range: [[005bf360, 005bf3c8]]
// Convention: unknown
// Signature: undefined4 FUN_005bf360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005bf360(void)

{
  char in_AL;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ST0 <= (float10)_DAT_0061f45c) {
    if ((float10)_DAT_0061f464 < in_ST0) {
      fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
      fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
      fscale((float10)1 + fVar2,fVar1);
    }
    return 0;
  }
  if (in_AL != '\a') {
    FUN_005c3bdb((double)in_ST0);
  }
  return 1;
}
