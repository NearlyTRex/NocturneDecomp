// Name: engine_mini3d.cpp_FUN_004f33a0
// Address: 004f33a0
// Address Range: [[004f33a0, 004f3432]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f33a0(float param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f33a0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar1 = (float10)_DAT_005c832d;
  fVar2 = (float10)param_1 * fVar1;
  fVar3 = (float10)param_2 * fVar1;
  fVar1 = (float10)param_3 * fVar1;
  _DAT_01d7a6b8 = param_1;
  round();
  round();
  round();
  _DAT_01d7a6bc = param_2;
  _DAT_01d7a6c0 = param_3;
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d7a6c4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
