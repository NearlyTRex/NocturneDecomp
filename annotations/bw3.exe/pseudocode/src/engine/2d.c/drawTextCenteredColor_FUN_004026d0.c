// Name: engine_2d.c_drawTextCenteredColor_FUN_004026d0
// Address: 004026d0
// Address Range: [[004026d0, 00402709]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredColor_FUN_004026d0(char *text,int left_x,int right_x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredColor_FUN_004026d0(char *text,int left_x,int right_x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  engine_2d_c_drawTextColor_FUN_00402440(text,(((left_x + right_x) - iVar1) + 2) / 2,y);
  return;
}
