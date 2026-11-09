// Name: engine_mini3d.cpp_FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4baa]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4b00(float param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4b00(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1 - _DAT_01d09884) / _DAT_01d0987c;
  fVar2 = (param_2 - _DAT_01d09888) / _DAT_01d09880;
  fVar3 = _DAT_01d098b4 + _DAT_01d098a8 + fVar2 * _DAT_01d0989c + fVar1 * _DAT_01d09890;
  fVar4 = _DAT_01d098b8 + _DAT_01d098ac + fVar2 * _DAT_01d098a0 + fVar1 * _DAT_01d09894;
  *param_3 = _DAT_01d098b0 + _DAT_01d098a4 + fVar2 * _DAT_01d09898 + fVar1 * _DAT_01d0988c;
  param_3[1] = fVar3;
  param_3[2] = fVar4;
  return;
}
