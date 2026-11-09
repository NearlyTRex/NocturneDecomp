// Name: unkafter_flattn.cpp_FUN_004a6940
// Address: 004a6940
// Address Range: [[004a6940, 004a69bc]]
// Convention: unknown
// Signature: void unkafter_flattn_cpp_FUN_004a6940(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_flattn_cpp_FUN_004a6940(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01caf5c4 + *param_2 * _DAT_01caf5bc + param_2[1] * _DAT_01caf5c0 +
             _DAT_01caf5e0;
  param_1[1] = param_2[2] * _DAT_01caf5d0 + *param_2 * _DAT_01caf5c8 + param_2[1] * _DAT_01caf5cc +
               _DAT_01caf5e4;
  param_1[2] = param_2[2] * _DAT_01caf5dc + *param_2 * _DAT_01caf5d4 + param_2[1] * _DAT_01caf5d8 +
               _DAT_01caf5e8;
  return;
}
