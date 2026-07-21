// Name: FUN_00402780
// Address: 00402780
// Address Range: [[00402780, 004027e1]]
// Convention: unknown
// Signature: void FUN_00402780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00402780(uint param_1,uint param_2,uint param_3)

{
  byte local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawText_FUN_00402600(local_100c,param_1,param_2);
  return;
}
