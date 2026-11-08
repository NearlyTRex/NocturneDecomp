// Name: FUN_004ec090
// Address: 004ec090
// Address Range: [[004ec090, 004ec1ac]]
// Convention: unknown
// Signature: bool FUN_004ec090(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004ec090(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0x7149f2ca;
  local_1c = 0;
  for (local_18 = 0; local_18 < *(int *)(0x01E82168 + 0x14d164); local_18 = local_18 + 1) {
    iVar1 = *(int *)(0x01E82168 + local_1c + 0x14d168);
    if ((((ABS(*(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20)) <= (float)_DAT_005e492d) &&
         (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_005e492d)) &&
        (ABS(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28)) <= (float)_DAT_005e492d)) &&
       (iVar1 != param_1)) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x94))(iVar1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1);
        if (iVar2 != 0) {
          iVar3 = FUN_0040c550(iVar1,param_2);
          if (iVar3 != 0) {
            iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x154))(param_1,iVar1,iVar2,&local_20);
            if (iVar2 != 0) {
              *(uint *)(param_1 + 0x1ff60) = 4;
              *(int *)(param_1 + 0x1ff64) = iVar1;
              *(int *)(param_1 + 0x1ff68) = iVar1;
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return *(int *)(param_1 + 0x1ff60) == 4;
}
