// Name: crt_math.c_atan2_FUN_006013b1
// Address: 006013b1
// Address Range: [[006013b1, 006013c5]]
// Convention: __fpustack
// Signature: float10 __fpustack crt_math_c_atan2_FUN_006013b1(float10 y,float10 x)

#include "nocturne.h"

float10 __fpustack atan2(float10 y,float10 x)

{
  if ((g_UseSoftwareMath & 1) == 0) {
    x = (float10)fpatan(y,x);
  }
  else {
    FUN_00608e14();
  }
  return x;
}
