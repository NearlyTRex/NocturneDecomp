// Name: FUN_00465da0
// Address: 00465da0
// Address Range: [[00465da0, 00465e26]]
// Convention: unknown
// Signature: void FUN_00465da0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465da0(int param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  
  *(uint *)(param_1 + 0x2fa8) = param_2;
  if (0x100 < *(int *)(param_1 + 0x1cc0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005d92a4;
    uVar1 = FUN_005c03a0(0,0);
    FUN_00463e30(uVar1,(&DAT_00611348)[(int)ROUND(fVar2)],0);
    return;
  }
  fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005d929c;
  uVar1 = FUN_005c03a0(0,0);
  FUN_00463e30(uVar1,(&DAT_00611328)[(int)ROUND(fVar2)],0);
  return;
}
