// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710
// Address: 00466710
// Address Range: [[00466710, 00466730]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}
