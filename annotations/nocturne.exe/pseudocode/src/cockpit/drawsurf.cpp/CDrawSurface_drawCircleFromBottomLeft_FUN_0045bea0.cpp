// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0
// Address: 0045bea0
// Address Range: [[0045bea0, 0045bec0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}
