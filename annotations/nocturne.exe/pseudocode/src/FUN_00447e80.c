// Name: FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f1a]]
// Convention: unknown
// Signature: void FUN_00447e80(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447e80(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_0057bb6b;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_4 * fVar1;
  fVar4 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_5 * fVar1;
  _DAT_012ceb60 = 0;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  DAT_005ad448 = (int)ROUND(fVar3);
  _DAT_012ceb5c = (int)ROUND(fVar4);
  _DAT_012ceb64 = (int)ROUND(fVar1);
  DAT_005ad444 = (int)ROUND(fVar2);
  DAT_005ad44c = extraout_EDX;
  if (_DAT_012ceb5c == 0) {
    DAT_005ad44c = 1;
    _DAT_012ceb58 = DAT_005ad448;
    if (DAT_005ad448 == 0) {
      _DAT_012ceb68 = _DAT_012ceb64;
      DAT_005ad44c = 2;
      return;
    }
  }
  return;
}
