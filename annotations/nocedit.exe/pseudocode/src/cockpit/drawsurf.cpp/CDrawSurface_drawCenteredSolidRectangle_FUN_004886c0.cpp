// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_004886c0
// Address: 004886c0
// Address Range: [[004886c0, 00488731]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_004886c0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_004886c0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

{
  int x2;
  int y2;
  
  x2 = width / 2 + center_x;
  if ((width & 1U) == 0) {
    x2 = x2 + -1;
  }
  y2 = height / 2 + center_y;
  if ((height & 1U) == 0) {
    y2 = y2 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
            (this_ptr,center_x - width / 2,center_y - height / 2,x2,y2);
  return;
}
