// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0047a480
// Address: 0047a480
// Address Range: [[0047a480, 0047a4e5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0047a480(int x_coord,int y_coord,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0047a480(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < g_INT_006141b8)) &&
      (y_coord < g_INT_006141bc)) &&
     ((use_clipping == 0 ||
      (((g_INT_01c35e48 <= x_coord && (x_coord < g_ClipRight)) &&
       ((g_INT_01c35e4c <= y_coord && (y_coord < g_INT_01c35e54)))))))) {
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x_coord,y_coord);
  }
  return;
}
