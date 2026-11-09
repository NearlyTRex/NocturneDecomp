// Name: core_actor.cpp_FUN_0040d230
// Address: 0040d230
// Address Range: [[0040d230, 0040d24d]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040d230(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void core_actor_cpp_FUN_0040d230(uint *param_1,uint *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}
