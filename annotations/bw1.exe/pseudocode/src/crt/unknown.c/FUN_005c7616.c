// Name: crt_unknown.c_FUN_005c7616
// Address: 005c7616
// Address Range: [[005c7616, 005c761d]]
// Convention: unknown
// Signature: undefined1 crt_unknown_c_FUN_005c7616(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_005c7616(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if ((float10)_DAT_006267c4 < in_ST0) {
    fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
    fscale((float10)1 + fVar2,fVar1);
  }
  return 0;
}
