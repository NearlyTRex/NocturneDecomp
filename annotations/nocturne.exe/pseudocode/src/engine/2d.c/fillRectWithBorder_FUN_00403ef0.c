// Name: engine_2d.c_fillRectWithBorder_FUN_00403ef0
// Address: 00403ef0
// Address Range: [[00403ef0, 00403f48]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  
  engine_2d_c_fillRectColor_FUN_00403e60(param_1,param_2,param_3,param_4,param_5);
  uVar1 = _DAT_01c00c70;
  _DAT_01c00c70 = param_6;
  engine_2d_c_drawRect_FUN_00403e10(param_1 + -1,param_2 + -1,param_3 + 1,param_4 + 1);
  _DAT_01c00c70 = uVar1;
  return;
}
