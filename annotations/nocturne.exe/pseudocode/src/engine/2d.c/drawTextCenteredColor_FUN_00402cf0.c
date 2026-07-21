// Name: engine_2d.c_drawTextCenteredColor_FUN_00402cf0
// Address: 00402cf0
// Address Range: [[00402cf0, 00402d29]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(param_1,param_4);
  engine_2d_c_drawTextColor_FUN_00402a60(param_1,(((param_2 + param_3) - iVar1) + 2) / 2);
  return;
}
