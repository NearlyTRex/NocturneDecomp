// Name: wincore_winrun.cpp_plotClippedPixel_FUN_00580890
// Address: 00580890
// Address Range: [[00580890, 005808c3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00580890(int x_coord,int y_coord)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00580890(int x_coord,int y_coord)

{
  if ((((_DAT_01c6b5a8 < x_coord) && (_DAT_01c6b5ac < y_coord)) && (x_coord < _DAT_01c6b5b0)) &&
     (y_coord < _DAT_01c6b5b4)) {
    engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
    return;
  }
  return;
}
