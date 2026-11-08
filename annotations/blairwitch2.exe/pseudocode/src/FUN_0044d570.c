// Name: FUN_0044d570
// Address: 0044d570
// Address Range: [[0044d570, 0044d5f6]]
// Convention: unknown
// Signature: void FUN_0044d570(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d570(int param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  
  *(uint *)(param_1 + 0x2fa8) = param_2;
  if (0x100 < *(int *)(param_1 + 0x1cc0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005cf587;
    uVar1 = FUN_005b7ff0(0,0);
    FUN_0044b600(uVar1,(&DAT_0060a0a4)[(int)ROUND(fVar2)],0);
    return;
  }
  fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005cf57f;
  uVar1 = FUN_005b7ff0(0,0);
  FUN_0044b600(uVar1,(&DAT_0060a084)[(int)ROUND(fVar2)],0);
  return;
}
