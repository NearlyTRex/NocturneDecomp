// Name: wincore_winrun.cpp_plotClippedPixel_FUN_00558c00
// Address: 00558c00
// Address Range: [[00558c00, 00558c33]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(int x_coord,int y_coord)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(int x_coord,int y_coord)

{
  if ((((g_ClipLeft < x_coord) && (g_ClipTop < y_coord)) && (x_coord < g_ClipRight)) &&
     (y_coord < g_ClipBottom)) {
    engine_2d_c_plotPixel_FUN_00401530(x_coord,y_coord);
    return;
  }
  return;
}
