// Name: shape_edittool.cpp_editorPlotPixel_FUN_00492940
// Address: 00492940
// Address Range: [[00492940, 00492966]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_00492940(int x,int y)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_00492940(int x,int y)

{
  if (g_INT_01c3f544 != 0) {
    engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y);
    return;
  }
  engine_2d_c_plotPixel_FUN_00401130(x,y);
  return;
}
