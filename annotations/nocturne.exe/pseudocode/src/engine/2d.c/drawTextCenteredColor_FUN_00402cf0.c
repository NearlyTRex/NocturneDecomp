// Name: engine_2d.c_drawTextCenteredColor_FUN_00402cf0
// Address: 00402cf0
// Address Range: [[00402cf0, 00402d29]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(char *text,int left_x,int right_x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(char *text,int left_x,int right_x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawTextColor_FUN_00402a60(text,(((left_x + right_x) - iVar1) + 2) / 2,y);
  return;
}
