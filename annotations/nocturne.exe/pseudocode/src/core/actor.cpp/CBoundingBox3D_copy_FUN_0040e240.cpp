// Name: core_actor.cpp_CBoundingBox3D_copy_FUN_0040e240
// Address: 0040e240
// Address Range: [[0040e240, 0040e285]]
// Convention: unknown
// Signature: undefined4 * core_actor_cpp_CBoundingBox3D_copy_FUN_0040e240(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_actor_cpp_CBoundingBox3D_copy_FUN_0040e240(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}
