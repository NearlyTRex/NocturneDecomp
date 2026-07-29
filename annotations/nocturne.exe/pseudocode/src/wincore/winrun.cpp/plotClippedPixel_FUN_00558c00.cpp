// Name: wincore_winrun.cpp_plotClippedPixel_FUN_00558c00
// Address: 00558c00
// Address Range: [[00558c00, 00558c33]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(int x_coord,int y_coord)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(int x_coord,int y_coord)

{
  if ((((_DAT_01c00c58 < x_coord) && (_DAT_01c00c5c < y_coord)) && (x_coord < _DAT_01c00c60)) &&
     (y_coord < _DAT_01c00c64)) {
    engine_2d_c_plotPixel_FUN_00401530(x_coord,y_coord);
    return;
  }
  return;
}
