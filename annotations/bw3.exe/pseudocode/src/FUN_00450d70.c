// Name: FUN_00450d70
// Address: 00450d70
// Address Range: [[00450d70, 00450e0a]]
// Convention: unknown
// Signature: void FUN_00450d70(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450d70(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005ba0e6;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_4 * fVar1;
  fVar4 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_5 * fVar1;
  _DAT_0135eab8 = 0;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  DAT_005f17dc = (int)ROUND(fVar3);
  _DAT_0135eab4 = (int)ROUND(fVar4);
  _DAT_0135eabc = (int)ROUND(fVar1);
  DAT_005f17d8 = (int)ROUND(fVar2);
  DAT_005f17e0 = extraout_EDX;
  if (_DAT_0135eab4 == 0) {
    DAT_005f17e0 = 1;
    _DAT_0135eab0 = DAT_005f17dc;
    if (DAT_005f17dc == 0) {
      _DAT_0135eac0 = _DAT_0135eabc;
      DAT_005f17e0 = 2;
      return;
    }
  }
  return;
}
