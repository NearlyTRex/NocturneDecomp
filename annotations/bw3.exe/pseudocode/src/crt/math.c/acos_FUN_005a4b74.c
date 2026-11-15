// Name: crt_math.c_acos_FUN_005a4b74
// Address: 005a4b74
// Address Range: [[005a4b74, 005a4bb0]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_005a4b74(double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __fpustack_safe acos(double x)

{
  char cVar1;
  float10 y;
  float10 fVar2;
  
  y = (float10)x;
  fVar2 = (float10)1 - y * y;
  if (fVar2 == (float10)0) {
    if (y < fVar2) {
      fVar2 = (float10)3.141592653589793;
    }
    else {
      fVar2 = (float10)0;
    }
  }
  else {
    cVar1 = FUN_005aad76();
    if (cVar1 == '\0') {
      fVar2 = atan2(y,fVar2);
      fVar2 = _DAT_006075d0 - fVar2;
    }
  }
  return (double)fVar2;
}
