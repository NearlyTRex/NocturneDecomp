// Name: core_flies.cpp_drawFlyPixelClipped_FUN_004c0040
// Address: 004c0040
// Address Range: [[004c0040, 004c0072]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004c0040(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004c0040(int screen_x,int screen_y,int z_depth)

{
  if ((((-1 < screen_x) && (screen_x < DAT_0061b498)) && (-1 < screen_y)) &&
     (screen_y < DAT_0061b49c)) {
    core_flies_cpp_drawFlyPixel_FUN_004bffb0(screen_x,screen_y,z_depth);
    return;
  }
  return;
}
