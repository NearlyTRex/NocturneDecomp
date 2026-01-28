// Name: engine_2d.c_fillRectWithBorder_FUN_00403200
// Address: 00403200
// Address Range: [[00403200, 00403258]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403200 (int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

void __cdecl
engine_2d_c_fillRectWithBorder_FUN_00403200
          (int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  
  engine_2d_c_fillRectColor_FUN_00403170(x1,y1,x2,y2,fill_color);
  iVar1 = g_ActiveRenderColor;
  g_ActiveRenderColor = border_color;
  engine_2d_c_drawRect_FUN_00403120(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  g_ActiveRenderColor = iVar1;
  return;
}
