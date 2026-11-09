// Name: engine_mini3d.cpp_FUN_00517c70
// Address: 00517c70
// Address Range: [[00517c70, 00517d4c]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00517c70(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00517c70(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  _DAT_01d25f38 = param_2;
  _DAT_01d25f3c = param_3;
  _DAT_01d25f40 = param_4;
  if (_DAT_01d224c0 != param_1) {
    _DAT_01d224c0 = param_1;
    if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,param_1);
    }
  }
  fVar1 = (float10)_DAT_005e902f;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_4 * fVar1;
  round();
  round();
  round();
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d25f44 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
