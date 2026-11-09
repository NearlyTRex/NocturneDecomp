// Name: core_flies.cpp_drawFlyPixelClipped_FUN_004a7070
// Address: 004a7070
// Address Range: [[004a7070, 004a70a2]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004a7070(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixelClipped_FUN_004a7070(int screen_x,int screen_y,int z_depth)

{
  if ((((-1 < screen_x) && (screen_x < DAT_006141b8)) && (-1 < screen_y)) &&
     (screen_y < DAT_006141bc)) {
    core_flies_cpp_drawFlyPixel_FUN_004a6fe0(screen_x,screen_y,z_depth);
    return;
  }
  return;
}
