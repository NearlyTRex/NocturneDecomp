// Name: engine_2d.c_FUN_00402840
// Address: 00402840
// Address Range: [[00402840, 004028a1]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void engine_2d_c_FUN_00402840(uint param_1,uint param_2,uint param_3)

{
  byte local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_FUN_004027f0(local_100c,param_1,param_2);
  return;
}
