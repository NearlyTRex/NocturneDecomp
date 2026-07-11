// Name: FUN_0044d1f0
// Address: 0044d1f0
// Address Range: [[0044d1f0, 0044d2c2]]
// Convention: unknown
// Signature: undefined4 FUN_0044d1f0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

uint FUN_0044d1f0(int param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [12];
  
  local_24 = *(float *)(param_1 + 0x24) - *param_2;
  local_20 = *(float *)(param_1 + 0x28) - param_2[1];
  local_1c = *(float *)(param_1 + 0x2c) - param_2[2];
  pfVar1 = (float *)FUN_0044daa0(param_3,local_18,&local_24);
  if (&local_24 != pfVar1) {
    local_24 = *pfVar1;
    local_20 = pfVar1[1];
    local_1c = pfVar1[2];
  }
  if ((((*param_4 <= local_24 + *(float *)(param_1 + 0x30)) &&
       (param_4[1] <= local_20 + *(float *)(param_1 + 0x30))) &&
      (param_4[2] <= local_1c + *(float *)(param_1 + 0x30))) &&
     (((local_24 - *(float *)(param_1 + 0x30) <= *param_5 &&
       (local_20 - *(float *)(param_1 + 0x30) <= param_5[1])) &&
      (local_1c - *(float *)(param_1 + 0x30) <= param_5[2])))) {
    return 1;
  }
  return 0;
}
