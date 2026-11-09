// Name: core_actor.cpp_FUN_0040d3c0
// Address: 0040d3c0
// Address Range: [[0040d3c0, 0040d3ec]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040d3c0(float *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_actor_cpp_FUN_0040d3c0(float *param_1,int *param_2)

{
  *param_2 = (int)ROUND(*param_1 * _DAT_005f2160);
  param_2[1] = (int)ROUND(param_1[1] * _DAT_005f2160);
  param_2[2] = (int)ROUND(param_1[2] * _DAT_005f2160);
  return;
}
