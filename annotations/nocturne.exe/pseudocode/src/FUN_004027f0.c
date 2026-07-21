// Name: FUN_004027f0
// Address: 004027f0
// Address Range: [[004027f0, 0040281b]]
// Convention: unknown
// Signature: void FUN_004027f0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004027f0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1,param_3);
  engine_2d_c_drawText_FUN_00402600(param_1,(param_2 - iVar1) + 2);
  return;
}
