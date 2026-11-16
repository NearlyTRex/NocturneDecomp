// Name: shape_edittool.cpp_editorPlotPixel_FUN_0047a450
// Address: 0047a450
// Address Range: [[0047a450, 0047a476]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_0047a450(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_editorPlotPixel_FUN_0047a450(int x,int y)

{
  if (_DAT_01c25f84 != 0) {
    engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x,y);
    return;
  }
  engine_2d_c_plotPixel_FUN_00401130(x,y);
  return;
}
