// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190
// Address: 0049d190
// Address Range: [[0049d190, 0049d1e2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0049d190(int x_coord,int y_coord,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0049d190(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < g_WindowWidth)) &&
      (y_coord < g_WindowHeight)) &&
     ((use_clipping == 0 ||
      (((g_ClipLeft <= x_coord && (x_coord < g_ClipRight)) &&
       ((g_ClipTop <= y_coord && (y_coord < g_ClipBottom)))))))) {
    engine_2d_c_plotPixel_FUN_00401140(x_coord,y_coord);
    return;
  }
  return;
}
