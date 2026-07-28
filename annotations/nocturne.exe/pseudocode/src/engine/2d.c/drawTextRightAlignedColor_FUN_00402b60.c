// Name: engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
// Address: 00402b60
// Address Range: [[00402b60, 00402b8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawTextColor_FUN_00402a60(text,(x - iVar1) + 2,y);
  return;
}
