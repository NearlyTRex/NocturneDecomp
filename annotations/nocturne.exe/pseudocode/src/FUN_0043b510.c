// Name: FUN_0043b510
// Address: 0043b510
// Address Range: [[0043b510, 0043b5a0]]
// Convention: unknown
// Signature: float FUN_0043b510(float param_1,float param_2)

#include "nocturne.h"

float FUN_0043b510(float param_1,float param_2)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    dVar1 = (double)FUN_005648c0((double)(-param_1 / param_2));
    param_1 = (float)dVar1 * param_2 + param_1;
    if (param_1 < 0.0) {
      param_1 = param_1 + param_2;
    }
    return param_1;
  }
  dVar1 = (double)FUN_005648c0((double)(param_1 / param_2));
  return param_1 - (float)dVar1 * param_2;
}
