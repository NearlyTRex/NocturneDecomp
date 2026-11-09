// Name: engine_mini3d.cpp_FUN_00513850
// Address: 00513850
// Address Range: [[00513850, 005138fa]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513850(float param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513850(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1 - _DAT_01d224e4) / _DAT_01d224dc;
  fVar2 = (param_2 - _DAT_01d224e8) / _DAT_01d224e0;
  fVar3 = _DAT_01d22514 + _DAT_01d22508 + fVar2 * _DAT_01d224fc + fVar1 * _DAT_01d224f0;
  fVar4 = _DAT_01d22518 + _DAT_01d2250c + fVar2 * _DAT_01d22500 + fVar1 * _DAT_01d224f4;
  *param_3 = _DAT_01d22510 + _DAT_01d22504 + fVar2 * _DAT_01d224f8 + fVar1 * _DAT_01d224ec;
  param_3[1] = fVar3;
  param_3[2] = fVar4;
  return;
}
