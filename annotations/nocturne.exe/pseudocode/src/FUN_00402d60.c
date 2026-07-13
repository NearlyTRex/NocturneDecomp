// Name: FUN_00402d60
// Address: 00402d60
// Address Range: [[00402d60, 00402dcb]]
// Convention: unknown
// Signature: void FUN_00402d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00402d60(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  FUN_00563a08(local_1010,param_4,&local_10);
  local_10 = (byte *)0x0;
  FUN_00402cf0(local_1010,param_1,param_2,param_3);
  return;
}
