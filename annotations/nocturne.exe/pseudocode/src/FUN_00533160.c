// Name: FUN_00533160
// Address: 00533160
// Address Range: [[00533160, 0053320f]]
// Convention: unknown
// Signature: void FUN_00533160(int param_1)

#include "nocturne.h"

void FUN_00533160(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float local_2c [3];
  byte local_20 [12];
  uint local_14;
  uint local_10;
  float local_c;
  float local_8;
  
  FUN_00454510(param_1 + 0x150);
  FUN_00409fc0(param_1);
  local_c = *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x554);
  local_14 = 0;
  local_10 = 0;
  local_8 = local_c;
  pfVar3 = (float *)FUN_0040a200(param_1,local_20,&local_14);
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  if ((float *)(param_1 + 0x2d8) == local_2c) {
    *(uint *)(param_1 + 0x480) = 0;
    return;
  }
  *(float *)(param_1 + 0x2d8) = *(float *)(param_1 + 0x20) - *pfVar3;
  *(float *)(param_1 + 0x2dc) = *(float *)(param_1 + 0x24) - fVar1;
  *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x28) - fVar2;
  *(uint *)(param_1 + 0x480) = 0;
  return;
}
