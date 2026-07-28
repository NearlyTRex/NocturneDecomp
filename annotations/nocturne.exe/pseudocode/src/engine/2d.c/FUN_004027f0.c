// Name: engine_2d.c_FUN_004027f0
// Address: 004027f0
// Address Range: [[004027f0, 0040281b]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004027f0(char *param_1,int param_2,int param_3)

#include "nocturne.h"

void engine_2d_c_FUN_004027f0(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1);
  engine_2d_c_drawText_FUN_00402600(param_1,(param_2 - iVar1) + 2,param_3);
  return;
}
