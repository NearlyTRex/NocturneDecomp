// Name: core_flattn.cpp_FUN_004bf990
// Address: 004bf990
// Address Range: [[004bf990, 004bf9fa]]
// Convention: unknown
// Signature: void core_flattn_cpp_FUN_004bf990(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flattn_cpp_FUN_004bf990(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01cc805c + *param_2 * _DAT_01cc8054 + param_2[1] * _DAT_01cc8058;
  param_1[1] = param_2[2] * _DAT_01cc8068 + *param_2 * _DAT_01cc8060 + param_2[1] * _DAT_01cc8064;
  param_1[2] = param_2[2] * _DAT_01cc8074 + *param_2 * _DAT_01cc806c + param_2[1] * _DAT_01cc8070;
  return;
}
