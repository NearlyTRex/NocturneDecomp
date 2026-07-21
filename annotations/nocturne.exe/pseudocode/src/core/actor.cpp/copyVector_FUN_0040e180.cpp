// Name: core_actor.cpp_copyVector_FUN_0040e180
// Address: 0040e180
// Address Range: [[0040e180, 0040e19d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_copyVector_FUN_0040e180(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_copyVector_FUN_0040e180(uint *param_1,uint *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}
