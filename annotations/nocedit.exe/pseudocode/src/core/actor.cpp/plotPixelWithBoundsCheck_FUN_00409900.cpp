// Name: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900
// Address: 00409900
// Address Range: [[00409900, 0040992b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409900(int x,int y)

#include "nocturne.h"

void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409900(int x,int y)

{
  if ((((-1 < x) && (-1 < y)) && (x < g_WindowWidth)) && (y < g_WindowHeight)) {
    engine_2d_c_plotPixel_FUN_00401140(x,y);
    return;
  }
  return;
}
