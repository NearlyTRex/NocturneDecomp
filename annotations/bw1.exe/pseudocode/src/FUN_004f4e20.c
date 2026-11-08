// Name: FUN_004f4e20
// Address: 004f4e20
// Address Range: [[004f4e20, 004f4e61]]
// Convention: unknown
// Signature: void FUN_004f4e20(int param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

void FUN_004f4e20(int param_1,uint param_2,float param_3)

{
  byte local_68 [100];
  
  FUN_005bfb40(local_68,&DAT_005e58f7,(double)param_3);
  (**(code **)(*(int *)(param_1 + 0x200) + 8))(param_1,param_2,local_68);
  return;
}
