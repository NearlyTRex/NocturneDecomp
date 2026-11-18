// Name: crt_math.c_atan2_FUN_005a5cc1
// Address: 005a5cc1
// Address Range: [[005a5cc1, 005a5cd5]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_atan2_FUN_005a5cc1(float10 y,float10 x)

#include "nocturne.h"

float10 __fpureg atan2(float10 y,float10 x)

{
  if ((g_UseSoftwareMath & 1) == 0) {
    x = (float10)fpatan(y,x);
  }
  else {
    FUN_005accb8();
  }
  return x;
}
