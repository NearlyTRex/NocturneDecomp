// Name: crt_math.c_round_FUN_005b7ff0
// Address: 005b7ff0
// Address Range: [[005b7ff0, 005b800c]]
// Convention: __fpureg_safe
// Signature: double __fpureg_safe crt_math_c_round_FUN_005b7ff0(double value)

#include "nocturne.h"

double __fpureg_safe round(double value)

{
  return ROUND(value);
}
