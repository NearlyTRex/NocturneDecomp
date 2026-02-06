// Name: core_cloth.cpp_plotPixelSafe_FUN_0043c6b0
// Address: 0043c6b0
// Address Range: [[0043c6b0, 0043c6db]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_plotPixelSafe_FUN_0043c6b0(int x,int y)

#include "nocturne.h"

void __cdecl core_cloth_cpp_plotPixelSafe_FUN_0043c6b0(int x,int y)

{
  if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
    engine_2d_c_plotPixel_FUN_00401140(x,y);
    return;
  }
  return;
}
