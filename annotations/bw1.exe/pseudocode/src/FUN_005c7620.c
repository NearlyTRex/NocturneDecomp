// Name: FUN_005c7620
// Address: 005c7620
// Address Range: [[005c7620, 005c7688]]
// Convention: unknown
// Signature: undefined4 FUN_005c7620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c7620(void)

{
  char in_AL;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ST0 <= (float10)_DAT_006267bc) {
    if ((float10)_DAT_006267c4 < in_ST0) {
      fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
      fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
      fscale((float10)1 + fVar2,fVar1);
    }
    return 0;
  }
  if (in_AL != '\a') {
    FUN_005cbedb((double)in_ST0);
  }
  return 1;
}
