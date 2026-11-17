// Name: shape_edittool.cpp_editorFillRectColor_FUN_0047a890
// Address: 0047a890
// Address Range: [[0047a890, 0047a924]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorFillRectColor_FUN_0047a890(int x1,int y1,int x2,int y2,int color)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a8a1) */

void __cdecl shape_edittool_cpp_editorFillRectColor_FUN_0047a890(int x1,int y1,int x2,int y2,int color)

{
  int iVar1;
  
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(x1,y1,x2,y2,color);
    return;
  }
  iVar1 = (color & 0xffU) * 3;
  engine_mini3d_cpp_setColor_FUN_004f8e20
            ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8);
  engine_mini3d_cpp_fillRect_FUN_004f90d0(x1,y1,x2,y2);
  return;
}
