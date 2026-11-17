// Name: wincore_winrun.cpp_plotClippedPixel_FUN_0058ebd0
// Address: 0058ebd0
// Address Range: [[0058ebd0, 0058ec03]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_0058ebd0(int x_coord,int y_coord)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_0058ebd0(int x_coord,int y_coord)

{
  if ((((g_INT_01c35e48 < x_coord) && (g_INT_01c35e4c < y_coord)) && (x_coord < g_INT_01c35e50)) &&
     (y_coord < g_INT_01c35e54)) {
    engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
    return;
  }
  return;
}
