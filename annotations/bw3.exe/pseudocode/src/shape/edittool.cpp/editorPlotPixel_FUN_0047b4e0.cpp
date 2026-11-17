// Name: shape_edittool.cpp_editorPlotPixel_FUN_0047b4e0
// Address: 0047b4e0
// Address Range: [[0047b4e0, 0047b506]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_0047b4e0(int x,int y)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_0047b4e0(int x,int y)

{
  if (g_INT_01c5baec != 0) {
    engine_mini3d_cpp_drawPixel_FUN_004f36e0(x,y);
    return;
  }
  engine_2d_c_plotPixel_FUN_00401130(x,y);
  return;
}
