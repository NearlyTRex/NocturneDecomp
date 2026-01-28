// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
// Address: 00487820
// Address Range: [[00487820, 00487840]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820 (CDrawSurface *this_ptr,int x,int y,int radius)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
          (CDrawSurface *this_ptr,int x,int y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(this_ptr,x + radius,y + radius,radius);
  return;
}
