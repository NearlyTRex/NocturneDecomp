// Name: FUN_0056bdd2
// Address: 0056bdd2
// Address Range: [[0056bdd2, 0056be3a]]
// Convention: unknown
// Signature: undefined4 FUN_0056bdd2(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056bdd2(void)

{
  char in_AL;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ST0 <= (float10)_DAT_005c1d9c) {
    if ((float10)_DAT_005c1da4 < in_ST0) {
      fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
      fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
      fscale((float10)1 + fVar2,fVar1);
    }
    return 0;
  }
  if (in_AL != '\a') {
    FUN_005707db((double)in_ST0);
  }
  return 1;
}
