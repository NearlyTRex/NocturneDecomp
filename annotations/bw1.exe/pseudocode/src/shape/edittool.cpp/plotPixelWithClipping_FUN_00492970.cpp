// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_00492970
// Address: 00492970
// Address Range: [[00492970, 004929d5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_00492970(int x_coord,int y_coord,int use_clipping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_00492970(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < DAT_0061b498)) && (y_coord < DAT_0061b49c))
     && ((use_clipping == 0 ||
         (((_DAT_01c4f008 <= x_coord && (x_coord < _DAT_01c4f010)) &&
          ((_DAT_01c4f00c <= y_coord && (y_coord < _DAT_01c4f014)))))))) {
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x_coord,y_coord);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_00517f10(x_coord,y_coord);
  }
  return;
}
