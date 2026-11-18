// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0047b510
// Address: 0047b510
// Address Range: [[0047b510, 0047b575]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0047b510(int x_coord,int y_coord,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0047b510(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < g_INT_005fba18)) &&
      (y_coord < g_INT_005fba1c)) &&
     ((use_clipping == 0 ||
      (((g_INT_01c6b5a8 <= x_coord && (x_coord < g_INT_01c6b5b0)) &&
       ((g_INT_01c6b5ac <= y_coord && (y_coord < g_INT_01c6b5b4)))))))) {
    if (g_INT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_004f36e0(x_coord,y_coord);
  }
  return;
}
