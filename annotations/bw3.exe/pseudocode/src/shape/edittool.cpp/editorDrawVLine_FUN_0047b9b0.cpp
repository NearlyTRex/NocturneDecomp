// Name: shape_edittool.cpp_editorDrawVLine_FUN_0047b9b0
// Address: 0047b9b0
// Address Range: [[0047b9b0, 0047b9dc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_0047b9b0(int x,int y1,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorDrawVLine_FUN_0047b9b0(int x,int y1,int y2)

{
  if (_DAT_01c5baec != 0) {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(x,y1,y2);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(x,y1,y2);
  return;
}
