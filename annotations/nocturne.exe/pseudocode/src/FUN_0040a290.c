// Name: FUN_0040a290
// Address: 0040a290
// Address Range: [[0040a290, 0040a2d4]]
// Convention: unknown
// Signature: undefined4 FUN_0040a290(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

uint FUN_0040a290(int param_1,uint param_2,float *param_3)

{
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *param_3 - *(float *)(param_1 + 0x20);
  local_c = param_3[1] - *(float *)(param_1 + 0x24);
  local_8 = param_3[2] - *(float *)(param_1 + 0x28);
  FUN_0044daa0(param_1 + 0x3c,param_2,&local_10);
  return param_2;
}
