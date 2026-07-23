// Name: crt_math.c_floor_FUN_005648c0
// Address: 005648c0
// Address Range: [[005648c0, 00564904]]
// Convention: unknown
// Signature: double crt_math_c_floor_FUN_005648c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

double floor(uint param_1,uint param_2)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = (double)modf(param_1,param_2,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + -1;
  }
  return local_18[0];
}
