// Name: FUN_004e6a50
// Address: 004e6a50
// Address Range: [[004e6a50, 004e6abd]]
// Convention: unknown
// Signature: void FUN_004e6a50(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

void FUN_004e6a50(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  *param_5 = 0.0;
  *param_4 = *param_5;
  *param_3 = *param_4;
  param_1 = param_2 * 100 + param_1;
  if ((*(int *)(param_1 + 0x74c) != 0) && ((*(uint *)(param_1 + 0x754) & 0x7fffffff) == 0)) {
    *param_3 = (float)*(int *)(param_1 + 0x798);
    *param_4 = (float)*(int *)(param_1 + 0x79c);
    *param_5 = (float)*(int *)(param_1 + 0x7a0);
    return;
  }
  return;
}
