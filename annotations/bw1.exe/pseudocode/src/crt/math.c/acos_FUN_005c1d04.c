// Name: crt_math.c_acos_FUN_005c1d04
// Address: 005c1d04
// Address Range: [[005c1d04, 005c1d40]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_005c1d04(double x)

#include "nocturne.h"

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
    cVar1 = FUN_005c7f06();
    if (cVar1 == '\0') {
      fVar2 = atan2(y,fVar2);
      fVar2 = 1.5707963f - fVar2;
    }
  }
  return (double)fVar2;
}
