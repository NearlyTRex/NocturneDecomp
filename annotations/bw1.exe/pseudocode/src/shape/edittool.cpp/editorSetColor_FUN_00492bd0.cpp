// Name: shape_edittool.cpp_editorSetColor_FUN_00492bd0
// Address: 00492bd0
// Address Range: [[00492bd0, 00492c1f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorSetColor_FUN_00492bd0(uint color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorSetColor_FUN_00492bd0(uint color)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = color;
    return;
  }
  iVar1 = (color & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 | (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10);
  return;
}
