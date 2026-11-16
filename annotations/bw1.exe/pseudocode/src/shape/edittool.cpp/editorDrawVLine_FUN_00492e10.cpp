// Name: shape_edittool.cpp_editorDrawVLine_FUN_00492e10
// Address: 00492e10
// Address Range: [[00492e10, 00492e3c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_00492e10(int x,int y1,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_00492e10(int x,int y1,int y2)

{
  if (_DAT_01c3f544 != 0) {
    engine_mini3d_cpp_drawVLine_FUN_00518300(x,y1,y2);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(x,y1,y2);
  return;
}
