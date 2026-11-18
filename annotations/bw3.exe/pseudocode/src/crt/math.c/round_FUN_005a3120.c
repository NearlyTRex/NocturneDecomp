// Name: crt_math.c_round_FUN_005a3120
// Address: 005a3120
// Address Range: [[005a3120, 005a313c]]
// Convention: __fpureg_safe
// Signature: double __fpureg_safe crt_math_c_round_FUN_005a3120(double value)

#include "nocturne.h"

double __fpureg_safe round(double value)

{
  return ROUND(value);
}
