// Name: FUN_0042be20
// Address: 0042be20
// Address Range: [[0042be20, 0042bf4b]]
// Convention: unknown
// Signature: void FUN_0042be20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042be20(int param_1)

{
  int iVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0xc284) == 0) {
    iVar1 = *(int *)(param_1 + 0xc1e8);
    if (iVar1 == 0) {
      iVar1 = FUN_0040cc60(0,3,1);
      FUN_005247c0(param_1 + 0x158,iVar1 + 3);
      return;
    }
    local_38 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_34 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_30 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_2c != &local_38) {
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
    }
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
    if ((_DAT_005fd46c <= SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28)) ||
       (iVar1 = FUN_0040cc60(0,3), iVar1 != 1)) {
      iVar1 = FUN_0040cc60(0,3,1);
      iVar1 = iVar1 + 7;
    }
    else {
      iVar1 = FUN_0040cc60(0,3,1);
      iVar1 = iVar1 + 3;
    }
  }
  else {
    iVar1 = FUN_0040cc60(0,3,1);
    iVar1 = iVar1 + 7;
  }
  FUN_005247c0(param_1 + 0x158,iVar1);
  return;
}
