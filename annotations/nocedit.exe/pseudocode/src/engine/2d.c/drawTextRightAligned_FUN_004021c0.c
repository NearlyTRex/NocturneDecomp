// Name: engine_2d.c_drawTextRightAligned_FUN_004021c0
// Address: 004021c0
// Address Range: [[004021c0, 004021eb]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAligned_FUN_004021c0(char * text, int y_pos, int right_x)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int y_pos,int right_x)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0((char *)y_pos,(right_x - iVar1) + 2,unaff_EBX);
  return;
}
