// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280
// Address: 00468280
// Address Range: [[00468280, 004682a0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280(CDrawSurface *this_ptr,int x,int y,int radius)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280(CDrawSurface *this_ptr,int x,int y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190(this_ptr,x + radius,y + radius,radius);
  return;
}
