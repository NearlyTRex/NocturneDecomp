// Name: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409860
// Address: 00409860
// Address Range: [[00409860, 0040988b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409860(int x,int y)

#include "nocturne.h"

void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409860(int x,int y)

{
  if ((((-1 < x) && (-1 < y)) && (x < DAT_006141b8)) && (y < DAT_006141bc)) {
    engine_2d_c_plotPixel_FUN_00401130(x,y);
    return;
  }
  return;
}
