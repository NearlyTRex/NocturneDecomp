// Name: crt_math.c_round_FUN_005c03a0
// Address: 005c03a0
// Address Range: [[005c03a0, 005c03bc]]
// Convention: __fpureg_safe
// Signature: double __fpureg_safe crt_math_c_round_FUN_005c03a0(double value)

#include "nocturne.h"

double __fpureg_safe round(double value)

{
  return ROUND(value);
}
