// Name: FUN_004f3520
// Address: 004f3520
// Address Range: [[004f3520, 004f35a4]]
// Convention: unknown
// Signature: void FUN_004f3520(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f3520(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)_DAT_01d76c40 * (float10)_DAT_005c8339;
  fVar3 = (float10)_DAT_005c8335;
  fVar4 = (float10)(param_1 >> 0x10 & 0xff) * fVar3;
  fVar5 = (float10)(param_1 >> 8 & 0xff) * fVar3;
  fVar3 = (float10)(param_1 & 0xff) * fVar3;
  uVar1 = FUN_005a3120();
  _DAT_01d7a6b8 = (float)fVar4;
  _DAT_01d7a6bc = (float)fVar5;
  _DAT_01d7a6c0 = (float)fVar3;
  _DAT_01d7a6c4 = uVar1 & 0xffffff | (int)ROUND(fVar2) << 0x18;
  return;
}
