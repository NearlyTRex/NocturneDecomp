// Name: shape_edittool.cpp_editorSetColor_FUN_0047b770
// Address: 0047b770
// Address Range: [[0047b770, 0047b7bf]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetColor_FUN_0047b770(uint color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorSetColor_FUN_0047b770(uint color)

{
  int iVar1;
  
  if (g_INT_01c5baec == 0) {
    g_INT_01c6b5c0 = color;
    return;
  }
  iVar1 = (color & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_004f3520
            ((uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8 |
             (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10);
  return;
}
