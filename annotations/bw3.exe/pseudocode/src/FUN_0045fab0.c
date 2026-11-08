// Name: FUN_0045fab0
// Address: 0045fab0
// Address Range: [[0045fab0, 0045fb36]]
// Convention: unknown
// Signature: void FUN_0045fab0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045fab0(int param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  
  *(uint *)(param_1 + 0x2fa8) = param_2;
  if (0x100 < *(int *)(param_1 + 0x1cc0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005bb5bc;
    uVar1 = FUN_005a3120(0,0);
    FUN_0045db40(uVar1,(&DAT_005f18fc)[(int)ROUND(fVar2)],0);
    return;
  }
  fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005bb5b4;
  uVar1 = FUN_005a3120(0,0);
  FUN_0045db40(uVar1,(&DAT_005f18dc)[(int)ROUND(fVar2)],0);
  return;
}
