// Name: FUN_005a1d60
// Address: 005a1d60
// Address Range: [[005a1d60, 005a1d92]]
// Convention: unknown
// Signature: void FUN_005a1d60(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_005a1d60(int *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x14))(param_1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}
