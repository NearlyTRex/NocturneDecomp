// Name: core_morph.cpp_plotPixelSafe_FUN_0052bb50
// Address: 0052bb50
// Address Range: [[0052bb50, 0052bb7b]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_plotPixelSafe_FUN_0052bb50(int x,int y)

#include "nocturne.h"

void __cdecl core_morph_cpp_plotPixelSafe_FUN_0052bb50(int x,int y)

{
  if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
    engine_2d_c_plotPixel_FUN_00401140(x,y);
    return;
  }
  return;
}
