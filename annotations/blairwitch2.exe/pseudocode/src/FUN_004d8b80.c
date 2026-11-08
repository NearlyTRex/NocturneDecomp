// Name: FUN_004d8b80
// Address: 004d8b80
// Address Range: [[004d8b80, 004d8bbc]]
// Convention: unknown
// Signature: void FUN_004d8b80(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004d8b80(int param_1,uint param_2,uint param_3)

{
  byte local_68 [100];
  
  FUN_005b7790(local_68,&DAT_005dad8d,param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}
