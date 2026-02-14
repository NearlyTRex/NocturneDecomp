// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
// Address: 00487880
// Address Range: [[00487880, 004878a0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}
