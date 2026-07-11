// Name: FUN_004cae20
// Address: 004cae20
// Address Range: [[004cae20, 004cae8d]]
// Convention: unknown
// Signature: void FUN_004cae20(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

void FUN_004cae20(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  *param_5 = 0.0;
  *param_4 = *param_5;
  *param_3 = *param_4;
  param_1 = param_2 * 100 + param_1;
  if ((*(int *)(param_1 + 0x5e8) != 0) && ((*(uint *)(param_1 + 0x5f0) & 0x7fffffff) == 0)) {
    *param_3 = (float)*(int *)(param_1 + 0x634);
    *param_4 = (float)*(int *)(param_1 + 0x638);
    *param_5 = (float)*(int *)(param_1 + 0x63c);
    return;
  }
  return;
}
