// Name: engine_mini3d.cpp_FUN_004f4d0e
// Address: 004f4d0e
// Address Range: [[004f4d0e, 004f4d7a]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4d0e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4d0e(float *param_1,float *param_2)

{
  *param_2 = param_1[2] * _DAT_01d098a4 + *param_1 * _DAT_01d0988c + param_1[1] * _DAT_01d09898;
  param_2[1] = param_1[2] * _DAT_01d098a8 + *param_1 * _DAT_01d09890 + param_1[1] * _DAT_01d0989c;
  param_2[2] = param_1[2] * _DAT_01d098ac + *param_1 * _DAT_01d09894 + param_1[1] * _DAT_01d098a0;
  return;
}
