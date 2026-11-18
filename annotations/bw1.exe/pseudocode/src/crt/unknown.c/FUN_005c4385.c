// Name: crt_unknown.c_FUN_005c4385
// Address: 005c4385
// Address Range: [[005c4385, 005c4403]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4385(double *param_1,float *param_2)

#include "nocturne.h"

uint FUN_005c4385(double *param_1,float *param_2)

{
  if ((((((ulonglong)*param_1 & 0x7fffffff00000000) != 0) || (*(int *)param_1 != 0)) &&
      ((*param_1 <= 0.0 || ((3.4028234660000002e+38 < *param_1 || (*param_1 < 1.175494351e-38)))))) &&
     ((*param_1 < -3.4028234660000002e+38 || (-1.175494351e-38 < *param_1)))) {
    return 1;
  }
  *param_2 = (float)*param_1;
  return 0;
}
