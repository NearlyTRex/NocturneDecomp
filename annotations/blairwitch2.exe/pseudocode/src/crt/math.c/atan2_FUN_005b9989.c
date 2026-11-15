// Name: crt_math.c_atan2_FUN_005b9989
// Address: 005b9989
// Address Range: [[005b9989, 005b999d]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_atan2_FUN_005b9989(float10 y,float10 x)

#include "nocturne.h"

float10 __fpureg atan2(float10 y,float10 x)

{
  if ((DAT_0061f458 & 1) == 0) {
    x = (float10)fpatan(y,x);
  }
  else {
    FUN_005bfc84();
  }
  return x;
}
