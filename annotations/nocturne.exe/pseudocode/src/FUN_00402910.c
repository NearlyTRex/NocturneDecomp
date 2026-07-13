// Name: FUN_00402910
// Address: 00402910
// Address Range: [[00402910, 00402971]]
// Convention: unknown
// Signature: void FUN_00402910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00402910(uint param_1,uint param_2,uint param_3)

{
  byte local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  FUN_00563a08(local_100c,param_3,&local_c);
  local_c = (byte *)0x0;
  FUN_004028b0(local_100c,param_1,param_2);
  return;
}
