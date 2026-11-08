// Name: FUN_004f4db0
// Address: 004f4db0
// Address Range: [[004f4db0, 004f4e10]]
// Convention: unknown
// Signature: void FUN_004f4db0(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

void FUN_004f4db0(int param_1,uint param_2,float *param_3)

{
  byte local_6c [100];
  
  FUN_005bfb40(local_6c,&DAT_005e58f1,(double)*param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c,100);
  FUN_005c2cac(local_6c,&DAT_005e58f4,param_3);
  return;
}
