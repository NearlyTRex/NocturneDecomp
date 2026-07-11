// Name: FUN_00452080
// Address: 00452080
// Address Range: [[00452080, 00452106]]
// Convention: unknown
// Signature: void FUN_00452080(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452080(int param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  
  *(uint *)(param_1 + 0x2fa8) = param_2;
  if (0x100 < *(int *)(param_1 + 0x1cc0)) {
    fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_0057c94e;
    uVar1 = FUN_00563a30(0,0);
    FUN_004501c0(uVar1,(&DAT_005ad53c)[(int)ROUND(fVar2)],0);
    return;
  }
  fVar2 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_0057c946;
  uVar1 = FUN_00563a30(0,0);
  FUN_004501c0(uVar1,(&DAT_005ad51c)[(int)ROUND(fVar2)],0);
  return;
}
