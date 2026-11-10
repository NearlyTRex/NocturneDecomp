// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004cf16e
// Address: 004cf16e
// Address Range: [[004cf16e, 004cf19c]]
// Convention: unknown
// Signature: void core_gore_cpp_convertVecFloatToFixed_FUN_004cf16e(float *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_convertVecFloatToFixed_FUN_004cf16e(float *param_1,int *param_2)

{
  *param_2 = (int)ROUND(*param_1 * _DAT_005e0e1c);
  param_2[1] = (int)ROUND(param_1[1] * _DAT_005e0e1c);
  param_2[2] = (int)ROUND(param_1[2] * _DAT_005e0e1c);
  return;
}
