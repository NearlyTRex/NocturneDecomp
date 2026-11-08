// Name: FUN_004f3570
// Address: 004f3570
// Address Range: [[004f3570, 004f35f3]]
// Convention: unknown
// Signature: void FUN_004f3570(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f3570(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  _DAT_01d09860 = param_1;
  if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,param_1);
  }
  fVar1 = (float10)param_1 * (float10)_DAT_005ddc3c;
  fVar2 = (float10)param_1 * (float10)_DAT_005ddc44;
  FUN_005b7ff0();
  uVar3 = FUN_005b7ff0((int)ROUND(fVar1));
  DAT_006141d8 = (int)ROUND(fVar2);
  _DAT_01d0d2e4 = (uint)((ulonglong)uVar3 >> 0x20) | (uint)uVar3;
  return;
}
