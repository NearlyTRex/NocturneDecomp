// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0
// Address: 004666e0
// Address Range: [[004666e0, 00466700]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0
            (this_ptr,top_right_x - radius,top_right_y + radius,radius);
  return;
}
