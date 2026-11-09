// Name: engine_mini3d.cpp_FUN_004f4d7e
// Address: 004f4d7e
// Address Range: [[004f4d7e, 004f4e3e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4d7e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4d7e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*param_1 - _DAT_01d09884) * param_1[2]) / _DAT_01d0987c;
  fVar4 = ((param_1[1] - _DAT_01d09888) * param_1[2]) / _DAT_01d09880;
  fVar1 = param_1[2];
  fVar5 = _DAT_01d098b4 + fVar1 * _DAT_01d098a8 + fVar4 * _DAT_01d0989c + fVar2 * _DAT_01d09890;
  fVar3 = _DAT_01d098b8 + fVar1 * _DAT_01d098ac + fVar4 * _DAT_01d098a0 + fVar2 * _DAT_01d09894;
  *param_2 = _DAT_01d098b0 + fVar1 * _DAT_01d098a4 + fVar4 * _DAT_01d09898 + fVar2 * _DAT_01d0988c;
  param_2[1] = fVar5;
  param_2[2] = fVar3;
  return;
}
