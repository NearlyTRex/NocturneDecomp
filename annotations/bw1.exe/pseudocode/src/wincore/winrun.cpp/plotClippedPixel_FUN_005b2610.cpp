// Name: wincore_winrun.cpp_plotClippedPixel_FUN_005b2610
// Address: 005b2610
// Address Range: [[005b2610, 005b2643]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005b2610(int x_coord,int y_coord)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005b2610(int x_coord,int y_coord)

{
  if ((((g_INT_01c4f008 < x_coord) && (g_INT_01c4f00c < y_coord)) && (x_coord < g_INT_01c4f010)) &&
     (y_coord < g_INT_01c4f014)) {
    engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
    return;
  }
  return;
}
