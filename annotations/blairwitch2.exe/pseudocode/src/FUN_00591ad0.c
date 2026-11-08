// Name: FUN_00591ad0
// Address: 00591ad0
// Address Range: [[00591ad0, 00591c0c]]
// Convention: unknown
// Signature: void FUN_00591ad0(float *param_1,float *param_2,int param_3)

#include "nocturne.h"

void FUN_00591ad0(float *param_1,float *param_2,int param_3)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_00449c20(&local_18,&local_24,param_3);
  FUN_00449c20(&local_14,&local_20,param_3 + 8);
  FUN_00449c20(&local_10,&local_1c,param_3 + 4);
  *param_1 = local_1c * local_20 + local_10 * local_18 * local_14;
  param_1[4] = -local_1c * local_14 + local_10 * local_18 * local_20;
  param_1[8] = local_10 * local_24;
  param_1[1] = local_14 * local_24;
  param_1[5] = local_20 * local_24;
  param_1[9] = -local_18;
  param_1[2] = -local_10 * local_20 + local_1c * local_18 * local_14;
  param_1[6] = local_14 * local_10 + local_1c * local_18 * local_20;
  param_1[10] = local_1c * local_24;
  param_1[3] = -(param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1]);
  param_1[7] = -(param_2[2] * param_1[6] + *param_2 * param_1[4] + param_2[1] * param_1[5]);
  param_1[0xb] = -(param_2[2] * param_1[10] + *param_2 * param_1[8] + param_2[1] * param_1[9]);
  return;
}
