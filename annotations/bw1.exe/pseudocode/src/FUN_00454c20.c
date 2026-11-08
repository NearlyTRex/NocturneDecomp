// Name: FUN_00454c20
// Address: 00454c20
// Address Range: [[00454c20, 00454cba]]
// Convention: unknown
// Signature: void FUN_00454c20(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454c20(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005d7a7f;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_4 * fVar1;
  fVar4 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_5 * fVar1;
  _DAT_01342208 = 0;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  DAT_00611228 = (int)ROUND(fVar3);
  _DAT_01342204 = (int)ROUND(fVar4);
  _DAT_0134220c = (int)ROUND(fVar1);
  DAT_00611224 = (int)ROUND(fVar2);
  DAT_0061122c = extraout_EDX;
  if (_DAT_01342204 == 0) {
    DAT_0061122c = 1;
    _DAT_01342200 = DAT_00611228;
    if (DAT_00611228 == 0) {
      _DAT_01342210 = _DAT_0134220c;
      DAT_0061122c = 2;
      return;
    }
  }
  return;
}
