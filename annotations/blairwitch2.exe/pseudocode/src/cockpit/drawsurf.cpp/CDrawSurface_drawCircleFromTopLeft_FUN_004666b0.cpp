// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0
// Address: 004666b0
// Address Range: [[004666b0, 004666d0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0(CDrawSurface *this_ptr,int x,int y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0(CDrawSurface *this_ptr,int x,int y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0(this_ptr,x + radius,y + radius,radius);
  return;
}
