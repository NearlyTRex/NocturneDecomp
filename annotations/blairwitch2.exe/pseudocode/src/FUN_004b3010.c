// Name: FUN_004b3010
// Address: 004b3010
// Address Range: [[004b3010, 004b30c6]]
// Convention: unknown
// Signature: void FUN_004b3010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3010(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_0058e9e0();
  iVar2 = (iVar1 - *(int *)(param_1 + 0x27c)) / 0x12;
  *(int *)(param_1 + 0x280) = iVar2;
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0x280) = 0;
  }
  *(int *)(param_1 + 0x27c) = iVar1;
  if (0x4000 < *(int *)(param_1 + 0x280)) {
    *(uint *)(param_1 + 0x280) = 0x4000;
  }
  iVar1 = _DAT_01cb80d4;
  fVar3 = (float10)*(int *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x208);
  FUN_005b7ff0();
  *(int *)(param_1 + 0x280) = (int)ROUND(fVar3);
  if (iVar1 != 0) {
    fVar3 = ((float10)_DAT_005d72ef / (float10)_DAT_006164a0) * (float10)*(float *)(param_1 + 0x208)
    ;
    FUN_005b7ff0();
    *(int *)(param_1 + 0x280) = (int)ROUND(fVar3);
  }
  _DAT_01c2a370 = *(uint *)(param_1 + 0x280);
  *(float *)(param_1 + 0x284) = (float)*(int *)(param_1 + 0x280) * (float)_DAT_005d72f3;
  return;
}
