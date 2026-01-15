// Name: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
// Address: 00402530
// Address Range: [[00402530, 0040255b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedColor_FUN_00402530(char * text, int y_pos, int right_x)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402530(char *text,int y_pos,int right_x)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430(text,(y_pos - iVar1) + 2,right_x);
  return;
}
