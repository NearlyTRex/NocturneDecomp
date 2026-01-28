// Name: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
// Address: 005f2f90
// Address Range: [[005f2f90, 005f2fc3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord,int y_coord)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord,int y_coord)

{
  if ((((g_ClipLeft < x_coord) && (g_ClipTop < y_coord)) && (x_coord < g_ClipRight)) &&
     (y_coord < g_ClipBottom)) {
    engine_2d_c_plotPixel_FUN_00401140(x_coord,y_coord);
    return;
  }
  return;
}
