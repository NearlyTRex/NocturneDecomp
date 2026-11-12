// Name: engine_2d.c_FUN_00402160
// Address: 00402160
// Address Range: [[00402160, 004021c1]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402160(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void engine_2d_c_FUN_00402160(int param_1,int param_2,uint param_3)

{
  char acStack_100c [4096];
  byte *puStack_c;
  
  puStack_c = &stack0x00000010;
  _vsprintf(acStack_100c,param_3,&puStack_c);
  puStack_c = (byte *)0x0;
  engine_2d_c_drawText_FUN_00401fe0(acStack_100c,param_1,param_2);
  return;
}
