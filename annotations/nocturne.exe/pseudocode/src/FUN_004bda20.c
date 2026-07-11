// Name: FUN_004bda20
// Address: 004bda20
// Address Range: [[004bda20, 004bda73]]
// Convention: unknown
// Signature: void FUN_004bda20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_004bda20(uint param_1,uint param_2,uint *param_3)

{
  byte local_6c [100];
  
  FUN_00563c90(local_6c,&DAT_00586732,*param_3);
  FUN_004bd910(param_1,param_2,local_6c,100);
  FUN_00566b5c(local_6c,&DAT_00586735,param_3);
  return;
}
