// Name: engine_mini3d.cpp_FUN_004f5d50
// Address: 004f5d50
// Address Range: [[004f5d50, 004f5d85]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f5d50(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void engine_mini3d_cpp_FUN_004f5d50(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  engine_mini3d_cpp_FUN_004f4f50(param_2,param_1 + 3);
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  return;
}
