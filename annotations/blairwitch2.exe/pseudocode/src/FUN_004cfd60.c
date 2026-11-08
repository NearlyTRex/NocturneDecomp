// Name: FUN_004cfd60
// Address: 004cfd60
// Address Range: [[004cfd60, 004cfe7c]]
// Convention: unknown
// Signature: bool FUN_004cfd60(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004cfd60(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0x7149f2ca;
  local_1c = 0;
  for (local_18 = 0; local_18 < *(int *)(0x01E661B8 + 0x14d164); local_18 = local_18 + 1) {
    iVar1 = *(int *)(0x01E661B8 + local_1c + 0x14d168);
    if ((((ABS(*(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20)) <= (float)_DAT_005d9d74) &&
         (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_005d9d74)) &&
        (ABS(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28)) <= (float)_DAT_005d9d74)) &&
       (iVar1 != param_1)) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x9c))(iVar1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x8c))(iVar1,param_1);
        if (iVar2 != 0) {
          iVar3 = FUN_0040c840(iVar1,param_2);
          if (iVar3 != 0) {
            iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x160))(param_1,iVar1,iVar2,&local_20);
            if (iVar2 != 0) {
              *(uint *)(param_1 + 0x255f0) = 4;
              *(int *)(param_1 + 0x255f4) = iVar1;
              *(int *)(param_1 + 0x255f8) = iVar1;
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return *(int *)(param_1 + 0x255f0) == 4;
}
