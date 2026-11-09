// Name: engine_mini3d.cpp_FUN_00513ace
// Address: 00513ace
// Address Range: [[00513ace, 00513b8e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513ace(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513ace(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*param_1 - _DAT_01d224e4) * param_1[2]) / _DAT_01d224dc;
  fVar4 = ((param_1[1] - _DAT_01d224e8) * param_1[2]) / _DAT_01d224e0;
  fVar1 = param_1[2];
  fVar5 = _DAT_01d22514 + fVar1 * _DAT_01d22508 + fVar4 * _DAT_01d224fc + fVar2 * _DAT_01d224f0;
  fVar3 = _DAT_01d22518 + fVar1 * _DAT_01d2250c + fVar4 * _DAT_01d22500 + fVar2 * _DAT_01d224f4;
  *param_2 = _DAT_01d22510 + fVar1 * _DAT_01d22504 + fVar4 * _DAT_01d224f8 + fVar2 * _DAT_01d224ec;
  param_2[1] = fVar5;
  param_2[2] = fVar3;
  return;
}
