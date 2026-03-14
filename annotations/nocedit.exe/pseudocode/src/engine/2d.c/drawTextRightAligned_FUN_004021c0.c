// Name: engine_2d.c_drawTextRightAligned_FUN_004021c0
// Address: 004021c0
// Address Range: [[004021c0, 004021eb]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAligned_FUN_004021c0(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0(text,(x - iVar1) + 2,y);
  return;
}
