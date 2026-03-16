// Name: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
// Address Range: [[0060710c, 00607149]]
// Convention: __fpureg_safe
// Signature: double __fpureg_safe crt_math_c_sqrt_FUN_0060710c(double value)

#include "nocturne.h"

double __fpureg_safe sqrt(double value)

{
  double dVar1;
  
  LOCK();
  UNLOCK();
  if (0.0 <= value) {
    dVar1 = SQRT(value);
  }
  else {
    dVar1 = handle_math_error();
  }
  return dVar1;
}
