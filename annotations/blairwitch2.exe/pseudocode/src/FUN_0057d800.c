// Name: FUN_0057d800
// Address: 0057d800
// Address Range: [[0057d800, 0057d82b]]
// Convention: unknown
// Signature: void FUN_0057d800(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0057d800(int *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}
