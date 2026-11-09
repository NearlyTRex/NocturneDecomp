// Name: engine_mini3d.cpp_FUN_004f4730
// Address: 004f4730
// Address Range: [[004f4730, 004f47db]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4730(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4730(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  engine_mini3d_cpp_FUN_004f3740();
  fVar1 = param_1[1] - *(float *)(_DAT_01d09918 + 0x28);
  fVar2 = fVar1 * _DAT_01d167bc;
  fVar5 = *param_1 - *(float *)(_DAT_01d09918 + 0x24);
  fVar6 = fVar5 * _DAT_01d167b0;
  fVar5 = fVar5 * _DAT_01d167ac;
  fVar1 = fVar1 * _DAT_01d167c0;
  fVar3 = param_1[2] - *(float *)(_DAT_01d09918 + 0x2c);
  fVar4 = fVar3 * _DAT_01d167cc;
  param_2[2] = 1.0;
  fVar3 = fVar3 * _DAT_01d167d0;
  param_2[4] = 0.0;
  fVar4 = fVar4 + fVar5 + fVar2;
  fVar3 = fVar1 + fVar6 + fVar3;
  *param_2 = fVar4;
  fVar1 = _DAT_01d098c8;
  fVar4 = fVar4 * _DAT_01d098c8;
  param_2[1] = fVar3;
  param_2[3] = 1.0;
  fVar1 = _DAT_01d09888 + fVar3 * fVar1;
  param_2[5] = _DAT_01d09884 + fVar4;
  param_2[6] = fVar1;
  return;
}
