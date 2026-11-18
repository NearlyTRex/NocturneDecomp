// Name: core_actor.cpp_plotPixelWithBoundsCheck_FUN_004096f0
// Address: 004096f0
// Address Range: [[004096f0, 0040971b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096f0(int x,int y)

#include "nocturne.h"

void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096f0(int x,int y)

{
  if ((((-1 < x) && (-1 < y)) && (x < g_INT_005fba18)) && (y < g_INT_005fba1c)) {
    engine_2d_c_plotPixel_FUN_00401130(x,y);
    return;
  }
  return;
}
