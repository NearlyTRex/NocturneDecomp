// Name: FUN_004d8c90
// Address: 004d8c90
// Address Range: [[004d8c90, 004d8ccc]]
// Convention: unknown
// Signature: void FUN_004d8c90(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004d8c90(int param_1,uint param_2,uint param_3)

{
  byte local_68 [100];
  
  FUN_005a28c0(local_68,&DAT_005c58b4,param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}
