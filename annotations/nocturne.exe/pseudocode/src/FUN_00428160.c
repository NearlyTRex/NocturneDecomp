// Name: FUN_00428160
// Address: 00428160
// Address Range: [[00428160, 0042825e]]
// Convention: unknown
// Signature: undefined4 FUN_00428160(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00428160(int param_1,int param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_2 != 0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x10c))(param_1,local_20), iVar1 != 0)) {
    pfVar2 = (float *)FUN_0040a240(param_2,local_44,param_3);
    local_2c = local_20[0] - *pfVar2;
    local_24 = local_18 - pfVar2[2];
    local_28 = 0.0;
    local_10 = SQRT(local_24 * local_24 + local_2c * local_2c);
    local_14 = *(float *)(0x01C775EC + 0x264) * (float)_DAT_0057a032;
    if (local_14 < local_10) {
      local_c = local_14 / local_10;
      local_2c = local_2c * local_c;
      local_28 = local_c * 0.0;
      local_24 = local_24 * local_c;
    }
    local_38 = *(float *)(param_2 + 0x20) + local_2c;
    local_34 = *(float *)(param_2 + 0x24) + local_28;
    local_30 = *(float *)(param_2 + 0x28) + local_24;
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x60))(param_2,&local_38,param_2 + 0x30);
    return 1;
  }
  return 0;
}
