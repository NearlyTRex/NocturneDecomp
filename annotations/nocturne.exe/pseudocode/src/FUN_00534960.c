// Name: FUN_00534960
// Address: 00534960
// Address Range: [[00534960, 00534a29]]
// Convention: unknown
// Signature: float FUN_00534960(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float FUN_00534960(int param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = 1.01;
  iVar1 = param_1 + 0x168;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x164) * 2; iVar2 = iVar2 + 1) {
    local_14 = (float)FUN_0046c620(iVar1,param_2,param_3);
    if (((0.0 <= local_14) && (local_14 < local_18)) && (local_14 <= 1.0)) {
      local_24 = -*(float *)(iVar1 + 0x24);
      local_20 = -*(float *)(iVar1 + 0x28);
      local_1c = -*(float *)(iVar1 + 0x2c);
      local_18 = local_14;
      if (param_4 != &local_24) {
        *param_4 = local_24;
        param_4[1] = local_20;
        param_4[2] = local_1c;
      }
    }
    iVar1 = iVar1 + 0x38;
  }
  return local_18;
}
