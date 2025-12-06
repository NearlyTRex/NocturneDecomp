// Name: engine_2d.c_drawTextCentered_FUN_00402350
// Address: 00402350
// Address Range: [[00402350, 00402389]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCentered_FUN_00402350(char * text, int left_x, int right_x, int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCentered_FUN_00402350(char *text,int left_x,int right_x,int y_pos)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0(text,(((left_x + right_x) - iVar1) + 2) / 2,unaff_ESI);
  return;
}
