// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50
// Address: 0047ec50
// Address Range: [[0047ec50, 0047ec70]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
            (this_ptr,bottom_right_x - radius,bottom_right_y - radius,radius);
  return;
}
