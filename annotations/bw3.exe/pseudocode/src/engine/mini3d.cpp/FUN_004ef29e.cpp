// Name: engine_mini3d.cpp_FUN_004ef29e
// Address: 004ef29e
// Address Range: [[004ef29e, 004ef35e]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef29e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef29e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*param_1 - _DAT_01d76c64) * param_1[2]) / _DAT_01d76c5c;
  fVar4 = ((param_1[1] - _DAT_01d76c68) * param_1[2]) / _DAT_01d76c60;
  fVar1 = param_1[2];
  fVar5 = _DAT_01d76c94 + fVar1 * _DAT_01d76c88 + fVar4 * _DAT_01d76c7c + fVar2 * _DAT_01d76c70;
  fVar3 = _DAT_01d76c98 + fVar1 * _DAT_01d76c8c + fVar4 * _DAT_01d76c80 + fVar2 * _DAT_01d76c74;
  *param_2 = _DAT_01d76c90 + fVar1 * _DAT_01d76c84 + fVar4 * _DAT_01d76c78 + fVar2 * _DAT_01d76c6c;
  param_2[1] = fVar5;
  param_2[2] = fVar3;
  return;
}
