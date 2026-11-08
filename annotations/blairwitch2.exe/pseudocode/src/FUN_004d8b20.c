// Name: FUN_004d8b20
// Address: 004d8b20
// Address Range: [[004d8b20, 004d8b7b]]
// Convention: unknown
// Signature: void FUN_004d8b20(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_004d8b20(int param_1,uint param_2,uint *param_3)

{
  byte local_6c [100];
  
  FUN_005b7790(local_6c,&DAT_005dad87,*param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c,100);
  FUN_005ba8cc(local_6c,&DAT_005dad8a,param_3);
  return;
}
