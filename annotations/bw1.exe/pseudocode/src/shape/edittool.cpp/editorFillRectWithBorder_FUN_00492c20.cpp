// Name: shape_edittool.cpp_editorFillRectWithBorder_FUN_00492c20
// Address: 00492c20
// Address Range: [[00492c20, 00492d3c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_00492c20(int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00492c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_00492c20(int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(x1,y1,x2,y2,fill_color,border_color);
    return;
  }
  iVar1 = (border_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
  engine_mini3d_cpp_drawRect_FUN_00518290(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = fill_color;
    engine_mini3d_cpp_fillRect_FUN_00518010(x1,y1,x2,y2);
    return;
  }
  iVar1 = (fill_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 |
             (uint)(byte)(&DAT_01c4e9fa)[iVar1]);
  engine_mini3d_cpp_fillRect_FUN_00518010(x1,y1,x2,y2);
  return;
}
