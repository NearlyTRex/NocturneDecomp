// Name: engine_2d.c_fillRectWithBorder_FUN_00403ef0
// Address: 00403ef0
// Address Range: [[00403ef0, 00403f48]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  uint uVar1;
  
  engine_2d_c_fillRectColor_FUN_00403e60(x1,y1,x2,y2,fill_color);
  uVar1 = _DAT_01c00c70;
  _DAT_01c00c70 = border_color;
  engine_2d_c_drawRect_FUN_00403e10(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  _DAT_01c00c70 = uVar1;
  return;
}
