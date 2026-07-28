// Name: crt_math.c_round_FUN_00563a30
// Address: 00563a30
// Address Range: [[00563a30, 00563a4c]]
// Convention: __fpureg_safe
// Signature: double __fpureg_safe crt_math_c_round_FUN_00563a30(double value)

#include "nocturne.h"

double __fpureg_safe round(double value)

{
  return ROUND(value);
}
