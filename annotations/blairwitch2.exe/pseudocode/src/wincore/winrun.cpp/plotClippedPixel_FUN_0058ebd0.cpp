// Name: wincore_winrun.cpp_plotClippedPixel_FUN_0058ebd0
// Address: 0058ebd0
// Address Range: [[0058ebd0, 0058ec03]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_0058ebd0(int x_coord,int y_coord)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_0058ebd0(int x_coord,int y_coord)

{
  if ((((_DAT_01c35e48 < x_coord) && (_DAT_01c35e4c < y_coord)) && (x_coord < _DAT_01c35e50)) &&
     (y_coord < _DAT_01c35e54)) {
    engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
    return;
  }
  return;
}
