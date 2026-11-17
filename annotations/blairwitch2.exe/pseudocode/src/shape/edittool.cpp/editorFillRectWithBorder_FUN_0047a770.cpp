// Name: shape_edittool.cpp_editorFillRectWithBorder_FUN_0047a770
// Address: 0047a770
// Address Range: [[0047a770, 0047a88c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_0047a770(int x1,int y1,int x2,int y2,int fill_color,int border_color)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a79c) */

void __cdecl shape_edittool_cpp_editorFillRectWithBorder_FUN_0047a770(int x1,int y1,int x2,int y2,int fill_color,int border_color)

{
  int iVar1;
  
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(x1,y1,x2,y2,fill_color,border_color);
    return;
  }
  iVar1 = (border_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_004f8e20
            ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8);
  engine_mini3d_cpp_drawRect_FUN_004f9340(x1 + -1,y1 + -1,x2 + 1,y2 + 1);
  if (g_INT_01c25f84 == 0) {
    g_INT_01c35e60 = fill_color;
    engine_mini3d_cpp_fillRect_FUN_004f90d0(x1,y1,x2,y2);
    return;
  }
  iVar1 = (fill_color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_004f8e20
            ((uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8 | (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2])
  ;
  engine_mini3d_cpp_fillRect_FUN_004f90d0(x1,y1,x2,y2);
  return;
}
