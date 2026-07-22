// Name: FUN_00411940
// Address: 00411940
// Address Range: [[00411940, 004119d0]]
// Convention: unknown
// Signature: float FUN_00411940(float param_1,float param_2)

#include "nocturne.h"

float FUN_00411940(float param_1,float param_2)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    dVar1 = (double)floor((double)(-param_1 / param_2));
    param_1 = (float)dVar1 * param_2 + param_1;
    if (param_1 < 0.0) {
      param_1 = param_1 + param_2;
    }
    return param_1;
  }
  dVar1 = (double)floor((double)(param_1 / param_2));
  return param_1 - (float)dVar1 * param_2;
}
