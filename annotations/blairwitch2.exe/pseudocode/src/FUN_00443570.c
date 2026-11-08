// Name: FUN_00443570
// Address: 00443570
// Address Range: [[00443570, 0044360a]]
// Convention: unknown
// Signature: void FUN_00443570(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443570(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint extraout_EDX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)_DAT_005ce7b6;
  fVar2 = (float10)param_2 * fVar1;
  fVar3 = (float10)param_4 * fVar1;
  fVar4 = (float10)param_3 * fVar1;
  fVar1 = (float10)param_5 * fVar1;
  _DAT_01326d08 = 0;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  DAT_00609f9c = (int)ROUND(fVar3);
  _DAT_01326d04 = (int)ROUND(fVar4);
  _DAT_01326d0c = (int)ROUND(fVar1);
  DAT_00609f98 = (int)ROUND(fVar2);
  DAT_00609fa0 = extraout_EDX;
  if (_DAT_01326d04 == 0) {
    DAT_00609fa0 = 1;
    _DAT_01326d00 = DAT_00609f9c;
    if (DAT_00609f9c == 0) {
      _DAT_01326d10 = _DAT_01326d0c;
      DAT_00609fa0 = 2;
      return;
    }
  }
  return;
}
