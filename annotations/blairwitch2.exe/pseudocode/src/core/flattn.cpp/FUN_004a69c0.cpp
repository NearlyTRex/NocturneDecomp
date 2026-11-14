// Name: core_flattn.cpp_FUN_004a69c0
// Address: 004a69c0
// Address Range: [[004a69c0, 004a6a2a]]
// Convention: unknown
// Signature: void core_flattn_cpp_FUN_004a69c0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flattn_cpp_FUN_004a69c0(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01caf5c4 + *param_2 * _DAT_01caf5bc + param_2[1] * _DAT_01caf5c0;
  param_1[1] = param_2[2] * _DAT_01caf5d0 + *param_2 * _DAT_01caf5c8 + param_2[1] * _DAT_01caf5cc;
  param_1[2] = param_2[2] * _DAT_01caf5dc + *param_2 * _DAT_01caf5d4 + param_2[1] * _DAT_01caf5d8;
  return;
}
