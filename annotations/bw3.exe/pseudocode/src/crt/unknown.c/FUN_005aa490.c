// Name: crt_unknown.c_FUN_005aa490
// Address: 005aa490
// Address Range: [[005aa490, 005aa4f8]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aa490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005aa490(void)

{
  char in_AL;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ST0 <= (float10)_DAT_00607b60) {
    if ((float10)_DAT_00607b68 < in_ST0) {
      fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
      fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
      fscale((float10)1 + fVar2,fVar1);
    }
    return 0;
  }
  if (in_AL != '\a') {
    FUN_005aed4b((double)in_ST0);
  }
  return 1;
}
