// Name: crt_math.c_ceil_FUN_00567121
// Address: 00567121
// Address Range: [[00567121, 00567151]]
// Convention: unknown
// Signature: double crt_math_c_ceil_FUN_00567121(double param_1)

#include "nocturne.h"

double ceil(double param_1)

{
  ulonglong local_c;
  
  local_c = (double)floor(-param_1);
  return -local_c;
}
