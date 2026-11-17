// Name: shape_edittool.cpp_editorFillRectWithBorder_FUN_0047b7c0
// Address: 0047b7c0
// Address Range: [[0047b7c0, 0047b8dc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_0047b7c0(int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b7ec) */

void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_0047b7c0(int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  
  if (g_INT_01c5baec == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(x1,y1,x2,y2,fill_color,border_color);
    return;
  }
  iVar1 = (border_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_004f3520
            ((uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10 |
             (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8);
  engine_mini3d_cpp_drawRect_FUN_004f3a60(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  if (g_INT_01c5baec == 0) {
    g_INT_01c6b5c0 = fill_color;
    engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,y1,x2,y2);
    return;
  }
  iVar1 = (fill_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_004f3520
            ((uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10 |
             (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8 | (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2])
  ;
  engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,y1,x2,y2);
  return;
}
