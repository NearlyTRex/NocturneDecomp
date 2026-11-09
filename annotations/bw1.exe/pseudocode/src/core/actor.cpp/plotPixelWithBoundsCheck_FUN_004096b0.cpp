// Name: core_actor.cpp_plotPixelWithBoundsCheck_FUN_004096b0
// Address: 004096b0
// Address Range: [[004096b0, 004096db]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096b0(int x,int y)

#include "nocturne.h"

void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096b0(int x,int y)

{
  if ((((-1 < x) && (-1 < y)) && (x < DAT_0061b498)) && (y < DAT_0061b49c)) {
    engine_2d_c_plotPixel_FUN_00401130(x,y);
    return;
  }
  return;
}
