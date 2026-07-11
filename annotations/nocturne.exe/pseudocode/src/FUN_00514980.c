// Name: FUN_00514980
// Address: 00514980
// Address Range: [[00514980, 00514a46]]
// Convention: unknown
// Signature: undefined4 FUN_00514980(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint FUN_00514980(int param_1,float *param_2,float param_3)

{
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_1c = *param_2 - *(float *)(param_1 + 0x100);
  local_18 = param_2[1] - *(float *)(param_1 + 0x104);
  local_14 = param_2[2] - *(float *)(param_1 + 0x108);
  FUN_0044daa0(param_1 + 0x118,&local_10,&local_1c);
  if ((((*(float *)(param_1 + 0x178) <= local_10 + param_3) &&
       (*(float *)(param_1 + 0x17c) <= local_c + param_3)) &&
      (*(float *)(param_1 + 0x180) <= local_8 + param_3)) &&
     (((local_10 - param_3 <= *(float *)(param_1 + 0x184) &&
       (local_c - param_3 <= *(float *)(param_1 + 0x188))) &&
      (local_8 - param_3 <= *(float *)(param_1 + 0x18c))))) {
    return 1;
  }
  return 0;
}
