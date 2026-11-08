// Name: FUN_004d8c30
// Address: 004d8c30
// Address Range: [[004d8c30, 004d8c8b]]
// Convention: unknown
// Signature: void FUN_004d8c30(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_004d8c30(int param_1,uint param_2,uint *param_3)

{
  byte local_6c [100];
  
  FUN_005a28c0(local_6c,&DAT_005c58ae,*param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 4))(param_1,param_2,local_6c,100);
  FUN_005a5b9c(local_6c,&DAT_005c58b1,param_3);
  return;
}
