// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0
// Address: 004682e0
// Address Range: [[004682e0, 00468300]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}
