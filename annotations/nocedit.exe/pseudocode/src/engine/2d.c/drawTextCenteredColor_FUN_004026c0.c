// Name: engine_2d.c_drawTextCenteredColor_FUN_004026c0
// Address: 004026c0
// Address Range: [[004026c0, 004026f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredColor_FUN_004026c0(char *text,int left_x,int right_x,int y_pos)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredColor_FUN_004026c0(char *text,int left_x,int right_x,int y_pos)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430(text,(((left_x + right_x) - iVar1) + 2) / 2,y_pos);
  return;
}
