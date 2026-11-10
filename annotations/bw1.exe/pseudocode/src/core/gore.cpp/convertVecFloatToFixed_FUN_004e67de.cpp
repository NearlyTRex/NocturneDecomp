// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004e67de
// Address: 004e67de
// Address Range: [[004e67de, 004e680c]]
// Convention: unknown
// Signature: void core_gore_cpp_convertVecFloatToFixed_FUN_004e67de(float *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_convertVecFloatToFixed_FUN_004e67de(float *param_1,int *param_2)

{
  *param_2 = (int)ROUND(*param_1 * _DAT_006016ac);
  param_2[1] = (int)ROUND(param_1[1] * _DAT_006016ac);
  param_2[2] = (int)ROUND(param_1[2] * _DAT_006016ac);
  return;
}
