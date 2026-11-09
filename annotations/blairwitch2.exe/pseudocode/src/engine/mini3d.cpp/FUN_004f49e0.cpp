// Name: engine_mini3d.cpp_FUN_004f49e0
// Address: 004f49e0
// Address Range: [[004f49e0, 004f4a53]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f49e0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f49e0(float *param_1,float *param_2)

{
  engine_mini3d_cpp_FUN_004f3740();
  *param_2 = param_1[2] * _DAT_01d167b4 + *param_1 * _DAT_01d167ac + param_1[1] * _DAT_01d167b0;
  param_2[1] = param_1[2] * _DAT_01d167c4 + *param_1 * _DAT_01d167bc + param_1[1] * _DAT_01d167c0;
  param_2[2] = param_1[2] * _DAT_01d167d4 + *param_1 * _DAT_01d167cc + param_1[1] * _DAT_01d167d0;
  return;
}
