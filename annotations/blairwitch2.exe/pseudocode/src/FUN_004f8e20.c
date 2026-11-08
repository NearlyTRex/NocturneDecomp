// Name: FUN_004f8e20
// Address: 004f8e20
// Address Range: [[004f8e20, 004f8ea4]]
// Convention: unknown
// Signature: void FUN_004f8e20(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8e20(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)_DAT_01d09860 * (float10)_DAT_005ddff0;
  fVar3 = (float10)_DAT_005ddfec;
  fVar4 = (float10)(param_1 >> 0x10 & 0xff) * fVar3;
  fVar5 = (float10)(param_1 >> 8 & 0xff) * fVar3;
  fVar3 = (float10)(param_1 & 0xff) * fVar3;
  uVar1 = FUN_005b7ff0();
  _DAT_01d0d2d8 = (float)fVar4;
  _DAT_01d0d2dc = (float)fVar5;
  _DAT_01d0d2e0 = (float)fVar3;
  _DAT_01d0d2e4 = uVar1 & 0xffffff | (int)ROUND(fVar2) << 0x18;
  return;
}
