// Name: engine_2d.c_FUN_00402980
// Address: 00402980
// Address Range: [[00402980, 004029b9]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402980(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void engine_2d_c_FUN_00402980(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1,param_4);
  engine_2d_c_drawText_FUN_00402600(param_1,(((param_2 + param_3) - iVar1) + 2) / 2);
  return;
}
