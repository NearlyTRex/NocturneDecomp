// Name: unkafter_flattn.cpp_FUN_004ad6e0
// Address: 004ad6e0
// Address Range: [[004ad6e0, 004ad74a]]
// Convention: unknown
// Signature: void unkafter_flattn_cpp_FUN_004ad6e0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_flattn_cpp_FUN_004ad6e0(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01d1a0b4 + *param_2 * _DAT_01d1a0ac + param_2[1] * _DAT_01d1a0b0;
  param_1[1] = param_2[2] * _DAT_01d1a0c0 + *param_2 * _DAT_01d1a0b8 + param_2[1] * _DAT_01d1a0bc;
  param_1[2] = param_2[2] * _DAT_01d1a0cc + *param_2 * _DAT_01d1a0c4 + param_2[1] * _DAT_01d1a0c8;
  return;
}
