// Name: FUN_005056f0
// Address: 005056f0
// Address Range: [[005056f0, 0050575d]]
// Convention: unknown
// Signature: void FUN_005056f0(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

void FUN_005056f0(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  *param_5 = 0.0;
  *param_4 = *param_5;
  *param_3 = *param_4;
  param_1 = param_2 * 100 + param_1;
  if ((*(int *)(param_1 + 0x5f0) != 0) && ((*(uint *)(param_1 + 0x5f8) & 0x7fffffff) == 0)) {
    *param_3 = (float)*(int *)(param_1 + 0x63c);
    *param_4 = (float)*(int *)(param_1 + 0x640);
    *param_5 = (float)*(int *)(param_1 + 0x644);
    return;
  }
  return;
}
