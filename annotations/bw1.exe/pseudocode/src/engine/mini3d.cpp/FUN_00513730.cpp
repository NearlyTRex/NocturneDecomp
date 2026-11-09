// Name: engine_mini3d.cpp_FUN_00513730
// Address: 00513730
// Address Range: [[00513730, 005137a3]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513730(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513730(float *param_1,float *param_2)

{
  engine_mini3d_cpp_FUN_005124f0();
  *param_2 = param_1[2] * _DAT_01d2adc4 + *param_1 * _DAT_01d2adbc + param_1[1] * _DAT_01d2adc0;
  param_2[1] = param_1[2] * _DAT_01d2add4 + *param_1 * _DAT_01d2adcc + param_1[1] * _DAT_01d2add0;
  param_2[2] = param_1[2] * _DAT_01d2ade4 + *param_1 * _DAT_01d2addc + param_1[1] * _DAT_01d2ade0;
  return;
}
