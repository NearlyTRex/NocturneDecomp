// Name: shape_edittool.cpp_editorDrawHLine_FUN_0047b980
// Address: 0047b980
// Address Range: [[0047b980, 0047b9ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_0047b980(int x1,int y,int x2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_0047b980(int x1,int y,int x2)

{
  if (_DAT_01c5baec != 0) {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(x1,y,x2);
    return;
  }
  engine_2d_c_drawHLine_FUN_00402f30(x1,y,x2);
  return;
}
