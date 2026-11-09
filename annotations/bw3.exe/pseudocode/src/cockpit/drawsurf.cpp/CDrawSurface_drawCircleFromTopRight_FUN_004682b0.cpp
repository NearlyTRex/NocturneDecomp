// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0
// Address: 004682b0
// Address Range: [[004682b0, 004682d0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
            (this_ptr,top_right_x - radius,top_right_y + radius,radius);
  return;
}
