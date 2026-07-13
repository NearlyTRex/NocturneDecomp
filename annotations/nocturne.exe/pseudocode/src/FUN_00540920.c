// Name: FUN_00540920
// Address: 00540920
// Address Range: [[00540920, 00540965]]
// Convention: unknown
// Signature: void FUN_00540920(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00540920(int param_1,int param_2,uint param_3)

{
  if (param_2 == *(int *)(param_1 + 0x1fa94)) {
    *(uint *)(param_1 + 0x1fa94) = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,0);
  }
  FUN_00428100(param_1,param_2,param_3);
  return;
}
