// Name: shape_edittool.cpp_editorSetColor_FUN_00492bd0
// Address: 00492bd0
// Address Range: [[00492bd0, 00492c1f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetColor_FUN_00492bd0(uint color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorSetColor_FUN_00492bd0(uint color)

{
  int iVar1;
  
  if (g_INT_01c3f544 == 0) {
    g_INT_01c4f020 = color;
    return;
  }
  iVar1 = (color & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << 8 |
             (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << 0x10);
  return;
}
