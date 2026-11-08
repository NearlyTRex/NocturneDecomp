// Name: FUN_004f3440
// Address: 004f3440
// Address Range: [[004f3440, 004f351c]]
// Convention: unknown
// Signature: void FUN_004f3440(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f3440(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  _DAT_01d7a6b8 = param_2;
  _DAT_01d7a6bc = param_3;
  _DAT_01d7a6c0 = param_4;
  if (_DAT_01d76c40 != param_1) {
    _DAT_01d76c40 = param_1;
    if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,param_1);
    }
  }
  fVar1 = (float10)_DAT_005c8331;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_4 * fVar1;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  uVar4 = FUN_005a3120((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d7a6c4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
