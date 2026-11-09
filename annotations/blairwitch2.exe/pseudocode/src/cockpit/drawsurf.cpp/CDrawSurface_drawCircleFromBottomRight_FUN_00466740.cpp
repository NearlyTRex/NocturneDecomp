// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740
// Address: 00466740
// Address Range: [[00466740, 00466760]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0
            (this_ptr,bottom_right_x - radius,bottom_right_y - radius,radius);
  return;
}
