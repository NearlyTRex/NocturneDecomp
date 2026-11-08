// Name: FUN_004d8c30
// Address: 004d8c30
// Address Range: [[004d8c30, 004d8c71]]
// Convention: unknown
// Signature: void FUN_004d8c30(int param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

void FUN_004d8c30(int param_1,uint param_2,float param_3)

{
  byte local_68 [100];
  
  FUN_005b7790(local_68,&DAT_005dad96,(double)param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}
