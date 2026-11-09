// Name: unkafter_flattn.cpp_FUN_004bf910
// Address: 004bf910
// Address Range: [[004bf910, 004bf98c]]
// Convention: unknown
// Signature: void unkafter_flattn_cpp_FUN_004bf910(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_flattn_cpp_FUN_004bf910(float *param_1,float *param_2)

{
  *param_1 = param_2[2] * _DAT_01cc805c + *param_2 * _DAT_01cc8054 + param_2[1] * _DAT_01cc8058 +
             _DAT_01cc8078;
  param_1[1] = param_2[2] * _DAT_01cc8068 + *param_2 * _DAT_01cc8060 + param_2[1] * _DAT_01cc8064 +
               _DAT_01cc807c;
  param_1[2] = param_2[2] * _DAT_01cc8074 + *param_2 * _DAT_01cc806c + param_2[1] * _DAT_01cc8070 +
               _DAT_01cc8080;
  return;
}
