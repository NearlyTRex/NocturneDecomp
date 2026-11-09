// Name: engine_mini3d.cpp_FUN_00517bd0
// Address: 00517bd0
// Address Range: [[00517bd0, 00517c62]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00517bd0(float param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00517bd0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar1 = (float10)_DAT_005e902b;
  fVar2 = (float10)param_1 * fVar1;
  fVar3 = (float10)param_2 * fVar1;
  fVar1 = (float10)param_3 * fVar1;
  _DAT_01d25f38 = param_1;
  round();
  round();
  round();
  _DAT_01d25f3c = param_2;
  _DAT_01d25f40 = param_3;
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d25f44 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
