// Name: shape_edittool.cpp_editorSetColor_FUN_0047a720
// Address: 0047a720
// Address Range: [[0047a720, 0047a76f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetColor_FUN_0047a720(uint color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorSetColor_FUN_0047a720(uint color)

{
  int iVar1;
  
  if (g_INT_01c25f84 == 0) {
    g_INT_01c35e60 = color;
    return;
  }
  iVar1 = (color & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_004f8e20
            ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8 |
             (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10);
  return;
}
