// Name: crt_math.c_atan2_FUN_00566c81
// Address: 00566c81
// Address Range: [[00566c81, 00566c95]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_atan2_FUN_00566c81(float10 y,float10 x)

#include "nocturne.h"

float10 __fpureg atan2(float10 y,float10 x)

{
  float10 fVar1;
  
  if ((DAT_005c1d98 & 1) == 0) {
    fVar1 = (float10)fpatan(y,x);
  }
  else {
    fVar1 = atan2(x,y);
  }
  return fVar1;
}
