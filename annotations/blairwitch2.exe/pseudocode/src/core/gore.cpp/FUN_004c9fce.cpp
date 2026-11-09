// Name: core_gore.cpp_FUN_004c9fce
// Address: 004c9fce
// Address Range: [[004c9fce, 004c9ffc]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c9fce(float *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c9fce(float *param_1,int *param_2)

{
  *param_2 = (int)ROUND(*param_1 * _DAT_005f7bac);
  param_2[1] = (int)ROUND(param_1[1] * _DAT_005f7bac);
  param_2[2] = (int)ROUND(param_1[2] * _DAT_005f7bac);
  return;
}
