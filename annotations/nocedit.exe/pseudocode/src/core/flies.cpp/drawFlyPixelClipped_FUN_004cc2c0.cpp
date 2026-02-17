// Name: core_flies.cpp_drawFlyPixelClipped_FUN_004cc2c0
// Address: 004cc2c0
// Address Range: [[004cc2c0, 004cc2f2]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004cc2c0(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004cc2c0(int screen_x,int screen_y,int z_depth)

{
  if ((((-1 < screen_x) && (screen_x < g_WindowWidth)) && (-1 < screen_y)) &&
     (screen_y < g_WindowHeight)) {
    core_flies_cpp_drawFlyPixel_FUN_004cc230(screen_x,screen_y,z_depth);
    return;
  }
  return;
}
