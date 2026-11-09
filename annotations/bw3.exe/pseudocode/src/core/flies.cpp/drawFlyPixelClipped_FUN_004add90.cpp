// Name: core_flies.cpp_drawFlyPixelClipped_FUN_004add90
// Address: 004add90
// Address Range: [[004add90, 004addc2]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004add90(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004add90(int screen_x,int screen_y,int z_depth)

{
  if ((((-1 < screen_x) && (screen_x < DAT_005fba18)) && (-1 < screen_y)) &&
     (screen_y < DAT_005fba1c)) {
    core_flies_cpp_drawFlyPixel_FUN_004add00(screen_x,screen_y,z_depth);
    return;
  }
  return;
}
