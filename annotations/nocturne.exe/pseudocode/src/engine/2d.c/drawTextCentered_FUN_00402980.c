// Name: engine_2d.c_drawTextCentered_FUN_00402980
// Address: 00402980
// Address Range: [[00402980, 004029b9]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCentered_FUN_00402980(char *text,int left_x,int right_x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCentered_FUN_00402980(char *text,int left_x,int right_x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawText_FUN_00402600(text,(((left_x + right_x) - iVar1) + 2) / 2,y);
  return;
}
