// Name: crt_math.c_modf_FUN_00566fb6
// Address: 00566fb6
// Address Range: [[00566fb6, 00566fd5]]
// Convention: unknown
// Signature: double crt_math_c_modf_FUN_00566fb6(undefined4 param_1,double *param_2)

#include "nocturne.h"

double modf(uint param_1,double *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)round((float10)__BITCAST_DOUBLE(CONCAT44(param_2,param_1)));
  *param_2 = (double)fVar1;
  return (double)((float10)__BITCAST_DOUBLE(CONCAT44(param_2,param_1)) - fVar1);
}
