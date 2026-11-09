// Name: engine_mini3d.cpp_FUN_004eef00
// Address: 004eef00
// Address Range: [[004eef00, 004eef73]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004eef00(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004eef00(float *param_1,float *param_2)

{
  engine_mini3d_cpp_FUN_004edcc0();
  *param_2 = param_1[2] * _DAT_01d7f544 + *param_1 * _DAT_01d7f53c + param_1[1] * _DAT_01d7f540;
  param_2[1] = param_1[2] * _DAT_01d7f554 + *param_1 * _DAT_01d7f54c + param_1[1] * _DAT_01d7f550;
  param_2[2] = param_1[2] * _DAT_01d7f564 + *param_1 * _DAT_01d7f55c + param_1[1] * _DAT_01d7f560;
  return;
}
