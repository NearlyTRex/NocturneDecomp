// Name: engine_2d.c_fillRectWithBorder_FUN_00403250
// Address: 00403250
// Address Range: [[00403250, 004032a8]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403250(int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403250(int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  
  engine_2d_c_fillRectColor_FUN_004031c0(x1,y1,x2,y2,fill_color);
  iVar1 = g_INT_01c6b5c0;
  g_INT_01c6b5c0 = border_color;
  engine_2d_c_drawRect_FUN_00403170(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  g_INT_01c6b5c0 = iVar1;
  return;
}
