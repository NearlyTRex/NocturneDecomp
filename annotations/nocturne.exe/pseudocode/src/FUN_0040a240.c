// Name: FUN_0040a240
// Address: 0040a240
// Address Range: [[0040a240, 0040a285]]
// Convention: unknown
// Signature: float * FUN_0040a240(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

float * FUN_0040a240(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  byte local_10 [12];
  
  pfVar1 = (float *)FUN_0044da40(param_1 + 0x3c,local_10,param_3);
  *param_2 = *pfVar1 + *(float *)(param_1 + 0x20);
  param_2[1] = pfVar1[1] + *(float *)(param_1 + 0x24);
  param_2[2] = pfVar1[2] + *(float *)(param_1 + 0x28);
  return param_2;
}
