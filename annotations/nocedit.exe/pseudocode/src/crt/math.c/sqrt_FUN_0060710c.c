// Name: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
// Address Range: [[0060710c, 00607149]]
// Convention: __fpureg
// Signature: double crt_math.c_sqrt_FUN_0060710c(double value)

#include "nocturne.h"

double __fpureg crt_math_c_sqrt_FUN_0060710c(double value)

{
  double dVar1;
  
  LOCK();
  UNLOCK();
  if (0.0 <= value) {
    dVar1 = SQRT(value);
  }
  else {
    dVar1 = crt_math_c_handle_math_error_FUN_0060c02b();
  }
  return dVar1;
}
