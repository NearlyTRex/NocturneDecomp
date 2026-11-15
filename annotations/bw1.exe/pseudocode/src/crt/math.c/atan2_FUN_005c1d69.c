// Name: crt_math.c_atan2_FUN_005c1d69
// Address: 005c1d69
// Address Range: [[005c1d69, 005c1d7d]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_atan2_FUN_005c1d69(float10 y,float10 x)

#include "nocturne.h"

float10 __fpureg atan2(float10 y,float10 x)

{
  if ((DAT_006267b8 & 1) == 0) {
    x = (float10)fpatan(y,x);
  }
  else {
    FUN_005c7f44();
  }
  return x;
}
