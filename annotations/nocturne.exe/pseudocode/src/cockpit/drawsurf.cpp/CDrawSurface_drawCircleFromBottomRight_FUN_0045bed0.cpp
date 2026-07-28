// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0
// Address: 0045bed0
// Address Range: [[0045bed0, 0045bef0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
            (this_ptr,bottom_right_x - radius,bottom_right_y - radius,radius);
  return;
}
