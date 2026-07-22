// Name: engine_2d.c_FUN_004029f0
// Address: 004029f0
// Address Range: [[004029f0, 00402a5b]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004029f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_2d_c_FUN_004029f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,&local_10);
  local_10 = (byte *)0x0;
  engine_2d_c_FUN_00402980(local_1010,param_1,param_2,param_3);
  return;
}
