// Name: engine_mini3d.cpp_FUN_00514aa0
// Address: 00514aa0
// Address Range: [[00514aa0, 00514ad5]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00514aa0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void engine_mini3d_cpp_FUN_00514aa0(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  engine_mini3d_cpp_FUN_00513ca0(param_2,param_1 + 3);
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  return;
}
