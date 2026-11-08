// Name: FUN_0045b550
// Address: 0045b550
// Address Range: [[0045b550, 0045b638]]
// Convention: unknown
// Signature: void FUN_0045b550(float *param_1,int param_2)

#include "nocturne.h"

void FUN_0045b550(float *param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_0045bef0(&local_20,&local_1c,param_2);
  FUN_0045bef0(&local_18,&local_14,param_2 + 8);
  FUN_0045bef0(&local_10,&local_c,param_2 + 4);
  *param_1 = local_c * local_14 + local_10 * local_20 * local_18;
  param_1[1] = -local_c * local_18 + local_10 * local_20 * local_14;
  param_1[2] = local_10 * local_1c;
  param_1[3] = local_18 * local_1c;
  param_1[4] = local_14 * local_1c;
  param_1[5] = -local_20;
  param_1[6] = -local_10 * local_14 + local_c * local_20 * local_18;
  param_1[7] = local_18 * local_10 + local_c * local_20 * local_14;
  param_1[8] = local_c * local_1c;
  return;
}
