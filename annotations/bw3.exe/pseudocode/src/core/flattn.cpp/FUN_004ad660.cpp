// Name: core_flattn.cpp_FUN_004ad660
// Address: 004ad660
// Address Range: [[004ad660, 004ad6dc]]
// Convention: unknown
// Signature: void core_flattn_cpp_FUN_004ad660(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flattn_cpp_FUN_004ad660(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01d1a0b4 + *param_2 * _DAT_01d1a0ac + param_2[1] * _DAT_01d1a0b0 +
             _DAT_01d1a0d0;
  param_1[1] = param_2[2] * _DAT_01d1a0c0 + *param_2 * _DAT_01d1a0b8 + param_2[1] * _DAT_01d1a0bc +
               _DAT_01d1a0d4;
  param_1[2] = param_2[2] * _DAT_01d1a0cc + *param_2 * _DAT_01d1a0c4 + param_2[1] * _DAT_01d1a0c8 +
               _DAT_01d1a0d8;
  return;
}
