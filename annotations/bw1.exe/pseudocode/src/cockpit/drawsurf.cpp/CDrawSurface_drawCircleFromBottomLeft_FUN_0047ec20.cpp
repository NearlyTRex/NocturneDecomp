// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20
// Address: 0047ec20
// Address Range: [[0047ec20, 0047ec40]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}
