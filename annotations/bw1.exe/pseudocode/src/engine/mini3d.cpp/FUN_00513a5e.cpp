// Name: engine_mini3d.cpp_FUN_00513a5e
// Address: 00513a5e
// Address Range: [[00513a5e, 00513aca]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513a5e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513a5e(float *param_1,float *param_2)

{
  *param_2 = param_1[2] * _DAT_01d22504 + *param_1 * _DAT_01d224ec + param_1[1] * _DAT_01d224f8;
  param_2[1] = param_1[2] * _DAT_01d22508 + *param_1 * _DAT_01d224f0 + param_1[1] * _DAT_01d224fc;
  param_2[2] = param_1[2] * _DAT_01d2250c + *param_1 * _DAT_01d224f4 + param_1[1] * _DAT_01d22500;
  return;
}
