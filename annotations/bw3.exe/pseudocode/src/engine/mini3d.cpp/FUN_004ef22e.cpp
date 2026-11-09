// Name: engine_mini3d.cpp_FUN_004ef22e
// Address: 004ef22e
// Address Range: [[004ef22e, 004ef29a]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef22e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef22e(float *param_1,float *param_2)

{
  *param_2 = param_1[2] * _DAT_01d76c84 + *param_1 * _DAT_01d76c6c + param_1[1] * _DAT_01d76c78;
  param_2[1] = param_1[2] * _DAT_01d76c88 + *param_1 * _DAT_01d76c70 + param_1[1] * _DAT_01d76c7c;
  param_2[2] = param_1[2] * _DAT_01d76c8c + *param_1 * _DAT_01d76c74 + param_1[1] * _DAT_01d76c80;
  return;
}
