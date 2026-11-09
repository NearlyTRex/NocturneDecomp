// Name: engine_mini3d.cpp_FUN_004ef020
// Address: 004ef020
// Address Range: [[004ef020, 004ef0ca]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef020(float param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef020(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1 - _DAT_01d76c64) / _DAT_01d76c5c;
  fVar2 = (param_2 - _DAT_01d76c68) / _DAT_01d76c60;
  fVar3 = _DAT_01d76c94 + _DAT_01d76c88 + fVar2 * _DAT_01d76c7c + fVar1 * _DAT_01d76c70;
  fVar4 = _DAT_01d76c98 + _DAT_01d76c8c + fVar2 * _DAT_01d76c80 + fVar1 * _DAT_01d76c74;
  *param_3 = _DAT_01d76c90 + _DAT_01d76c84 + fVar2 * _DAT_01d76c78 + fVar1 * _DAT_01d76c6c;
  param_3[1] = fVar3;
  param_3[2] = fVar4;
  return;
}
