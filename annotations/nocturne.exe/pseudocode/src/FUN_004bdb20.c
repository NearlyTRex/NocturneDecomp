// Name: FUN_004bdb20
// Address: 004bdb20
// Address Range: [[004bdb20, 004bdb57]]
// Convention: unknown
// Signature: void FUN_004bdb20(undefined4 param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

void FUN_004bdb20(uint param_1,uint param_2,float param_3)

{
  byte local_64 [100];
  
  FUN_00563c90(local_64,&DAT_00586741,(double)param_3);
  FUN_004bd9a0(param_1,param_2,local_64);
  return;
}
