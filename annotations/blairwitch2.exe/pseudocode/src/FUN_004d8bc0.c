// Name: FUN_004d8bc0
// Address: 004d8bc0
// Address Range: [[004d8bc0, 004d8c20]]
// Convention: unknown
// Signature: void FUN_004d8bc0(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

void FUN_004d8bc0(int param_1,uint param_2,float *param_3)

{
  byte local_6c [100];
  
  FUN_005b7790(local_6c,&DAT_005dad90,(double)*param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c,100);
  FUN_005ba8cc(local_6c,&DAT_005dad93,param_3);
  return;
}
