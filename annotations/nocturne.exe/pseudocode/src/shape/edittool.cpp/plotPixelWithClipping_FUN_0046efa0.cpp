// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0046efa0
// Address: 0046efa0
// Address Range: [[0046efa0, 0046eff2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(int x_coord,int y_coord,int use_clipping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < DAT_005b761c)) && (y_coord < DAT_005b7620))
     && ((use_clipping == 0 ||
         (((_DAT_01c00c58 <= x_coord && (x_coord < _DAT_01c00c60)) &&
          ((_DAT_01c00c5c <= y_coord && (y_coord < _DAT_01c00c64)))))))) {
    engine_2d_c_plotPixel_FUN_00401530(x_coord,y_coord);
    return;
  }
  return;
}
