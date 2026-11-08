// Name: FUN_00512320
// Address: 00512320
// Address Range: [[00512320, 005123a3]]
// Convention: unknown
// Signature: void FUN_00512320(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512320(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  _DAT_01d224c0 = param_1;
  if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,param_1);
  }
  fVar1 = (float10)param_1 * (float10)_DAT_005e8c83;
  fVar2 = (float10)param_1 * (float10)_DAT_005e8c8b;
  FUN_005c03a0();
  uVar3 = FUN_005c03a0((int)ROUND(fVar1));
  DAT_0061b4b8 = (int)ROUND(fVar2);
  _DAT_01d25f44 = (uint)((ulonglong)uVar3 >> 0x20) | (uint)uVar3;
  return;
}
