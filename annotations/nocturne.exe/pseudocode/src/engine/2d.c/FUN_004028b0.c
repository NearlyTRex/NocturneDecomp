// Name: engine_2d.c_FUN_004028b0
// Address: 004028b0
// Address Range: [[004028b0, 004028e4]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004028b0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void engine_2d_c_FUN_004028b0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1,param_3);
  engine_2d_c_drawText_FUN_00402600(param_1,param_2 - (iVar1 + -1) / 2);
  return;
}
