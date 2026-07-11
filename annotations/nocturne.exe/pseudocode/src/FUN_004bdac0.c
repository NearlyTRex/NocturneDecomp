// Name: FUN_004bdac0
// Address: 004bdac0
// Address Range: [[004bdac0, 004bdb16]]
// Convention: unknown
// Signature: void FUN_004bdac0(undefined4 param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

void FUN_004bdac0(uint param_1,uint param_2,float *param_3)

{
  byte local_68 [100];
  
  FUN_00563c90(local_68,&DAT_0058673b,(double)*param_3);
  FUN_004bd910(param_1,param_2,local_68,100);
  FUN_00566b5c(local_68,&DAT_0058673e,param_3);
  return;
}
