// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
// Address: 004885d0
// Address Range: [[004885d0, 00488626]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int border_width, int border_height)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int border_width,int border_height)

{
  int x;
  int y;
  
  x = ((y1 + x1 + 1) - border_width) / 2;
  y = ((y2 + x2 + 1) - border_height) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
            (this_ptr,x,y,border_width + x + -1,border_height + -1 + y);
  return;
}
