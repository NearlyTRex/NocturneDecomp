// Name: FUN_0057d830
// Address: 0057d830
// Address Range: [[0057d830, 0057d85b]]
// Convention: unknown
// Signature: void FUN_0057d830(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0057d830(int *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}
