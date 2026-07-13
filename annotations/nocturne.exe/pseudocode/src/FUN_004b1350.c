// Name: FUN_004b1350
// Address: 004b1350
// Address Range: [[004b1350, 004b13a5]]
// Convention: unknown
// Signature: void FUN_004b1350(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004b1350(int *param_1,int param_2,int param_3)

{
  param_1[4] = 0x1e;
  param_1[5] = 0x1e;
  *param_1 = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 8;
  param_1[8] = 1;
  param_1[1] = param_3;
  param_1[6] = param_1[4] * param_1[5];
  param_1[3] = param_3 + -1;
  param_1[2] = param_2 + -1;
  return;
}
